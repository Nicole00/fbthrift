/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::cpp2::MyEnum> {
  using type = ::cpp2::MyEnum;
  static constexpr const std::size_t size = 3;
  static constexpr const std::array<type, 3> values = {{
    type::MyValue1,
    type::MyValue2,
    type::REALM,
  }};
  static constexpr const std::array<folly::StringPiece, 3> names = {{
    "MyValue1",
    "MyValue2",
    "DOMAIN",
  }};
};

}} // apache::thrift
