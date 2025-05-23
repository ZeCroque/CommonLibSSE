#include "RE/I/IStore.h"

namespace RE
{
	namespace BSScript
	{
		IStore::~IStore()
		{
			dtor();
		}

		BSStorageDefs::ErrorCode IStore::Write(std::size_t a_numBytes, const std::byte* a_bytes)
		{
			return write();
		}

		BSStorageDefs::ErrorCode IStore::write()
		{
			using func_t = decltype(&IStore::write);
			static REL::Relocation<func_t> func{ REL::Offset(0x91A090).address() };
			return func(this);
		}

		void IStore::dtor()
		{
			using func_t = decltype(&IStore::dtor);
			static REL::Relocation<func_t> func{ REL::Offset(0x919EF0).address() };
			return func(this);
		}
	}
}
