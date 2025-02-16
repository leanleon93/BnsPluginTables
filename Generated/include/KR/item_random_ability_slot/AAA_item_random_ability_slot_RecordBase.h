/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_random_ability_slot_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char ability;
char Pad0[3];
__int32 value_min;
__int32 value_max;
__int32 initial_value_max;
signed char item_ability_section_percent[3];
__int32 item_ability_section_percent_Size() const {return 3;};
char Pad1[1];
BnsTables::Shared::TableRef item_ability_section[3];
__int32 item_ability_section_Size() const {return 3;};
int item_ability_section_tableId() const {return 213;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 214; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_random_ability_slot_RecordPtr // : DrRecordPtr
	{
		item_random_ability_slot_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}