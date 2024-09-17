/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct mapinfo_Record : DrEl
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
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef parent_mapinfo;
int parent_mapinfo_tableId(){return 240;};
float scale;
Data::TableRef district;
int district_tableId(){return 100;};
Data::TableRef map_group_1;
int map_group_1_tableId(){return 237;};
Data::TableRef map_group_2;
int map_group_2_tableId(){return 239;};
float local_axis_x;
float local_axis_y;
__int16 image_size;
char Pad0[2];
wchar_t* imageset;
wchar_t* imageset_alphamap;
__int8 imageset_condition_category;
char Pad1[3];
__int64 imageset_condition_value;
wchar_t* conditional_imageset;
wchar_t* conditional_imageset_alphamap;
Data::TableRef overlay[30];
int overlay_tableId(){return 241;};
bool use_pos_in_parent;
char Pad2[3];
float pos_in_parent_x;
float pos_in_parent_y;
Data::TableRef terrain;
int terrain_tableId(){return 404;};
float zoom;
__int16 sort_no;
bool show_navigaion_list;
char Pad3[1];
Data::TableRef arena_dungeon_parent_mapinfo;
int arena_dungeon_parent_mapinfo_tableId(){return 240;};
bool arena_dungeon_use_pos_in_parent;
char Pad4[3];
float arena_dungeon_pos_in_parent_x;
float arena_dungeon_pos_in_parent_y;

		static TableVersion Version() { return TableVersion(1, 41); }
		static __int16 TableId() { return 240; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mapinfo_RecordPtr // : DrRecordPtr
	{
		mapinfo_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mapinfo_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}