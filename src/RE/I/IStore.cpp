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
			return write(a_numBytes, a_bytes);
		}

		BSStorageDefs::ErrorCode IStore::write(std::size_t a_numBytes, const std::byte* a_bytes)
		{
			using func_t = decltype(&IStore::write);
			static REL::Relocation<func_t> func{ REL::Offset(0x91A090).address() };
			return func(this, a_numBytes, a_bytes);
		}

		void IStore::dtor()
		{
			using func_t = decltype(&IStore::dtor);
			static REL::Relocation<func_t> func{ REL::Offset(0x919EF0).address() };
			return func(this);
		}
	}
}
