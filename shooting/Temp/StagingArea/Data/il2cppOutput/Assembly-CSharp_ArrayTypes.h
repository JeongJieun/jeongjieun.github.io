#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// ParticleTester/FlareSystem
struct FlareSystem_t785416039;

#include "mscorlib_System_Array4136897760.h"
#include "AssemblyU2DCSharp_ParticleTester_FlareSystem785416039.h"

#pragma once
// ParticleTester/FlareSystem[]
struct FlareSystemU5BU5D_t2878483230  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) FlareSystem_t785416039 * m_Items[1];

public:
	inline FlareSystem_t785416039 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline FlareSystem_t785416039 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, FlareSystem_t785416039 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
