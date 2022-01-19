# This file automatically generated by skymarshal
# DO NOT MODIFY BY HAND
# fmt: off
# mypy: disallow-untyped-defs

import copy
import typing as T  # pylint: disable=unused-import

from io import BytesIO
import struct

class Matrix3f(object):
    __slots__ = ["data"]  # type: T.List[str]

    def __init__(
        self,
        data=None,  # type: T.List[float]
        _skip_initialize=False,  # type: bool
    ):
        # type: (...) -> None
        """ If _skip_initialize is True, all other constructor arguments are ignored """
        if _skip_initialize:
            return
        self.data = [ 0.0 for dim0 in range(9) ] if data is None else data  # type: T.List[float]

    @staticmethod
    def _skytype_meta():
        # type: () -> T.Dict[str, str]
        return dict(
            type="struct",
            package="eigen_lcm",
            name="Matrix3f",
        )

    @classmethod
    def _default(cls):
        # type: () -> Matrix3f
        return cls()

    def __repr__(self):
        # type: () -> str
        return "Matrix3f({})".format(
            ", ".join("{}={}".format(name, repr(getattr(self, name))) for name in self.__slots__))

    def __eq__(self, other):
        # type: (object) -> bool
        if not isinstance(other, Matrix3f):
            return NotImplemented
        return (
            (self.data==other.data)
        )
    # Disallow hashing for python struct lcmtypes.
    __hash__ = None  # type: ignore

    def encode(self):
        # type: () -> bytes
        buf = BytesIO()
        buf.write(Matrix3f._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        # type: (T.BinaryIO) -> None
        buf.write(Matrix3f._CACHED_STRUCT_0.pack(*self.data[:9]))

    @staticmethod
    def decode(data):
        # type: (T.Union[bytes, T.BinaryIO]) -> Matrix3f
        # NOTE(eric): This function can technically accept either a BinaryIO or
        # anything that supports the C++ Buffer Protocol,
        # which is unspecifiable in type hints.

        if hasattr(data, "read"):
            # NOTE(eric): mypy isn't able to figure out the hasattr check
            buf = T.cast(T.BinaryIO, data)
        else:
            buf = BytesIO(T.cast(bytes, data))

        if buf.read(8) != Matrix3f._get_packed_fingerprint():
            raise ValueError("Decode error")
        return Matrix3f._decode_one(buf)

    @staticmethod
    def _decode_one(buf):
        # type: (T.BinaryIO) -> Matrix3f
        self = Matrix3f(_skip_initialize=True)
        self.data = list(Matrix3f._CACHED_STRUCT_0.unpack(buf.read(36)))
        return self

    @staticmethod
    def _get_hash_recursive(parents):
        # type: (T.List[T.Type]) -> int
        if Matrix3f in parents: return 0
        tmphash = (0x5c782a36eaf5245f) & 0xffffffffffffffff
        tmphash = (((tmphash<<1)&0xffffffffffffffff)  + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash

    _packed_fingerprint = None  # type: T.Optional[bytes]

    @staticmethod
    def _get_packed_fingerprint():
        # type: () -> bytes
        if Matrix3f._packed_fingerprint is None:
            Matrix3f._packed_fingerprint = struct.pack(">Q", Matrix3f._get_hash_recursive([]))
        return Matrix3f._packed_fingerprint

    def deepcopy(self, **kwargs):
        # type: (**T.Any) -> Matrix3f
        """Ptree-style deep copy. Returns a copy w/ specified members replaced."""
        result = copy.deepcopy(self)
        for key in kwargs:
            if not hasattr(result, key):
                raise KeyError("Type Matrix3f does not have attribute: " + str(key))
            setattr(result, key, kwargs[key])
        return result

    _CACHED_STRUCT_0 = struct.Struct(">9f")
