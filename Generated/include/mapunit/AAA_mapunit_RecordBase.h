/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct mapunit_Record : DrEl
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
__int16 mapid;
char Pad0[2];
__int32 zone_id;
bool is_phasing_unit;
char Pad1[3];
float position_x;
float position_y;
float position_z;
__int8 category;
__int8 map_depth;
__int8 arena_dungeon_map_depth;
bool zoom;
bool rotate;
bool click;
bool front;
bool show_tooltip;
Data::TableRef name2;
int name2_tableId(){return 405;};
__int16 opacity;
__int16 size_x;
__int16 size_y;
__int16 oufofsight_size_x;
__int16 oufofsight_size_y;
char Pad2[2];
wchar_t* imageset;
wchar_t* over_imageset;
wchar_t* pressed_imageset;
wchar_t* outofsight_imageset;
wchar_t* outofsight_over_imageset;
wchar_t* outofsight_pressed_imageset;
float center_pos_x;
float center_pos_y;

		static TableVersion Version() { return TableVersion(1, 78); }
		static __int16 TableId() { return 242; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mapunit_RecordPtr // : DrRecordPtr
	{
		mapunit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mapunit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}