/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct weapon_gem_effect_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char level;
signed char weapon_gem_type;
signed char weapon_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* effect_show;
BnsTables::Shared::RGB effect_color;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 461; }
		static __int32 SubType() { return -1; }
		enum class weapon_gem_type {
			none = 0,
			ruby = 1,
			topaz = 2,
			sapphire = 3,
			jade = 4,
			amethyst = 5,
			emerald = 6,
			diamond = 7,
			obsidian = 8,
			amber = 9,
			garnet = 10,
			aquamarine = 11,
			ruby_topaz = 12,
			ruby_sapphire = 13,
			ruby_jade = 14,
			ruby_amethyst = 15,
			ruby_emerald = 16,
			ruby_diamond = 17,
			topaz_sapphire = 18,
			topaz_jade = 19,
			topaz_amethyst = 20,
			topaz_emerald = 21,
			topaz_diamond = 22,
			sapphire_jade = 23,
			sapphire_amethyst = 24,
			sapphire_emerald = 25,
			sapphire_diamond = 26,
			jade_amethyst = 27,
			jade_emerald = 28,
			jade_diamond = 29,
			amethyst_emerald = 30,
			amethyst_diamond = 31,
			emerald_diamond = 32,
			aquamarine_diamond = 33,
			amber_diamond = 34,
			obsidian_garnet = 35,
			corundum_white = 36,
			corundum_black = 37,
			corundum_pink = 38,
			corundum_yellow = 39,
			corundum_bluegreen = 40,
			corundum_blue = 41,
			corundum_aquamarine = 42,
			corundum_amber = 43,
			corundum_ruby = 44,
			corundum_amethyst = 45,
			corundum_jade = 46,
			aquamarine_amber = 47,
		};

		enum class weapon_type {
			none = 0,
			bare_hand = 1,
			sword = 2,
			gauntlet = 3,
			aura_bangle = 4,
			pistol = 5,
			rifle = 6,
			two_handed_axe = 7,
			bow = 8,
			staff = 9,
			dagger = 10,
			pet_1 = 11,
			pet_2 = 12,
			gun = 13,
			great_sword = 14,
			long_bow = 15,
			spear = 16,
			orb = 17,
			dual_blade = 18,
			instrument = 19,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weapon_gem_effect_RecordPtr // : DrRecordPtr
	{
		weapon_gem_effect_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}