/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class public_raid_RecordSubType : __int32
    {
		public_raid_record_sub_public_raid_1 = 0,
		public_raid_record_sub_public_raid_2 = 1,
		public_raid_record_sub_public_raid_3 = 2,
		public_raid_record_sub_public_raid_4 = 3,
		public_raid_record_sub_public_raid_5 = 4,
		public_raid_record_sub_inter_battle_field = 5,
		public_raid_record_sub_guerrilla_event = 6,
		public_raid_record_sub_count = 7,
    };
#pragma pack(push, 1)
	struct public_raid_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 479;};
signed char max_pc_count;
signed char max_party_count;
signed char round_id;
signed char required_level;
signed char required_mastery_level;
char Pad0[3];
BnsTables::Shared::TableRef required_preceding_quest[3];
__int32 required_preceding_quest_Size() const {return 3;};
int required_preceding_quest_tableId() const {return 306;};
signed char required_preceding_quest_check;
char Pad1[3];
BnsTables::Shared::TableRef required_available_weekly_time;
int required_available_weekly_time_tableId() const {return 460;};
BnsTables::Shared::TableRef start_weekly_time;
int start_weekly_time_tableId() const {return 460;};
__int16 stand_by_duration_second;
char Pad2[2];
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
BnsTables::Shared::TableRef arena_entrance_zone;
int arena_entrance_zone_tableId() const {return 479;};
BnsTables::Shared::TableRef enter_pc_spawn;
int enter_pc_spawn_tableId() const {return 488;};
BnsTables::Shared::TableRef publicraid_name2;
int publicraid_name2_tableId() const {return 434;};
BnsTables::Shared::TableRef publicraid_desc;
int publicraid_desc_tableId() const {return 434;};
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
wchar_t* publicraid_icon;
wchar_t* publicraid_image;
bool enable_reset_combat_mode;
char Pad3[3];
__int32 reset_combat_mode_recycle_duration;
wchar_t* public_raid_kismet_name[30];
__int32 public_raid_kismet_name_Size() const {return 30;};
BnsTables::Shared::TableRef public_raid_npc_for_kismet[30];
__int32 public_raid_npc_for_kismet_Size() const {return 30;};
int public_raid_npc_for_kismet_tableId() const {return 276;};
bool enable_custom_pouch_drop_position;
char Pad4[3];
float pouch_pos_x;
float pouch_pos_y;
float pouch_pos_z;
__int16 end_by_duration_second;
char Pad5[2];
wchar_t* exit_env_name;
BnsTables::Shared::TableRef boss_npc_alias[8];
__int32 boss_npc_alias_Size() const {return 8;};
int boss_npc_alias_tableId() const {return 276;};
BnsTables::Shared::TableRef boss_npc_section[8];
__int32 boss_npc_section_Size() const {return 8;};
int boss_npc_section_tableId() const {return 434;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 4); }
		static __int16 TableId() { return 302; }
		static __int32 SubType() { return -1; }
		enum class required_preceding_quest_check {
			and_val = 0,
			or_val = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) public_raid_RecordPtr // : DrRecordPtr
	{
		public_raid_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}