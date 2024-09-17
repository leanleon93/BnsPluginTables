/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct equip_item_guide_Record : DrEl
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
		Data::TableRef item_group;
int item_group_tableId(){return 120;};
__int8 item_equip_type;
__int8 item_equip_job;
char Pad0[2];
__int32 item_score;
Data::TableRef representative_item;
int representative_item_tableId(){return 189;};
Data::TableRef next_item_guide_list[3];
int next_item_guide_list_tableId(){return 121;};
Data::TableRef improve_main_feed_list[15];
int improve_main_feed_list_tableId(){return 189;};
Data::TableRef improve_sub_feed_list[15];
int improve_sub_feed_list_tableId(){return 189;};
Data::TableRef transform_main_feed_list[15];
int transform_main_feed_list_tableId(){return 189;};
Data::TableRef transform_sub_feed_list[15];
int transform_sub_feed_list_tableId(){return 189;};
Data::TableRef growth_main_feed_list[15];
int growth_main_feed_list_tableId(){return 189;};
Data::TableRef growth_sub_feed_list[15];
int growth_sub_feed_list_tableId(){return 189;};
Data::TableRef improve_set_list[4];
int improve_set_list_tableId(){return 201;};
__int8 improve_option_acquire_level_list[5];

		static TableVersion Version() { return TableVersion(1, 2); }
		static __int16 TableId() { return 121; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) equip_item_guide_RecordPtr // : DrRecordPtr
	{
		equip_item_guide_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::equip_item_guide_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}