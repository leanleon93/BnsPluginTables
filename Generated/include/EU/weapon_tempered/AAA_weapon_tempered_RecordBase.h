/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct weapon_tempered_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char weapon_type;
signed char level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* show;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 459; }
		static __int32 SubType() { return -1; }
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
	struct __declspec(align(4)) weapon_tempered_RecordPtr // : DrRecordPtr
	{
		weapon_tempered_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}