#include "RE/B/BSStorage.h"

namespace RE
{
	BSStorage::~BSStorage()
	{
		dtor();
	}

	void BSStorage::dtor()
	{
		using func_t = decltype(&RE::BSStorage::dtor);
		static REL::Relocation<func_t> func{ REL::Offset(0x196320).address() };
		return func(this);
	}
}
