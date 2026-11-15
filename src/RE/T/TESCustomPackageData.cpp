#include "RE/T/TESCustomPackageData.h"

namespace RE
{
	void BGSPackageDataList::Assign(const BGSPackageDataList& a_other)
	{
		using func_t = decltype(&BGSPackageDataList::Assign);
		static REL::Relocation<func_t> func{ RELOCATION_ID(26752, 27428) };
		return func(this, a_other);
	}
}
