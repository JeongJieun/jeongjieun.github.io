#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1366199518;

#include "UnityEngine_UnityEngine_MonoBehaviour774292115.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// playershoot
struct  playershoot_t1479159228  : public MonoBehaviour_t774292115
{
public:
	// UnityEngine.GameObject playershoot::bulletprefab
	GameObject_t1366199518 * ___bulletprefab_2;
	// System.Single playershoot::delayTimer
	float ___delayTimer_3;
	// System.Single playershoot::shootDelayTime
	float ___shootDelayTime_4;

public:
	inline static int32_t get_offset_of_bulletprefab_2() { return static_cast<int32_t>(offsetof(playershoot_t1479159228, ___bulletprefab_2)); }
	inline GameObject_t1366199518 * get_bulletprefab_2() const { return ___bulletprefab_2; }
	inline GameObject_t1366199518 ** get_address_of_bulletprefab_2() { return &___bulletprefab_2; }
	inline void set_bulletprefab_2(GameObject_t1366199518 * value)
	{
		___bulletprefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___bulletprefab_2, value);
	}

	inline static int32_t get_offset_of_delayTimer_3() { return static_cast<int32_t>(offsetof(playershoot_t1479159228, ___delayTimer_3)); }
	inline float get_delayTimer_3() const { return ___delayTimer_3; }
	inline float* get_address_of_delayTimer_3() { return &___delayTimer_3; }
	inline void set_delayTimer_3(float value)
	{
		___delayTimer_3 = value;
	}

	inline static int32_t get_offset_of_shootDelayTime_4() { return static_cast<int32_t>(offsetof(playershoot_t1479159228, ___shootDelayTime_4)); }
	inline float get_shootDelayTime_4() const { return ___shootDelayTime_4; }
	inline float* get_address_of_shootDelayTime_4() { return &___shootDelayTime_4; }
	inline void set_shootDelayTime_4(float value)
	{
		___shootDelayTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
