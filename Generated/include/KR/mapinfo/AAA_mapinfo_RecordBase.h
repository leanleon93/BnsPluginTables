/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct mapinfo_Record : BnsTables::Shared::DrEl
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
__int16 group_id;
__int16 floor;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 438;};
BnsTables::Shared::TableRef parent_mapinfo;
int parent_mapinfo_tableId() const {return 259;};
float scale;
BnsTables::Shared::TableRef district;
int district_tableId() const {return 105;};
BnsTables::Shared::TableRef map_group_1;
int map_group_1_tableId() const {return 256;};
BnsTables::Shared::TableRef map_group_2;
int map_group_2_tableId() const {return 258;};
float local_axis_x;
float local_axis_y;
__int16 image_size;
char Pad0[2];
wchar_t* imageset;
wchar_t* imageset_alphamap;
signed char imageset_condition_category;
char Pad1[3];
__int64 imageset_condition_value;
wchar_t* conditional_imageset;
wchar_t* conditional_imageset_alphamap;
BnsTables::Shared::TableRef overlay[30];
__int32 overlay_Size() const {return 30;};
int overlay_tableId() const {return 260;};
bool use_pos_in_parent;
char Pad2[3];
float pos_in_parent_x;
float pos_in_parent_y;
BnsTables::Shared::TableRef terrain;
int terrain_tableId() const {return 437;};
float zoom;
__int16 sort_no;
bool show_navigaion_list;
char Pad3[1];
BnsTables::Shared::TableRef arena_dungeon_parent_mapinfo;
int arena_dungeon_parent_mapinfo_tableId() const {return 259;};
bool arena_dungeon_use_pos_in_parent;
char Pad4[3];
float arena_dungeon_pos_in_parent_x;
float arena_dungeon_pos_in_parent_y;
bool capital;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 5); }
		static __int16 TableId() { return 259; }
		static __int32 SubType() { return -1; }
		enum class imageset_condition_category {
			none = 0,
			quest_complete = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mapinfo_RecordPtr // : DrRecordPtr
	{
		mapinfo_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}