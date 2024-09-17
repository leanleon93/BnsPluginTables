/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct item_random_ability_slot_Record : DrEl
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
__int8 ability;
char Pad0[3];
__int32 value_min;
__int32 value_max;
__int32 initial_value_max;
__int8 item_ability_section_percent[3];
char Pad1[1];
Data::TableRef item_ability_section[3];
int item_ability_section_tableId(){return 204;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 205; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_random_ability_slot_RecordPtr // : DrRecordPtr
	{
		item_random_ability_slot_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_random_ability_slot_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}