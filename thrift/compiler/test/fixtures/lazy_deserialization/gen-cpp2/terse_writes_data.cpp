/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/lazy_deserialization/src/terse_writes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/terse_writes_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::apache::thrift::test::TerseFoo>::name = "TerseFoo";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::TerseFoo>::fields_names = {{
  "field1",
  "field2",
  "field3",
  "field4",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::TerseFoo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::TerseFoo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::TerseFoo>::storage_names = {{
  "__fbthrift_field_field1",
  "__fbthrift_field_field2",
  "__fbthrift_field_field3",
  "__fbthrift_field_field4",
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::apache::thrift::test::TerseFoo>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::apache::thrift::test::TerseLazyFoo>::name = "TerseLazyFoo";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::TerseLazyFoo>::fields_names = {{
  "field1",
  "field2",
  "field3",
  "field4",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::TerseLazyFoo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::TerseLazyFoo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::TerseLazyFoo>::storage_names = {{
  "__fbthrift_field_field1",
  "__fbthrift_field_field2",
  "__fbthrift_field_field3",
  "__fbthrift_field_field4",
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::apache::thrift::test::TerseLazyFoo>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::apache::thrift::test::TerseOptionalFoo>::name = "TerseOptionalFoo";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::TerseOptionalFoo>::fields_names = {{
  "field1",
  "field2",
  "field3",
  "field4",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::TerseOptionalFoo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::TerseOptionalFoo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::TerseOptionalFoo>::storage_names = {{
  "__fbthrift_field_field1",
  "__fbthrift_field_field2",
  "__fbthrift_field_field3",
  "__fbthrift_field_field4",
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::apache::thrift::test::TerseOptionalFoo>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

THRIFT_DATA_MEMBER const folly::StringPiece TStructDataStorage<::apache::thrift::test::TerseOptionalLazyFoo>::name = "TerseOptionalLazyFoo";
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::TerseOptionalLazyFoo>::fields_names = {{
  "field1",
  "field2",
  "field3",
  "field4",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::TerseOptionalLazyFoo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::TerseOptionalLazyFoo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::TerseOptionalLazyFoo>::storage_names = {{
  "__fbthrift_field_field1",
  "__fbthrift_field_field2",
  "__fbthrift_field_field3",
  "__fbthrift_field_field4",
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::apache::thrift::test::TerseOptionalLazyFoo>::isset_indexes = {{
  0,
  1,
  2,
  3,
}};

} // namespace thrift
} // namespace apache
