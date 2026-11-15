#pragma once

#include "RE/I/IPackageDataAIWorldLocationHandle.h"

namespace RE
{
	class IAITarget : public IPackageDataAIWorldLocationHandle
	{
	public:
		inline static constexpr auto RTTI = RTTI_IAITarget;
		inline static constexpr auto VTABLE = VTABLE_IAITarget;

		~IAITarget() override;  // 00
	};
	static_assert(sizeof(IAITarget) == 0x10);
}
