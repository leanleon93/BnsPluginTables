/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_dungeon_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct dungeon_sealed_Record : dungeon_Record
	{
	public:
		signed char max_sealed_level;
char Pad_sub_0[3];
BnsTables::Shared::TableRef modify_data;
int modify_data_tableId() const {return 329;};
BnsTables::Shared::TableRef bind_quota;
int bind_quota_tableId() const {return 67;};
__int16 theme_version;
char Pad_sub_1[2];
BnsTables::Shared::TableRef theme_arena_entrance_zone;
int theme_arena_entrance_zone_tableId() const {return 461;};
wchar_t* gimmick_week_start_date_time;
signed char ui_scroll_slot_index;

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}