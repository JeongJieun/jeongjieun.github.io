#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1366199518;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1095391089;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticleTester/FlareSystem
struct  FlareSystem_t785416039  : public Il2CppObject
{
public:
	// System.String ParticleTester/FlareSystem::name
	String_t* ___name_0;
	// UnityEngine.GameObject ParticleTester/FlareSystem::particleObject
	GameObject_t1366199518 * ___particleObject_1;
	// UnityEngine.ParticleSystem[] ParticleTester/FlareSystem::particleSystems
	ParticleSystemU5BU5D_t1095391089* ___particleSystems_2;
	// System.Boolean ParticleTester/FlareSystem::toggleFlag
	bool ___toggleFlag_3;
	// System.Boolean ParticleTester/FlareSystem::savedToggleFlag
	bool ___savedToggleFlag_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(FlareSystem_t785416039, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_particleObject_1() { return static_cast<int32_t>(offsetof(FlareSystem_t785416039, ___particleObject_1)); }
	inline GameObject_t1366199518 * get_particleObject_1() const { return ___particleObject_1; }
	inline GameObject_t1366199518 ** get_address_of_particleObject_1() { return &___particleObject_1; }
	inline void set_particleObject_1(GameObject_t1366199518 * value)
	{
		___particleObject_1 = value;
		Il2CppCodeGenWriteBarrier(&___particleObject_1, value);
	}

	inline static int32_t get_offset_of_particleSystems_2() { return static_cast<int32_t>(offsetof(FlareSystem_t785416039, ___particleSystems_2)); }
	inline ParticleSystemU5BU5D_t1095391089* get_particleSystems_2() const { return ___particleSystems_2; }
	inline ParticleSystemU5BU5D_t1095391089** get_address_of_particleSystems_2() { return &___particleSystems_2; }
	inline void set_particleSystems_2(ParticleSystemU5BU5D_t1095391089* value)
	{
		___particleSystems_2 = value;
		Il2CppCodeGenWriteBarrier(&___particleSystems_2, value);
	}

	inline static int32_t get_offset_of_toggleFlag_3() { return static_cast<int32_t>(offsetof(FlareSystem_t785416039, ___toggleFlag_3)); }
	inline bool get_toggleFlag_3() const { return ___toggleFlag_3; }
	inline bool* get_address_of_toggleFlag_3() { return &___toggleFlag_3; }
	inline void set_toggleFlag_3(bool value)
	{
		___toggleFlag_3 = value;
	}

	inline static int32_t get_offset_of_savedToggleFlag_4() { return static_cast<int32_t>(offsetof(FlareSystem_t785416039, ___savedToggleFlag_4)); }
	inline bool get_savedToggleFlag_4() const { return ___savedToggleFlag_4; }
	inline bool* get_address_of_savedToggleFlag_4() { return &___savedToggleFlag_4; }
	inline void set_savedToggleFlag_4(bool value)
	{
		___savedToggleFlag_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
