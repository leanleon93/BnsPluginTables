/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
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
int zone_tableId(){return 461;};
__int8 max_pc_count;
__int8 max_party_count;
__int8 round_id;
__int8 required_level;
__int8 required_mastery_level;
char Pad0[3];
BnsTables::Shared::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 294;};
__int8 required_preceding_quest_check;
char Pad1[3];
BnsTables::Shared::TableRef required_available_weekly_time;
int required_available_weekly_time_tableId(){return 446;};
BnsTables::Shared::TableRef start_weekly_time;
int start_weekly_time_tableId(){return 446;};
__int16 stand_by_duration_second;
char Pad2[2];
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
BnsTables::Shared::TableRef arena_entrance_zone;
int arena_entrance_zone_tableId(){return 461;};
BnsTables::Shared::TableRef enter_pc_spawn;
int enter_pc_spawn_tableId(){return 470;};
BnsTables::Shared::TableRef publicraid_name2;
int publicraid_name2_tableId(){return 420;};
BnsTables::Shared::TableRef publicraid_desc;
int publicraid_desc_tableId(){return 420;};
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
wchar_t* publicraid_icon;
wchar_t* publicraid_image;
bool enable_reset_combat_mode;
char Pad3[3];
__int32 reset_combat_mode_recycle_duration;
wchar_t* public_raid_kismet_name[30];
BnsTables::Shared::TableRef public_raid_npc_for_kismet[30];
int public_raid_npc_for_kismet_tableId(){return 265;};
bool enable_custom_pouch_drop_position;
char Pad4[3];
float pouch_pos_x;
float pouch_pos_y;
float pouch_pos_z;
__int16 end_by_duration_second;
char Pad5[2];
wchar_t* exit_env_name;
BnsTables::Shared::TableRef boss_npc_alias[8];
int boss_npc_alias_tableId(){return 265;};
BnsTables::Shared::TableRef boss_npc_section[8];
int boss_npc_section_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 3); }
		static __int16 TableId() { return 290; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) public_raid_RecordPtr // : DrRecordPtr
	{
		public_raid_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::public_raid_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}