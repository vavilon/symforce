// -----------------------------------------------------------------------------
// This file was autogenerated by symforce. Do NOT modify by hand.
// -----------------------------------------------------------------------------
#pragma once

#include <Eigen/Dense>
#include <geo/pose3.h>

namespace sym {

/**
 * Composition of two elements in the group.
 *
 * Args:
 *     a (Element):
 *     b (Element):
 *
 * Returns:
 *     geo.Matrix: Jacobian for arg 0 (a)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 6, 6> ComposePose3_Jacobian0(const geo::Pose3<Scalar>& a,
                                                   const geo::Pose3<Scalar>& b) {
  // Total ops: 477

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _a = a.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _b = b.Data();

  // Intermediate terms (128)
  const Scalar _tmp0 = -_a[0] * _b[2] + _a[1] * _b[3] + _a[2] * _b[0] + _a[3] * _b[1];
  const Scalar _tmp1 = 2 * _b[2];
  const Scalar _tmp2 = _tmp0 * _tmp1;
  const Scalar _tmp3 = -_a[0] * _b[0] - _a[1] * _b[1] - _a[2] * _b[2] + _a[3] * _b[3];
  const Scalar _tmp4 = 2 * _tmp3;
  const Scalar _tmp5 = _b[0] * _tmp4;
  const Scalar _tmp6 = _a[0] * _b[1] - _a[1] * _b[0] + _a[2] * _b[3] + _a[3] * _b[2];
  const Scalar _tmp7 = 2 * _tmp6;
  const Scalar _tmp8 = _b[1] * _tmp7;
  const Scalar _tmp9 = _a[0] * _b[3] + _a[1] * _b[2] - _a[2] * _b[1] + _a[3] * _b[0];
  const Scalar _tmp10 = 2 * _tmp9;
  const Scalar _tmp11 = _b[3] * _tmp10;
  const Scalar _tmp12 = -_tmp11 + _tmp8;
  const Scalar _tmp13 = _tmp12 - _tmp2 + _tmp5;
  const Scalar _tmp14 = (1.0 / 2.0) * _a[0];
  const Scalar _tmp15 = 2 * _tmp0;
  const Scalar _tmp16 = _b[0] * _tmp15;
  const Scalar _tmp17 = _b[3] * _tmp7;
  const Scalar _tmp18 = _b[1] * _tmp10;
  const Scalar _tmp19 = _tmp1 * _tmp3;
  const Scalar _tmp20 = _tmp16 + _tmp17 + _tmp18 + _tmp19;
  const Scalar _tmp21 = (1.0 / 2.0) * _a[2];
  const Scalar _tmp22 = _b[0] * _tmp7;
  const Scalar _tmp23 = _b[1] * _tmp4;
  const Scalar _tmp24 = _tmp1 * _tmp9;
  const Scalar _tmp25 = _b[3] * _tmp15;
  const Scalar _tmp26 = _tmp24 - _tmp25;
  const Scalar _tmp27 = _tmp22 - _tmp23 + _tmp26;
  const Scalar _tmp28 = (1.0 / 2.0) * _a[1];
  const Scalar _tmp29 = _b[0] * _tmp10;
  const Scalar _tmp30 = _b[1] * _tmp15;
  const Scalar _tmp31 = -_tmp30;
  const Scalar _tmp32 = _tmp1 * _tmp6;
  const Scalar _tmp33 = _b[3] * _tmp4;
  const Scalar _tmp34 = -_tmp32 + _tmp33;
  const Scalar _tmp35 = _tmp29 + _tmp31 + _tmp34;
  const Scalar _tmp36 = (1.0 / 2.0) * _a[3];
  const Scalar _tmp37 = -_tmp22 + _tmp23 + _tmp26;
  const Scalar _tmp38 = _tmp11 + _tmp2 + _tmp5 + _tmp8;
  const Scalar _tmp39 = -_tmp29;
  const Scalar _tmp40 = _tmp30 + _tmp34 + _tmp39;
  const Scalar _tmp41 = _tmp16 - _tmp17;
  const Scalar _tmp42 = _tmp18 - _tmp19 + _tmp41;
  const Scalar _tmp43 = -_tmp18 + _tmp19 + _tmp41;
  const Scalar _tmp44 = _tmp31 + _tmp32 + _tmp33 + _tmp39;
  const Scalar _tmp45 = _tmp12 + _tmp2 - _tmp5;
  const Scalar _tmp46 = _tmp22 + _tmp23 + _tmp24 + _tmp25;
  const Scalar _tmp47 = 2 * _a[0];
  const Scalar _tmp48 = _b[4] * _tmp47;
  const Scalar _tmp49 = 2 * _a[1];
  const Scalar _tmp50 = _b[5] * _tmp49;
  const Scalar _tmp51 = _tmp48 + _tmp50;
  const Scalar _tmp52 = _tmp15 * _tmp3;
  const Scalar _tmp53 = _tmp7 * _tmp9;
  const Scalar _tmp54 = -_tmp52 + _tmp53;
  const Scalar _tmp55 = 2 * _a[3];
  const Scalar _tmp56 = _b[4] * _tmp55;
  const Scalar _tmp57 = _a[2] * _b[5];
  const Scalar _tmp58 = _a[1] * _b[6];
  const Scalar _tmp59 = 2 * _tmp58;
  const Scalar _tmp60 = _tmp56 - 4 * _tmp57 + _tmp59;
  const Scalar _tmp61 = _tmp3 * _tmp7;
  const Scalar _tmp62 = _tmp15 * _tmp9;
  const Scalar _tmp63 = _tmp61 + _tmp62;
  const Scalar _tmp64 = -2 * (_tmp0 * _tmp0);
  const Scalar _tmp65 = 1 - 2 * (_tmp6 * _tmp6);
  const Scalar _tmp66 = _tmp64 + _tmp65;
  const Scalar _tmp67 = 4 * _b[4];
  const Scalar _tmp68 = _b[5] * _tmp55;
  const Scalar _tmp69 = _b[6] * _tmp47;
  const Scalar _tmp70 = -_a[2] * _tmp67 - _tmp68 + _tmp69;
  const Scalar _tmp71 = _tmp51 * _tmp54 + _tmp60 * _tmp63 + _tmp66 * _tmp70;
  const Scalar _tmp72 = 2 * _tmp57;
  const Scalar _tmp73 = -_tmp56 - 4 * _tmp58 + _tmp72;
  const Scalar _tmp74 = 2 * _a[2];
  const Scalar _tmp75 = _b[6] * _tmp74;
  const Scalar _tmp76 = _tmp48 + _tmp75;
  const Scalar _tmp77 = _b[5] * _tmp47;
  const Scalar _tmp78 = _b[6] * _tmp55;
  const Scalar _tmp79 = -_a[1] * _tmp67 + _tmp77 + _tmp78;
  const Scalar _tmp80 = _tmp54 * _tmp73 + _tmp63 * _tmp76 + _tmp66 * _tmp79;
  const Scalar _tmp81 = _b[4] * _tmp74;
  const Scalar _tmp82 = -_tmp69 + _tmp81;
  const Scalar _tmp83 = _b[4] * _tmp49;
  const Scalar _tmp84 = _tmp77 - _tmp83;
  const Scalar _tmp85 = _tmp59 - _tmp72;
  const Scalar _tmp86 = _tmp54 * _tmp84 + _tmp63 * _tmp82 + _tmp66 * _tmp85;
  const Scalar _tmp87 = (1.0 / 2.0) * _tmp86;
  const Scalar _tmp88 = 4 * _a[0];
  const Scalar _tmp89 = -_b[6] * _tmp88 + _tmp68 + _tmp81;
  const Scalar _tmp90 = -_b[5] * _tmp88 - _tmp78 + _tmp83;
  const Scalar _tmp91 = _tmp50 + _tmp75;
  const Scalar _tmp92 =
      (1.0 / 2.0) * _tmp54 * _tmp89 + (1.0 / 2.0) * _tmp63 * _tmp90 + (1.0 / 2.0) * _tmp66 * _tmp91;
  const Scalar _tmp93 = _a[3] * _tmp49;
  const Scalar _tmp94 = _a[2] * _tmp47;
  const Scalar _tmp95 = -_tmp93 + _tmp94;
  const Scalar _tmp96 = _a[3] * _tmp74;
  const Scalar _tmp97 = _a[1] * _tmp47;
  const Scalar _tmp98 = _tmp96 + _tmp97;
  const Scalar _tmp99 = -2 * (_a[1] * _a[1]);
  const Scalar _tmp100 = 1 - 2 * (_a[2] * _a[2]);
  const Scalar _tmp101 = _tmp100 + _tmp99;
  const Scalar _tmp102 = _a[3] * _tmp47;
  const Scalar _tmp103 = _a[2] * _tmp49;
  const Scalar _tmp104 = _tmp102 + _tmp103;
  const Scalar _tmp105 = -2 * (_a[0] * _a[0]);
  const Scalar _tmp106 = _tmp100 + _tmp105;
  const Scalar _tmp107 = -_tmp96 + _tmp97;
  const Scalar _tmp108 = _tmp105 + _tmp99 + 1;
  const Scalar _tmp109 = -_tmp102 + _tmp103;
  const Scalar _tmp110 = _tmp93 + _tmp94;
  const Scalar _tmp111 = _tmp10 * _tmp3;
  const Scalar _tmp112 = _tmp0 * _tmp7;
  const Scalar _tmp113 = _tmp111 + _tmp112;
  const Scalar _tmp114 = -2 * (_tmp9 * _tmp9);
  const Scalar _tmp115 = _tmp114 + _tmp65;
  const Scalar _tmp116 = -_tmp61 + _tmp62;
  const Scalar _tmp117 = _tmp113 * _tmp84 + _tmp115 * _tmp82 + _tmp116 * _tmp85;
  const Scalar _tmp118 = _tmp113 * _tmp51 + _tmp115 * _tmp60 + _tmp116 * _tmp70;
  const Scalar _tmp119 = (1.0 / 2.0) * _tmp113 * _tmp73 + (1.0 / 2.0) * _tmp115 * _tmp76 +
                         (1.0 / 2.0) * _tmp116 * _tmp79;
  const Scalar _tmp120 = _tmp113 * _tmp89 + _tmp115 * _tmp90 + _tmp116 * _tmp91;
  const Scalar _tmp121 = _tmp114 + _tmp64 + 1;
  const Scalar _tmp122 = -_tmp111 + _tmp112;
  const Scalar _tmp123 = _tmp52 + _tmp53;
  const Scalar _tmp124 = _tmp121 * _tmp51 + _tmp122 * _tmp60 + _tmp123 * _tmp70;
  const Scalar _tmp125 = _tmp121 * _tmp84 + _tmp122 * _tmp82 + _tmp123 * _tmp85;
  const Scalar _tmp126 = _tmp121 * _tmp73 + _tmp122 * _tmp76 + _tmp123 * _tmp79;
  const Scalar _tmp127 = _tmp121 * _tmp89 + _tmp122 * _tmp90 + _tmp123 * _tmp91;

  // Output terms (1)
  Eigen::Matrix<Scalar, 6, 6> _res_D_a;

  _res_D_a(0, 0) = -_tmp13 * _tmp14 + _tmp20 * _tmp21 - _tmp27 * _tmp28 + _tmp35 * _tmp36;
  _res_D_a(0, 1) = -_tmp13 * _tmp28 + _tmp14 * _tmp27 + _tmp20 * _tmp36 - _tmp21 * _tmp35;
  _res_D_a(0, 2) = -_tmp13 * _tmp21 - _tmp14 * _tmp20 + _tmp27 * _tmp36 + _tmp28 * _tmp35;
  _res_D_a(0, 3) = 0;
  _res_D_a(0, 4) = 0;
  _res_D_a(0, 5) = 0;
  _res_D_a(1, 0) = -_tmp14 * _tmp37 + _tmp21 * _tmp40 - _tmp28 * _tmp38 + _tmp36 * _tmp42;
  _res_D_a(1, 1) = _tmp14 * _tmp38 - _tmp21 * _tmp42 - _tmp28 * _tmp37 + _tmp36 * _tmp40;
  _res_D_a(1, 2) = -_tmp14 * _tmp40 - _tmp21 * _tmp37 + _tmp28 * _tmp42 + _tmp36 * _tmp38;
  _res_D_a(1, 3) = 0;
  _res_D_a(1, 4) = 0;
  _res_D_a(1, 5) = 0;
  _res_D_a(2, 0) = -_tmp14 * _tmp43 + _tmp21 * _tmp45 - _tmp28 * _tmp44 + _tmp36 * _tmp46;
  _res_D_a(2, 1) = _tmp14 * _tmp44 - _tmp21 * _tmp46 - _tmp28 * _tmp43 + _tmp36 * _tmp45;
  _res_D_a(2, 2) = -_tmp14 * _tmp45 - _tmp21 * _tmp43 + _tmp28 * _tmp46 + _tmp36 * _tmp44;
  _res_D_a(2, 3) = 0;
  _res_D_a(2, 4) = 0;
  _res_D_a(2, 5) = 0;
  _res_D_a(3, 0) = -_a[0] * _tmp87 + _a[3] * _tmp92 + _tmp21 * _tmp80 - _tmp28 * _tmp71;
  _res_D_a(3, 1) = -_a[1] * _tmp87 - _a[2] * _tmp92 + _tmp14 * _tmp71 + _tmp36 * _tmp80;
  _res_D_a(3, 2) = _a[1] * _tmp92 - _tmp14 * _tmp80 - _tmp21 * _tmp86 + _tmp36 * _tmp71;
  _res_D_a(3, 3) = _tmp101 * _tmp66 + _tmp54 * _tmp95 + _tmp63 * _tmp98;
  _res_D_a(3, 4) = _tmp104 * _tmp54 + _tmp106 * _tmp63 + _tmp107 * _tmp66;
  _res_D_a(3, 5) = _tmp108 * _tmp54 + _tmp109 * _tmp63 + _tmp110 * _tmp66;
  _res_D_a(4, 0) = _a[2] * _tmp119 - _tmp117 * _tmp14 - _tmp118 * _tmp28 + _tmp120 * _tmp36;
  _res_D_a(4, 1) = _a[3] * _tmp119 - _tmp117 * _tmp28 + _tmp118 * _tmp14 - _tmp120 * _tmp21;
  _res_D_a(4, 2) = -_a[0] * _tmp119 - _tmp117 * _tmp21 + _tmp118 * _tmp36 + _tmp120 * _tmp28;
  _res_D_a(4, 3) = _tmp101 * _tmp116 + _tmp113 * _tmp95 + _tmp115 * _tmp98;
  _res_D_a(4, 4) = _tmp104 * _tmp113 + _tmp106 * _tmp115 + _tmp107 * _tmp116;
  _res_D_a(4, 5) = _tmp108 * _tmp113 + _tmp109 * _tmp115 + _tmp110 * _tmp116;
  _res_D_a(5, 0) = -_tmp124 * _tmp28 - _tmp125 * _tmp14 + _tmp126 * _tmp21 + _tmp127 * _tmp36;
  _res_D_a(5, 1) = _tmp124 * _tmp14 - _tmp125 * _tmp28 + _tmp126 * _tmp36 - _tmp127 * _tmp21;
  _res_D_a(5, 2) = _tmp124 * _tmp36 - _tmp125 * _tmp21 - _tmp126 * _tmp14 + _tmp127 * _tmp28;
  _res_D_a(5, 3) = _tmp101 * _tmp123 + _tmp121 * _tmp95 + _tmp122 * _tmp98;
  _res_D_a(5, 4) = _tmp104 * _tmp121 + _tmp106 * _tmp122 + _tmp107 * _tmp123;
  _res_D_a(5, 5) = _tmp108 * _tmp121 + _tmp109 * _tmp122 + _tmp110 * _tmp123;

  return _res_D_a;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym