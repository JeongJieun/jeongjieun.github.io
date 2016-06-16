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

// UnityEngine.GUISkin
struct GUISkin_t115744635;
// UnityEngine.GUIContent
struct GUIContent_t2981625813;
// UnityEngine.GUIStyle
struct GUIStyle_t3545875401;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t1326697168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "UnityEngine_UnityEngine_GUISkin115744635.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"
#include "UnityEngine_UnityEngine_GUIContent2981625813.h"
#include "UnityEngine_UnityEngine_GUIStyle3545875401.h"
#include "UnityEngine_UnityEngine_FocusType1577302513.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction1326697168.h"
#include "mscorlib_System_IntPtr3076297692.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1321863889 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C"  DateTime_t2933746480  GUI_get_nextScrollStepTime_m4045060331 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m2724006954 (Il2CppObject * __this /* static, unused */, DateTime_t2933746480  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C"  int32_t GUI_get_scrollTroughSide_m237006560 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C"  void GUI_set_scrollTroughSide_m1337099359 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m3391676555 (Il2CppObject * __this /* static, unused */, GUISkin_t115744635 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t115744635 * GUI_get_skin_m2309570990 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m3603287387 (Il2CppObject * __this /* static, unused */, GUISkin_t115744635 * ___newSkin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Box_m4178954864 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___position0, GUIContent_t2981625813 * ___content1, GUIStyle_t3545875401 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m2919274209 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___position0, GUIContent_t2981625813 * ___content1, GUIStyle_t3545875401 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C"  bool GUI_DoRepeatButton_m3482958082 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___position0, GUIContent_t2981625813 * ___content1, GUIStyle_t3545875401 * ___style2, int32_t ___focusType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Toggle_m2718941758 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___position0, bool ___value1, GUIContent_t2981625813 * ___content2, GUIStyle_t3545875401 * ___style3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C"  float GUI_Slider_m1242616654 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___position0, float ___value1, float ___size2, float ___start3, float ___end4, GUIStyle_t3545875401 * ___slider5, GUIStyle_t3545875401 * ___thumb6, bool ___horiz7, int32_t ___id8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  float GUI_HorizontalScrollbar_m3352213210 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___position0, float ___value1, float ___size2, float ___leftValue3, float ___rightValue4, GUIStyle_t3545875401 * ___style5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C"  bool GUI_ScrollerRepeatButton_m3458198294 (Il2CppObject * __this /* static, unused */, int32_t ___scrollerID0, Rect_t2553848979  ___rect1, GUIStyle_t3545875401 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  float GUI_VerticalScrollbar_m150440164 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___position0, float ___value1, float ___size2, float ___topValue3, float ___bottomValue4, GUIStyle_t3545875401 * ___style5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C"  float GUI_Scroller_m908806972 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___position0, float ___value1, float ___size2, float ___leftValue3, float ___rightValue4, GUIStyle_t3545875401 * ___slider5, GUIStyle_t3545875401 * ___thumb6, GUIStyle_t3545875401 * ___leftButton7, GUIStyle_t3545875401 * ___rightButton8, bool ___horiz9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  Vector2_t465617798  GUI_BeginScrollView_m2779271105 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___position0, Vector2_t465617798  ___scrollPosition1, Rect_t2553848979  ___viewRect2, bool ___alwaysShowHorizontal3, bool ___alwaysShowVertical4, GUIStyle_t3545875401 * ___horizontalScrollbar5, GUIStyle_t3545875401 * ___verticalScrollbar6, GUIStyle_t3545875401 * ___background7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C"  void GUI_EndScrollView_m4114936004 (Il2CppObject * __this /* static, unused */, bool ___handleScrollWheel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m634477008 (Il2CppObject * __this /* static, unused */, WindowFunction_t1326697168 * ___func0, int32_t ___id1, GUISkin_t115744635 * ____skin2, int32_t ___forceRect3, float ___width4, float ___height5, GUIStyle_t3545875401 * ___style6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m470833806 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoButton_m1396731179 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___position0, GUIContent_t2981625813 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoButton_m603378840 (Il2CppObject * __this /* static, unused */, Rect_t2553848979 * ___position0, GUIContent_t2981625813 * ___content1, IntPtr_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoToggle_m3427584861 (Il2CppObject * __this /* static, unused */, Rect_t2553848979  ___position0, int32_t ___id1, bool ___value2, GUIContent_t2981625813 * ___content3, IntPtr_t ___style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoToggle_m2357217006 (Il2CppObject * __this /* static, unused */, Rect_t2553848979 * ___position0, int32_t ___id1, bool ___value2, GUIContent_t2981625813 * ___content3, IntPtr_t ___style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C"  bool GUI_get_usePageScrollbars_m1086009624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C"  void GUI_InternalRepaintEditorWindow_m219194149 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
