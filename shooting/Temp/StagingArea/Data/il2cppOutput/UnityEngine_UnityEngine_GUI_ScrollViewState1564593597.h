#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Rect2553848979.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/ScrollViewState
struct  ScrollViewState_t1564593597  : public Il2CppObject
{
public:
	// UnityEngine.Rect UnityEngine.GUI/ScrollViewState::position
	Rect_t2553848979  ___position_0;
	// UnityEngine.Rect UnityEngine.GUI/ScrollViewState::visibleRect
	Rect_t2553848979  ___visibleRect_1;
	// UnityEngine.Rect UnityEngine.GUI/ScrollViewState::viewRect
	Rect_t2553848979  ___viewRect_2;
	// UnityEngine.Vector2 UnityEngine.GUI/ScrollViewState::scrollPosition
	Vector2_t465617798  ___scrollPosition_3;
	// System.Boolean UnityEngine.GUI/ScrollViewState::apply
	bool ___apply_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(ScrollViewState_t1564593597, ___position_0)); }
	inline Rect_t2553848979  get_position_0() const { return ___position_0; }
	inline Rect_t2553848979 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Rect_t2553848979  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_visibleRect_1() { return static_cast<int32_t>(offsetof(ScrollViewState_t1564593597, ___visibleRect_1)); }
	inline Rect_t2553848979  get_visibleRect_1() const { return ___visibleRect_1; }
	inline Rect_t2553848979 * get_address_of_visibleRect_1() { return &___visibleRect_1; }
	inline void set_visibleRect_1(Rect_t2553848979  value)
	{
		___visibleRect_1 = value;
	}

	inline static int32_t get_offset_of_viewRect_2() { return static_cast<int32_t>(offsetof(ScrollViewState_t1564593597, ___viewRect_2)); }
	inline Rect_t2553848979  get_viewRect_2() const { return ___viewRect_2; }
	inline Rect_t2553848979 * get_address_of_viewRect_2() { return &___viewRect_2; }
	inline void set_viewRect_2(Rect_t2553848979  value)
	{
		___viewRect_2 = value;
	}

	inline static int32_t get_offset_of_scrollPosition_3() { return static_cast<int32_t>(offsetof(ScrollViewState_t1564593597, ___scrollPosition_3)); }
	inline Vector2_t465617798  get_scrollPosition_3() const { return ___scrollPosition_3; }
	inline Vector2_t465617798 * get_address_of_scrollPosition_3() { return &___scrollPosition_3; }
	inline void set_scrollPosition_3(Vector2_t465617798  value)
	{
		___scrollPosition_3 = value;
	}

	inline static int32_t get_offset_of_apply_4() { return static_cast<int32_t>(offsetof(ScrollViewState_t1564593597, ___apply_4)); }
	inline bool get_apply_4() const { return ___apply_4; }
	inline bool* get_address_of_apply_4() { return &___apply_4; }
	inline void set_apply_4(bool value)
	{
		___apply_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
