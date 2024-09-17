/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct world_account_card_collection_Record : DrEl
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
Data::TableRef collection_name;
int collection_name_tableId(){return 405;};
__int16 collection_season;
__int8 collection_grade;
char Pad0[1];
Data::TableRef collection_card[8];
int collection_card_tableId(){return 433;};
__int16 collection_card_count[8];
__int16 collection_card_point[8];
__int16 collection_activate_point;
__int16 ability_activate_point_range[5];
__int8 ability[5];
char Pad1[3];
__int32 ability_base_value[5];
__int16 effect_activate_point_range[5];
char Pad2[2];
Data::TableRef effect[5];
int effect_tableId(){return 111;};
wchar_t* effect_desc[5];
Data::TableRef completion_reward_item;
int completion_reward_item_tableId(){return 189;};
__int16 completion_reward_item_count;
char Pad3[2];
wchar_t* start_time;
wchar_t* end_time;
bool can_not_used;
char Pad4[3];
wchar_t* main_image;

		static TableVersion Version() { return TableVersion(3, 1); }
		static __int16 TableId() { return 432; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_account_card_collection_RecordPtr // : DrRecordPtr
	{
		world_account_card_collection_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::world_account_card_collection_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}