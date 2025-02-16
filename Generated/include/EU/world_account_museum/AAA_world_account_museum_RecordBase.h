/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct world_account_museum_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef collection_card[8];
__int32 collection_card_Size() const {return 8;};
int collection_card_tableId() const {return 448;};
__int16 collection_card_count[8];
__int32 collection_card_count_Size() const {return 8;};
__int64 start_time;
__int64 end_time;
bool can_not_used;
signed char ability[3];
__int32 ability_Size() const {return 3;};
__int32 ability_value[3];
__int32 ability_value_Size() const {return 3;};
__int32 ability_base_value[3];
__int32 ability_base_value_Size() const {return 3;};
BnsTables::Shared::TableRef collection_name;
int collection_name_tableId() const {return 420;};
signed char collection_category;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 451; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_account_museum_RecordPtr // : DrRecordPtr
	{
		world_account_museum_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}