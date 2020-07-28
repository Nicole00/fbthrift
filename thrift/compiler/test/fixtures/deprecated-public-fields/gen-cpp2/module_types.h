/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct bar;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_bar
#define APACHE_THRIFT_ACCESSOR_bar
APACHE_THRIFT_DEFINE_ACCESSOR(bar);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class Foo;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class Foo final  {
 public:
  using __fbthrift_cpp2_type = Foo;

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  Foo() :
      bar(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Foo(apache::thrift::FragileConstructor, int32_t bar__arg);

  Foo(Foo&&) = default;

  Foo(const Foo&) = default;

  Foo& operator=(Foo&&) = default;

  Foo& operator=(const Foo&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
 private:
  int32_t bar;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool bar;
  } __isset = {};
  bool operator==(const Foo& rhs) const;
#ifndef SWIG
  friend bool operator!=(const Foo& __x, const Foo& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const Foo& rhs) const;
#ifndef SWIG
  friend bool operator>(const Foo& __x, const Foo& __y) {
    return __y < __x;
  }
  friend bool operator<=(const Foo& __x, const Foo& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const Foo& __x, const Foo& __y) {
    return !(__x < __y);
  }
#endif

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> bar_ref() const& {
    return {this->bar, __isset.bar};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> bar_ref() const&& {
    return {std::move(this->bar), __isset.bar};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> bar_ref() & {
    return {this->bar, __isset.bar};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> bar_ref() && {
    return {std::move(this->bar), __isset.bar};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

  const int32_t* get_bar() const& {
    return bar_ref() ? std::addressof(bar) : nullptr;
  }

  int32_t* get_bar() & {
    return bar_ref() ? std::addressof(bar) : nullptr;
  }
  int32_t* get_bar() && = delete;

  int32_t& set_bar(int32_t bar_) {
    bar = bar_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.bar = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return bar;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Foo >;
};

void swap(Foo& a, Foo& b);

template <class Protocol_>
uint32_t Foo::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
