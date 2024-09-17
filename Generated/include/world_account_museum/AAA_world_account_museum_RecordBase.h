/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct world_account_museum_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef collection_card[8];
int collection_card_tableId(){return 433;};
__int16 collection_card_count[8];
wchar_t* start_time;
wchar_t* end_time;
bool can_not_used;
__int8 ability[3];
__int32 ability_value[3];
__int32 ability_base_value[3];
Data::TableRef collection_name;
int collection_name_tableId(){return 405;};
__int8 collection_category;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 436; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_account_museum_RecordPtr // : DrRecordPtr
	{
		world_account_museum_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::world_account_museum_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}