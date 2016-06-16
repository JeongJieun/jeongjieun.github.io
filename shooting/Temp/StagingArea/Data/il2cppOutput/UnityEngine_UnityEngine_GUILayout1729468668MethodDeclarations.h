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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t1445391160;
// UnityEngine.GUIContent
struct GUIContent_t2981625813;
// UnityEngine.GUIStyle
struct GUIStyle_t3545875401;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2722935253;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "UnityEngine_UnityEngine_GUIContent2981625813.h"
#include "UnityEngine_UnityEngine_GUIStyle3545875401.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m3322709003 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t1445391160* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1965952312 (Il2CppObject * __this /* static, unused */, GUIContent_t2981625813 * ___content0, GUIStyle_t3545875401 * ___style1, GUILayoutOptionU5BU5D_t1445391160* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Toggle_m3870477298 (Il2CppObject * __this /* static, unused */, bool ___value0, String_t* ___text1, GUILayoutOptionU5BU5D_t1445391160* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoToggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoToggle_m1070689199 (Il2CppObject * __this /* static, unused */, bool ___value0, GUIContent_t2981625813 * ___content1, GUIStyle_t3545875401 * ___style2, GUILayoutOptionU5BU5D_t1445391160* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C"  void GUILayout_Space_m1087863221 (Il2CppObject * __this /* static, unused */, float ___pixels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m212592284 (Il2CppObject * __this /* static, unused */, GUILayoutOptionU5BU5D_t1445391160* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_BeginHorizontal_m4254247010 (Il2CppObject * __this /* static, unused */, GUIContent_t2981625813 * ___content0, GUIStyle_t3545875401 * ___style1, GUILayoutOptionU5BU5D_t1445391160* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C"  void GUILayout_EndHorizontal_m4258536965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t465617798  GUILayout_BeginScrollView_m4280181007 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___scrollPosition0, GUILayoutOptionU5BU5D_t1445391160* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t465617798  GUILayout_BeginScrollView_m3658586336 (Il2CppObject * __this /* static, unused */, Vector2_t465617798  ___scrollPosition0, bool ___alwaysShowHorizontal1, bool ___alwaysShowVertical2, GUIStyle_t3545875401 * ___horizontalScrollbar3, GUIStyle_t3545875401 * ___verticalScrollbar4, GUIStyle_t3545875401 * ___background5, GUILayoutOptionU5BU5D_t1445391160* ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C"  void GUILayout_EndScrollView_m1883730923 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C"  void GUILayout_EndScrollView_m630360730 (Il2CppObject * __this /* static, unused */, bool ___handleScrollWheel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t2722935253 * GUILayout_Width_m261136689 (Il2CppObject * __this /* static, unused */, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t2722935253 * GUILayout_Height_m607115982 (Il2CppObject * __this /* static, unused */, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
