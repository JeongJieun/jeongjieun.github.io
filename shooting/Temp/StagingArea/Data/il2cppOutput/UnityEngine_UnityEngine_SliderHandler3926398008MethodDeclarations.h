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

// UnityEngine.GUIStyle
struct GUIStyle_t3545875401;
// UnityEngine.Event
struct Event_t4092699101;
struct Event_t4092699101_marshaled_pinvoke;
// UnityEngine.SliderState
struct SliderState_t1824585795;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SliderHandler3926398008.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"
#include "UnityEngine_UnityEngine_GUIStyle3545875401.h"
#include "UnityEngine_UnityEngine_EventType2086208837.h"

// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C"  void SliderHandler__ctor_m1547880569 (SliderHandler_t3926398008 * __this, Rect_t2553848979  ___position0, float ___currentValue1, float ___size2, float ___start3, float ___end4, GUIStyle_t3545875401 * ___slider5, GUIStyle_t3545875401 * ___thumb6, bool ___horiz7, int32_t ___id8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Handle()
extern "C"  float SliderHandler_Handle_m504867634 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDown()
extern "C"  float SliderHandler_OnMouseDown_m2819993578 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
extern "C"  float SliderHandler_OnMouseDrag_m1069947484 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseUp()
extern "C"  float SliderHandler_OnMouseUp_m3083734299 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnRepaint()
extern "C"  float SliderHandler_OnRepaint_m4171175698 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
extern "C"  int32_t SliderHandler_CurrentEventType_m2472981589 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
extern "C"  int32_t SliderHandler_CurrentScrollTroughSide_m2283829530 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
extern "C"  bool SliderHandler_IsEmptySlider_m2679659864 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
extern "C"  bool SliderHandler_SupportsPageMovements_m983193435 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageMovementValue()
extern "C"  float SliderHandler_PageMovementValue_m1651578409 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
extern "C"  float SliderHandler_PageUpMovementBound_m2929319993 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
extern "C"  Event_t4092699101 * SliderHandler_CurrentEvent_m2481129493 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
extern "C"  float SliderHandler_ValueForCurrentMousePosition_m1752598323 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
extern "C"  float SliderHandler_Clamp_m291298090 (SliderHandler_t3926398008 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
extern "C"  Rect_t2553848979  SliderHandler_ThumbSelectionRect_m1949915148 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
extern "C"  void SliderHandler_StartDraggingWithValue_m1407392347 (SliderHandler_t3926398008 * __this, float ___dragStartValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
extern "C"  SliderState_t1824585795 * SliderHandler_SliderState_m3520725942 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
extern "C"  Rect_t2553848979  SliderHandler_ThumbRect_m4193953892 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
extern "C"  Rect_t2553848979  SliderHandler_VerticalThumbRect_m1555251118 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
extern "C"  Rect_t2553848979  SliderHandler_HorizontalThumbRect_m1760436800 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
extern "C"  float SliderHandler_ClampedCurrentValue_m1479539118 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MousePosition()
extern "C"  float SliderHandler_MousePosition_m4110511062 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
extern "C"  float SliderHandler_ValuesPerPixel_m834671253 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ThumbSize()
extern "C"  float SliderHandler_ThumbSize_m3714327193 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MaxValue()
extern "C"  float SliderHandler_MaxValue_m781424109 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MinValue()
extern "C"  float SliderHandler_MinValue_m229001767 (SliderHandler_t3926398008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
