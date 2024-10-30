/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class mapunit_RecordSubType : __int32
    {
		mapunit_record_sub_static = 0,
		mapunit_record_sub_quest = 1,
		mapunit_record_sub_link = 2,
		mapunit_record_sub_npc = 3,
		mapunit_record_sub_boss = 4,
		mapunit_record_sub_airdash = 5,
		mapunit_record_sub_env = 6,
		mapunit_record_sub_attraction = 7,
		mapunit_record_sub_npc_group = 8,
		mapunit_record_sub_guild_battle_field_portal = 9,
		mapunit_record_sub_party_battle_startpoint_alpha = 10,
		mapunit_record_sub_party_battle_startpoint_beta = 11,
		mapunit_record_sub_fishing_field = 12,
		mapunit_record_sub_count = 13,
    };
#pragma pack(push, 1)
	struct mapunit_Record : BnsTables::Shared::DrEl
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
signed char category;
signed char map_depth;
signed char arena_dungeon_map_depth;
bool zoom;
bool rotate;
bool click;
bool front;
bool show_tooltip;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 420;};
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

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 79); }
		static __int16 TableId() { return 249; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mapunit_RecordPtr // : DrRecordPtr
	{
		mapunit_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}