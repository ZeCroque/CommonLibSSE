#pragma once

namespace RE
{
	struct BGSPackageDataTopic : public IPackageData
	{
		inline static constexpr auto RTTI = RE::RTTI_BGSPackageDataTopic;
		inline static constexpr auto VTABLE = VTABLE_BGSPackageDataTopic;

		~BGSPackageDataTopic() override;  // 00
		void InitPackage() override;                            // 01 - { return; }
		void LoadPackage(TESFile* a_mod) override;              // 02
		void Assign(IPackageData* a_other) override;            // 03 - { return; }
		bool IsNotEqual(IPackageData* a_other) const override;  // 04
		void Unk_05() override;
		void Unk_06(void) override;                                // 06
		void Unk_07(void) override;                                // 07
		void LoadBuffer(RE::BGSLoadFormBuffer* a_buf) override;    // 08
		void Unk_09(void) override;                                // 09
		bool GetDataAsString(RE::BSString* a_dst) const override;  // 0A
		[[nodiscard]] const BSFixedString& GetTypeName() const override;                      // 0B - { return "Bool"; }
		void Unk_0C(void) override;                                // 0C

		std::uint64_t unk00;  // 00
		std::uint64_t unk08;  // 08
		RE::TESTopic* topic;  // 10
	};
	static_assert(sizeof(PackageFloat) == 0x10);
}
