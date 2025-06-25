/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct equip_item_guide_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef item_group;
int item_group_tableId() const {return 127;};
signed char item_equip_type;
signed char item_equip_job;
char Pad0[2];
__int32 item_score;
BnsTables::Shared::TableRef representative_item;
int representative_item_tableId() const {return 202;};
BnsTables::Shared::TableRef next_item_guide_list[3];
__int32 next_item_guide_list_Size() const {return 3;};
int next_item_guide_list_tableId() const {return 128;};
BnsTables::Shared::TableRef improve_main_feed_list[15];
__int32 improve_main_feed_list_Size() const {return 15;};
int improve_main_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef improve_sub_feed_list[15];
__int32 improve_sub_feed_list_Size() const {return 15;};
int improve_sub_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef transform_main_feed_list[15];
__int32 transform_main_feed_list_Size() const {return 15;};
int transform_main_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef transform_sub_feed_list[15];
__int32 transform_sub_feed_list_Size() const {return 15;};
int transform_sub_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef growth_main_feed_list[15];
__int32 growth_main_feed_list_Size() const {return 15;};
int growth_main_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef growth_sub_feed_list[15];
__int32 growth_sub_feed_list_Size() const {return 15;};
int growth_sub_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef improve_set_list[4];
__int32 improve_set_list_Size() const {return 4;};
int improve_set_list_tableId() const {return 214;};
signed char improve_option_acquire_level_list[5];
__int32 improve_option_acquire_level_list_Size() const {return 5;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 2); }
		static __int16 TableId() { return 128; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) equip_item_guide_RecordPtr // : DrRecordPtr
	{
		equip_item_guide_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}