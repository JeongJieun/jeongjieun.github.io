#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// bulletmove
struct  bulletmove_t1098443689  : public MonoBehaviour_t774292115
{
public:
	// System.Single bulletmove::moveSpeed
	float ___moveSpeed_2;
	// System.Single bulletmove::destoryTime
	float ___destoryTime_3;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(bulletmove_t1098443689, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_destoryTime_3() { return static_cast<int32_t>(offsetof(bulletmove_t1098443689, ___destoryTime_3)); }
	inline float get_destoryTime_3() const { return ___destoryTime_3; }
	inline float* get_address_of_destoryTime_3() { return &___destoryTime_3; }
	inline void set_destoryTime_3(float value)
	{
		___destoryTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
