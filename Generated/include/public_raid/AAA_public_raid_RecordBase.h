/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
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
	struct public_raid_Record : DrEl
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
Data::TableRef zone;
int zone_tableId(){return 443;};
__int8 max_pc_count;
__int8 max_party_count;
__int8 round_id;
__int8 required_level;
__int8 required_mastery_level;
char Pad0[3];
Data::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
char Pad1[3];
Data::TableRef required_available_weekly_time;
int required_available_weekly_time_tableId(){return 431;};
Data::TableRef start_weekly_time;
int start_weekly_time_tableId(){return 431;};
__int16 stand_by_duration_second;
char Pad2[2];
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef arena_entrance_zone;
int arena_entrance_zone_tableId(){return 443;};
Data::TableRef enter_pc_spawn;
int enter_pc_spawn_tableId(){return 452;};
Data::TableRef publicraid_name2;
int publicraid_name2_tableId(){return 405;};
Data::TableRef publicraid_desc;
int publicraid_desc_tableId(){return 405;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
wchar_t* publicraid_icon;
wchar_t* publicraid_image;
bool enable_reset_combat_mode;
char Pad3[3];
__int32 reset_combat_mode_recycle_duration;
wchar_t* public_raid_kismet_name[30];
Data::TableRef public_raid_npc_for_kismet[30];
int public_raid_npc_for_kismet_tableId(){return 255;};
bool enable_custom_pouch_drop_position;
char Pad4[3];
float pouch_pos_x;
float pouch_pos_y;
float pouch_pos_z;
__int16 end_by_duration_second;
char Pad5[2];
wchar_t* exit_env_name;
Data::TableRef boss_npc_alias[8];
int boss_npc_alias_tableId(){return 255;};
Data::TableRef boss_npc_section[8];
int boss_npc_section_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(5, 3); }
		static __int16 TableId() { return 279; }
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