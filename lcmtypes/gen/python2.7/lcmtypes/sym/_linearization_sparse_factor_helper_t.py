# This file automatically generated by skymarshal
# DO NOT MODIFY BY HAND
# fmt: off
# mypy: disallow-untyped-defs

import copy
import typing as T  # pylint: disable=unused-import

from io import BytesIO
import struct
from lcmtypes.sym._linearization_sparse_key_helper_t import linearization_sparse_key_helper_t

class linearization_sparse_factor_helper_t(object):
    __slots__ = ["residual_dim", "combined_residual_offset", "key_helpers", "jacobian_index_map", "hessian_index_map"]  # type: T.List[str]

    def __init__(
        self,
        residual_dim=0,  # type: int
        combined_residual_offset=0,  # type: int
        key_helpers=None,  # type: T.List[linearization_sparse_key_helper_t]
        jacobian_index_map=None,  # type: T.Sequence[int]
        hessian_index_map=None,  # type: T.Sequence[int]
        _skip_initialize=False,  # type: bool
    ):
        # type: (...) -> None
        """ If _skip_initialize is True, all other constructor arguments are ignored """
        if _skip_initialize:
            return
        # Total residual dimension of the factor
        self.residual_dim = residual_dim
        # Offset of this factor's residual slice within the whole problem residual
        self.combined_residual_offset = combined_residual_offset
        self.key_helpers = [] if key_helpers is None else key_helpers  # type: T.List[linearization_sparse_key_helper_t]
        self.jacobian_index_map = [] if jacobian_index_map is None else jacobian_index_map  # type: T.Sequence[int]
        self.hessian_index_map = [] if hessian_index_map is None else hessian_index_map  # type: T.Sequence[int]

    @staticmethod
    def _skytype_meta():
        # type: () -> T.Dict[str, str]
        return dict(
            type="struct",
            package="sym",
            name="linearization_sparse_factor_helper_t",
        )

    @classmethod
    def _default(cls):
        # type: () -> linearization_sparse_factor_helper_t
        return cls()

    def __repr__(self):
        # type: () -> str
        return "linearization_sparse_factor_helper_t({})".format(
            ", ".join("{}={}".format(name, repr(getattr(self, name))) for name in self.__slots__))

    def __eq__(self, other):
        # type: (object) -> bool
        if not isinstance(other, linearization_sparse_factor_helper_t):
            return NotImplemented
        return (
            (self.residual_dim==other.residual_dim) and
            (self.combined_residual_offset==other.combined_residual_offset) and
            (self.key_helpers==other.key_helpers) and
            (self.jacobian_index_map==other.jacobian_index_map) and
            (self.hessian_index_map==other.hessian_index_map)
        )
    # Disallow hashing for python struct lcmtypes.
    __hash__ = None  # type: ignore

    def encode(self):
        # type: () -> bytes
        buf = BytesIO()
        buf.write(linearization_sparse_factor_helper_t._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        # type: (T.BinaryIO) -> None
        buf.write(linearization_sparse_factor_helper_t._CACHED_STRUCT_0.pack(self.residual_dim, self.combined_residual_offset))
        v_num_key_helpers = len(self.key_helpers)
        buf.write(linearization_sparse_factor_helper_t._CACHED_STRUCT_1.pack(v_num_key_helpers))
        for i0 in range(v_num_key_helpers):
            if hasattr(self.key_helpers[i0], '_get_packed_fingerprint'):
                assert self.key_helpers[i0]._get_packed_fingerprint() == linearization_sparse_key_helper_t._get_packed_fingerprint()
            else:
                assert self.key_helpers[i0]._get_hash_recursive([]) == linearization_sparse_key_helper_t._get_hash_recursive([])
            self.key_helpers[i0]._encode_one(buf)
        v_num_jacobian_index_map = len(self.jacobian_index_map)
        buf.write(linearization_sparse_factor_helper_t._CACHED_STRUCT_1.pack(v_num_jacobian_index_map))
        buf.write(struct.pack('>%di' % v_num_jacobian_index_map, *self.jacobian_index_map[:v_num_jacobian_index_map]))
        v_num_hessian_index_map = len(self.hessian_index_map)
        buf.write(linearization_sparse_factor_helper_t._CACHED_STRUCT_1.pack(v_num_hessian_index_map))
        buf.write(struct.pack('>%di' % v_num_hessian_index_map, *self.hessian_index_map[:v_num_hessian_index_map]))

    @staticmethod
    def decode(data):
        # type: (T.Union[bytes, T.BinaryIO]) -> linearization_sparse_factor_helper_t
        # NOTE(eric): This function can technically accept either a BinaryIO or
        # anything that supports the C++ Buffer Protocol,
        # which is unspecifiable in type hints.

        if hasattr(data, "read"):
            # NOTE(eric): mypy isn't able to figure out the hasattr check
            buf = T.cast(T.BinaryIO, data)
        else:
            buf = BytesIO(T.cast(bytes, data))

        if buf.read(8) != linearization_sparse_factor_helper_t._get_packed_fingerprint():
            raise ValueError("Decode error")
        return linearization_sparse_factor_helper_t._decode_one(buf)

    @staticmethod
    def _decode_one(buf):
        # type: (T.BinaryIO) -> linearization_sparse_factor_helper_t
        self = linearization_sparse_factor_helper_t(_skip_initialize=True)
        self.residual_dim, self.combined_residual_offset = linearization_sparse_factor_helper_t._CACHED_STRUCT_0.unpack(buf.read(8))
        v_num_key_helpers = linearization_sparse_factor_helper_t._CACHED_STRUCT_1.unpack(buf.read(4))[0]
        self.key_helpers = []
        for i0 in range(v_num_key_helpers):
            self.key_helpers.append(linearization_sparse_key_helper_t._decode_one(buf))
        v_num_jacobian_index_map = linearization_sparse_factor_helper_t._CACHED_STRUCT_1.unpack(buf.read(4))[0]
        self.jacobian_index_map = struct.unpack('>%di' % v_num_jacobian_index_map, buf.read(v_num_jacobian_index_map * 4))
        v_num_hessian_index_map = linearization_sparse_factor_helper_t._CACHED_STRUCT_1.unpack(buf.read(4))[0]
        self.hessian_index_map = struct.unpack('>%di' % v_num_hessian_index_map, buf.read(v_num_hessian_index_map * 4))
        return self

    @staticmethod
    def _get_hash_recursive(parents):
        # type: (T.List[T.Type]) -> int
        if linearization_sparse_factor_helper_t in parents: return 0
        newparents = parents + [linearization_sparse_factor_helper_t]
        tmphash = (0xec50286eabbb5f0b+ linearization_sparse_key_helper_t._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash = (((tmphash<<1)&0xffffffffffffffff)  + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash

    _packed_fingerprint = None  # type: T.Optional[bytes]

    @staticmethod
    def _get_packed_fingerprint():
        # type: () -> bytes
        if linearization_sparse_factor_helper_t._packed_fingerprint is None:
            linearization_sparse_factor_helper_t._packed_fingerprint = struct.pack(">Q", linearization_sparse_factor_helper_t._get_hash_recursive([]))
        return linearization_sparse_factor_helper_t._packed_fingerprint

    def deepcopy(self, **kwargs):
        # type: (**T.Any) -> linearization_sparse_factor_helper_t
        """Ptree-style deep copy. Returns a copy w/ specified members replaced."""
        result = copy.deepcopy(self)
        for key in kwargs:
            if not hasattr(result, key):
                raise KeyError("Type linearization_sparse_factor_helper_t does not have attribute: " + str(key))
            setattr(result, key, kwargs[key])
        return result

    _CACHED_STRUCT_0 = struct.Struct(">ii")
    _CACHED_STRUCT_1 = struct.Struct(">i")
