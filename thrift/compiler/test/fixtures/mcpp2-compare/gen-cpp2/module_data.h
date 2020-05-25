/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::some::valid::ns::MyEnumA> {
  using type = ::some::valid::ns::MyEnumA;
  static constexpr const std::size_t size = 3;
  static constexpr const std::array<type, 3> values = {{
    type::fieldA,
    type::fieldB,
    type::fieldC,
  }};
  static constexpr const std::array<folly::StringPiece, 3> names = {{
    "fieldA",
    "fieldB",
    "fieldC",
  }};
};
template <> struct TEnumDataStorage<::some::valid::ns::AnnotatedEnum> {
  using type = ::some::valid::ns::AnnotatedEnum;
  static constexpr const std::size_t size = 3;
  static constexpr const std::array<type, 3> values = {{
    type::FIELDA,
    type::FIELDB,
    type::FIELDC,
  }};
  static constexpr const std::array<folly::StringPiece, 3> names = {{
    "FIELDA",
    "FIELDB",
    "FIELDC",
  }};
};
template <> struct TEnumDataStorage<::some::valid::ns::AnnotatedEnum2> {
  using type = ::some::valid::ns::AnnotatedEnum2;
  static constexpr const std::size_t size = 3;
  static constexpr const std::array<type, 3> values = {{
    type::FIELDA,
    type::FIELDB,
    type::FIELDC,
  }};
  static constexpr const std::array<folly::StringPiece, 3> names = {{
    "FIELDA",
    "FIELDB",
    "FIELDC",
  }};
};
template <> struct TEnumDataStorage<::some::valid::ns::MyEnumB> {
  using type = ::some::valid::ns::MyEnumB;
  static constexpr const std::size_t size = 1;
  static constexpr const std::array<type, 1> values = {{
    type::AField,
  }};
  static constexpr const std::array<folly::StringPiece, 1> names = {{
    "AField",
  }};
};

}} // apache::thrift
