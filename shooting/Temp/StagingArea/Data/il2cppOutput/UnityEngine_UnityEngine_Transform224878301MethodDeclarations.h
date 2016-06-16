#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Transform
struct Transform_t224878301;
// System.Collections.IEnumerator
struct IEnumerator_t3037427797;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"
#include "UnityEngine_UnityEngine_Transform224878301.h"
#include "UnityEngine_UnityEngine_Space274949723.h"

// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t465617797  Transform_get_position_m1104419803 (Transform_t224878301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t224878301 * __this, Vector3_t465617797  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_get_position_m1881704498 (Transform_t224878301 * __this, Vector3_t465617797 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_set_position_m101633598 (Transform_t224878301 * __this, Vector3_t465617797 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t83606849  Transform_get_rotation_m1033555130 (Transform_t224878301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3411284563 (Transform_t224878301 * __this, Quaternion_t83606849  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_get_rotation_m2427701365 (Transform_t224878301 * __this, Quaternion_t83606849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_set_rotation_m3703763817 (Transform_t224878301 * __this, Quaternion_t83606849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C"  Quaternion_t83606849  Transform_get_localRotation_m4001487205 (Transform_t224878301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_localRotation_m2055111962 (Transform_t224878301 * __this, Quaternion_t83606849  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_get_localRotation_m2064954684 (Transform_t224878301 * __this, Quaternion_t83606849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C"  void Transform_INTERNAL_set_localRotation_m37206568 (Transform_t224878301 * __this, Quaternion_t83606849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m3281327839 (Transform_t224878301 * __this, Transform_t224878301 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C"  void Transform_set_parentInternal_m4124721022 (Transform_t224878301 * __this, Transform_t224878301 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern "C"  void Transform_Translate_m423862381 (Transform_t224878301 * __this, Vector3_t465617797  ___translation0, int32_t ___relativeTo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Translate_m3577349508 (Transform_t224878301 * __this, float ___x0, float ___y1, float ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C"  void Transform_Translate_m1198703821 (Transform_t224878301 * __this, float ___x0, float ___y1, float ___z2, int32_t ___relativeTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C"  void Transform_Rotate_m2612876682 (Transform_t224878301 * __this, Vector3_t465617797  ___eulerAngles0, int32_t ___relativeTo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Rotate_m4255273365 (Transform_t224878301 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
extern "C"  void Transform_Rotate_m2449860094 (Transform_t224878301 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C"  Vector3_t465617797  Transform_TransformDirection_m1639585047 (Transform_t224878301 * __this, Vector3_t465617797  ___direction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Transform_INTERNAL_CALL_TransformDirection_m2899991790 (Il2CppObject * __this /* static, unused */, Transform_t224878301 * ___self0, Vector3_t465617797 * ___direction1, Vector3_t465617797 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m881385315 (Transform_t224878301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  Il2CppObject * Transform_GetEnumerator_m3479720613 (Transform_t224878301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t224878301 * Transform_GetChild_m3838588184 (Transform_t224878301 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
