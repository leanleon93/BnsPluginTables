/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct itemgearscore_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char level;
signed char mastery_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 weapon_min;
__int32 weapon_max;
__int32 ring_min;
__int32 ring_max;
__int32 earring_min;
__int32 earring_max;
__int32 necklace_min;
__int32 necklace_max;
__int32 bracelet_min;
__int32 bracelet_max;
__int32 belt_min;
__int32 belt_max;
__int32 soul_min;
__int32 soul_max;
__int32 soul_2_min;
__int32 soul_2_max;
__int32 pet_1_min;
__int32 pet_1_max;
__int32 rune_1_min;
__int32 rune_1_max;
__int32 rune_2_min;
__int32 rune_2_max;
__int32 gloves_min;
__int32 gloves_max;
__int32 nova_min;
__int32 nova_max;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 206; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemgearscore_RecordPtr // : DrRecordPtr
	{
		itemgearscore_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}