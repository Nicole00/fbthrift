#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions


class Foo(_fbthrift_py3lite_types.Struct):
    MyInt: _typing.Final[int] = ...
    def __init__(
        self, *,
        MyInt: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        MyInt: _typing.Optional[int]=...
    ) -> Foo: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...

    def to_py3_struct(self) -> "test.namespace_from_package_without_module_name.module.types.Foo": ...   # type: ignore
    def to_py_legacy_struct(self) -> "namespace_from_package_without_module_name.module.ttypes.Foo": ...   # type: ignore


class _fbthrift_TestService_init_args(_fbthrift_py3lite_types.Struct):
    int1: _typing.Final[int] = ...

    def __init__(
        self, *,
        int1: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...

class _fbthrift_TestService_init_result(_fbthrift_py3lite_types.Struct):
    success: _typing.Final[int]

    def __init__(
        self, *, success: _typing.Optional[int] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            int,
        ]]]: ...


