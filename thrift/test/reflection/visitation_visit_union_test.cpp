/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <folly/portability/GTest.h>
#include <thrift/lib/thrift/gen-cpp2/metadata_for_each_field.h>
#include <thrift/lib/thrift/gen-cpp2/metadata_visit_union.h>
#include <thrift/test/gen-cpp2/UnionFieldRef_for_each_field.h>
#include <thrift/test/gen-cpp2/UnionFieldRef_visit_union.h>
#include <any>

namespace apache {
namespace thrift {
namespace test {
namespace {

struct VisitUnionAdapter {
  template <class... Args>
  void operator()(Args&&... args) const {
    apache::thrift::visit_union(std::forward<Args>(args)...);
  }
};

struct ForEachFieldAdapter {
  template <class T, class F>
  void operator()(T&& t, F f) const {
    apache::thrift::for_each_field(
        std::forward<T>(t), [&](auto&& meta, auto&& ref) {
          if (t.getType() == meta.id_ref()) {
            f(meta, *ref);
          }
        });
  }
};

template <class Adapter>
struct VisitUnionTest : ::testing::Test {
  static constexpr Adapter adapter;
};

using Adapters = ::testing::Types<VisitUnionAdapter, ForEachFieldAdapter>;
TYPED_TEST_CASE(VisitUnionTest, Adapters);

TYPED_TEST(VisitUnionTest, basic) {
  Basic a;
  TestFixture::adapter(a, [&](auto&&, auto&&) { FAIL(); });

  static const std::string str = "foo";
  a.str_ref() = str;
  TestFixture::adapter(a, [](auto&& meta, auto&& v) {
    EXPECT_EQ(*meta.name_ref(), "str");
    EXPECT_EQ(meta.type_ref()->getType(), meta.type_ref()->t_primitive);
    EXPECT_EQ(*meta.id_ref(), 2);
    EXPECT_EQ(*meta.is_optional_ref(), false);
    if constexpr (std::is_same_v<decltype(v), std::string&>) {
      EXPECT_EQ(v, str);
    } else {
      FAIL();
    }
  });

  static const int64_t int64 = 42LL << 42;
  a.int64_ref() = int64;
  TestFixture::adapter(a, [](auto&& meta, auto&& v) {
    EXPECT_EQ(*meta.name_ref(), "int64");
    EXPECT_EQ(meta.type_ref()->getType(), meta.type_ref()->t_primitive);
    EXPECT_EQ(*meta.id_ref(), 1);
    EXPECT_EQ(*meta.is_optional_ref(), false);
    EXPECT_EQ(typeid(v), typeid(int64_t));
    if constexpr (std::is_same_v<decltype(v), int64_t&>) {
      EXPECT_EQ(v, int64);
    } else {
      FAIL();
    }
  });

  static const std::vector<int32_t> list_i32 = {3, 1, 2};
  a.list_i32_ref() = list_i32;
  TestFixture::adapter(a, [](auto&& meta, auto&& v) {
    EXPECT_EQ(*meta.name_ref(), "list_i32");
    EXPECT_EQ(meta.type_ref()->getType(), meta.type_ref()->t_list);
    EXPECT_EQ(*meta.id_ref(), 4);
    EXPECT_EQ(*meta.is_optional_ref(), false);
    if constexpr (std::is_same_v<decltype(v), std::vector<int32_t>&>) {
      EXPECT_EQ(v, list_i32);
    } else {
      FAIL();
    }
  });
}

TYPED_TEST(VisitUnionTest, Metadata) {
  Basic a;
  a.int64_ref() = 42;
  TestFixture::adapter(a, [](auto&& m, auto&&) {
    // ThriftType itself is union, we can visit it like ordinary thrift union
    TestFixture::adapter(*m.type_ref(), [](auto&& meta, std::any value) {
      EXPECT_EQ(*meta.name_ref(), "t_primitive");
      EXPECT_EQ(meta.type_ref()->getType(), meta.type_ref()->t_enum);
      EXPECT_EQ(
          std::any_cast<metadata::ThriftPrimitiveType>(value),
          metadata::ThriftPrimitiveType::THRIFT_I64_TYPE);
    });
  });
}

struct TestPassCallableByValue {
  int i = 0;
  template <class... Args>
  void operator()(Args&&...) {
    ++i;
  }
};

TYPED_TEST(VisitUnionTest, PassCallableByReference) {
  TestPassCallableByValue f;
  Basic a;
  a.int64_ref() = 42;
  TestFixture::adapter(a, f);
  EXPECT_EQ(f.i, 0);
  TestFixture::adapter(a, std::ref(f));
  EXPECT_EQ(f.i, 1);
}

} // namespace
} // namespace test
} // namespace thrift
} // namespace apache
