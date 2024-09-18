/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class tendency_field_RecordSubType : __int32
    {
		tendency_field_record_sub_normal = 0,
		tendency_field_record_sub_buyudo = 1,
		tendency_field_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct tendency_field_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef main_zone;
int main_zone_tableId(){return 461;};
BnsTables::Shared::TableRef sub_zone[7];
int sub_zone_tableId(){return 461;};
bool enable_change_channel;
__int8 required_level;
__int8 required_mastery_level;
char Pad0[1];
BnsTables::Shared::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 294;};
__int8 required_preceding_quest_check;
bool required_activated_main_faction;
bool restrict_enter_zone_when_manifest_tendency;
char Pad1[1];
__int16 stand_by_duration_minute;
char Pad2[2];
__int32 in_progress_duration_minute;
__int8 tendency_1_max_play_value;
__int8 tendency_2_max_play_value;
__int8 tendency_3_max_play_value;
__int8 tendency_1_reset_score_type;
__int8 tendency_2_reset_score_type;
__int8 tendency_3_reset_score_type;
char Pad3[2];
__int64 quest_pack_simple_quest_refresh_money;
BnsTables::Shared::TableRef weekly_time_table_for_added_reward[2];
int weekly_time_table_for_added_reward_tableId(){return 446;};
__int32 weekly_bonus_point_percent[2];
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
bool enable_infinite_hyper_energy;
bool disable_move_to_arena;
bool disable_move_to_skill_training_room;
bool enable_change_faction_costume;
bool enable_set_guild_meeting_place;
bool enable_warp_to_guild_member;
bool enable_warp_to_pvp_result_opponent;
char Pad4[1];
wchar_t* tendency_start_kismet_name[3];
wchar_t* tendency_end_kismet_name[3];
BnsTables::Shared::TableRef tendency_field_name2;
int tendency_field_name2_tableId(){return 420;};
BnsTables::Shared::TableRef tendency_field_desc;
int tendency_field_desc_tableId(){return 420;};
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 ui_text_grade;
char Pad5[3];
BnsTables::Shared::TableRef tendency_standby_msg[3];
int tendency_standby_msg_tableId(){return 155;};
BnsTables::Shared::TableRef tendency_start_msg[3];
int tendency_start_msg_tableId(){return 155;};
BnsTables::Shared::TableRef tendency_timeup_alarm_msg[3];
int tendency_timeup_alarm_msg_tableId(){return 155;};
BnsTables::Shared::TableRef tendency_end_msg[3];
int tendency_end_msg_tableId(){return 155;};
BnsTables::Shared::TableRef guide_standby_msg[3];
int guide_standby_msg_tableId(){return 155;};
BnsTables::Shared::TableRef guide_start_msg[3];
int guide_start_msg_tableId(){return 155;};
BnsTables::Shared::TableRef guide_timeup_alarm_msg[3];
int guide_timeup_alarm_msg_tableId(){return 155;};
BnsTables::Shared::TableRef guide_end_msg[3];
int guide_end_msg_tableId(){return 155;};
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
__int16 recommend_attack_power;
char Pad6[2];
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 195;};
BnsTables::Shared::TableRef display_quests[12];
int display_quests_tableId(){return 294;};
BnsTables::Shared::TableRef tactic;
int tactic_tableId(){return 420;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId(){return 72;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 22); }
		static __int16 TableId() { return 418; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) tendency_field_RecordPtr // : DrRecordPtr
	{
		tendency_field_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::tendency_field_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}