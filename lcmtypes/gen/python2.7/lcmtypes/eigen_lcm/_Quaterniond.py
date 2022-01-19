# This file automatically generated by skymarshal
# DO NOT MODIFY BY HAND
# fmt: off
# mypy: disallow-untyped-defs

import copy
import typing as T  # pylint: disable=unused-import

from io import BytesIO
import struct

class Quaterniond(object):
    __slots__ = ["xyzw"]  # type: T.List[str]

    def __init__(
        self,
        xyzw=None,  # type: T.List[float]
        _skip_initialize=False,  # type: bool
    ):
        # type: (...) -> None
        """ If _skip_initialize is True, all other constructor arguments are ignored """
        if _skip_initialize:
            return
        self.xyzw = [ 0.0 for dim0 in range(4) ] if xyzw is None else xyzw  # type: T.List[float]

    @staticmethod
    def _skytype_meta():
        # type: () -> T.Dict[str, str]
        return dict(
            type="struct",
            package="eigen_lcm",
            name="Quaterniond",
        )

    @classmethod
    def _default(cls):
        # type: () -> Quaterniond
        return cls()

    def __repr__(self):
        # type: () -> str
        return "Quaterniond({})".format(
            ", ".join("{}={}".format(name, repr(getattr(self, name))) for name in self.__slots__))

    def __eq__(self, other):
        # type: (object) -> bool
        if not isinstance(other, Quaterniond):
            return NotImplemented
        return (
            (self.xyzw==other.xyzw)
        )
    # Disallow hashing for python struct lcmtypes.
    __hash__ = None  # type: ignore

    def encode(self):
        # type: () -> bytes
        buf = BytesIO()
        buf.write(Quaterniond._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        # type: (T.BinaryIO) -> None
        buf.write(Quaterniond._CACHED_STRUCT_0.pack(*self.xyzw[:4]))

    @staticmethod
    def decode(data):
        # type: (T.Union[bytes, T.BinaryIO]) -> Quaterniond
        # NOTE(eric): This function can technically accept either a BinaryIO or
        # anything that supports the C++ Buffer Protocol,
        # which is unspecifiable in type hints.

        if hasattr(data, "read"):
            # NOTE(eric): mypy isn't able to figure out the hasattr check
            buf = T.cast(T.BinaryIO, data)
        else:
            buf = BytesIO(T.cast(bytes, data))

        if buf.read(8) != Quaterniond._get_packed_fingerprint():
            raise ValueError("Decode error")
        return Quaterniond._decode_one(buf)

    @staticmethod
    def _decode_one(buf):
        # type: (T.BinaryIO) -> Quaterniond
        self = Quaterniond(_skip_initialize=True)
        self.xyzw = list(Quaterniond._CACHED_STRUCT_0.unpack(buf.read(32)))
        return self

    @staticmethod
    def _get_hash_recursive(parents):
        # type: (T.List[T.Type]) -> int
        if Quaterniond in parents: return 0
        tmphash = (0x7e535f5ac82123f2) & 0xffffffffffffffff
        tmphash = (((tmphash<<1)&0xffffffffffffffff)  + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash

    _packed_fingerprint = None  # type: T.Optional[bytes]

    @staticmethod
    def _get_packed_fingerprint():
        # type: () -> bytes
        if Quaterniond._packed_fingerprint is None:
            Quaterniond._packed_fingerprint = struct.pack(">Q", Quaterniond._get_hash_recursive([]))
        return Quaterniond._packed_fingerprint

    def deepcopy(self, **kwargs):
        # type: (**T.Any) -> Quaterniond
        """Ptree-style deep copy. Returns a copy w/ specified members replaced."""
        result = copy.deepcopy(self)
        for key in kwargs:
            if not hasattr(result, key):
                raise KeyError("Type Quaterniond does not have attribute: " + str(key))
            setattr(result, key, kwargs[key])
        return result

    _CACHED_STRUCT_0 = struct.Struct(">4d")
