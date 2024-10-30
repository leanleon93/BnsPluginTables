/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct world_account_card_collection_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef collection_name;
int collection_name_tableId() const {return 420;};
__int16 collection_season;
signed char collection_grade;
char Pad0[1];
BnsTables::Shared::TableRef collection_card[8];
__int32 collection_card_Size() const {return 8;};
int collection_card_tableId() const {return 448;};
__int16 collection_card_count[8];
__int32 collection_card_count_Size() const {return 8;};
__int16 collection_card_point[8];
__int32 collection_card_point_Size() const {return 8;};
__int16 collection_activate_point;
__int16 ability_activate_point_range[5];
__int32 ability_activate_point_range_Size() const {return 5;};
signed char ability[5];
__int32 ability_Size() const {return 5;};
char Pad1[3];
__int32 ability_base_value[5];
__int32 ability_base_value_Size() const {return 5;};
__int16 effect_activate_point_range[5];
__int32 effect_activate_point_range_Size() const {return 5;};
char Pad2[2];
BnsTables::Shared::TableRef effect[5];
__int32 effect_Size() const {return 5;};
int effect_tableId() const {return 115;};
wchar_t* effect_desc[5];
__int32 effect_desc_Size() const {return 5;};
BnsTables::Shared::TableRef completion_reward_item;
int completion_reward_item_tableId() const {return 195;};
__int16 completion_reward_item_count;
char Pad3[2];
wchar_t* start_time;
wchar_t* end_time;
bool can_not_used;
char Pad4[3];
wchar_t* main_image;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 1); }
		static __int16 TableId() { return 447; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_account_card_collection_RecordPtr // : DrRecordPtr
	{
		world_account_card_collection_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}