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
int main_zone_tableId() const {return 470;};
BnsTables::Shared::TableRef sub_zone[7];
__int32 sub_zone_Size() const {return 7;};
int sub_zone_tableId() const {return 470;};
bool enable_change_channel;
signed char required_level;
signed char required_mastery_level;
char Pad0[1];
BnsTables::Shared::TableRef required_preceding_quest[3];
__int32 required_preceding_quest_Size() const {return 3;};
int required_preceding_quest_tableId() const {return 299;};
signed char required_preceding_quest_check;
bool required_activated_main_faction;
bool restrict_enter_zone_when_manifest_tendency;
char Pad1[1];
__int16 stand_by_duration_minute;
char Pad2[2];
__int32 in_progress_duration_minute;
signed char tendency_1_max_play_value;
signed char tendency_2_max_play_value;
signed char tendency_3_max_play_value;
signed char tendency_1_reset_score_type;
signed char tendency_2_reset_score_type;
signed char tendency_3_reset_score_type;
char Pad3[2];
__int64 quest_pack_simple_quest_refresh_money;
BnsTables::Shared::TableRef weekly_time_table_for_added_reward[2];
__int32 weekly_time_table_for_added_reward_Size() const {return 2;};
int weekly_time_table_for_added_reward_tableId() const {return 453;};
__int32 weekly_bonus_point_percent[2];
__int32 weekly_bonus_point_percent_Size() const {return 2;};
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
bool enable_infinite_hyper_energy;
bool disable_move_to_arena;
bool disable_move_to_skill_training_room;
bool enable_change_faction_costume;
bool enable_set_guild_meeting_place;
bool enable_warp_to_guild_member;
bool enable_warp_to_pvp_result_opponent;
char Pad4[1];
wchar_t* tendency_start_kismet_name[3];
__int32 tendency_start_kismet_name_Size() const {return 3;};
wchar_t* tendency_end_kismet_name[3];
__int32 tendency_end_kismet_name_Size() const {return 3;};
BnsTables::Shared::TableRef tendency_field_name2;
int tendency_field_name2_tableId() const {return 427;};
BnsTables::Shared::TableRef tendency_field_desc;
int tendency_field_desc_tableId() const {return 427;};
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
signed char ui_text_grade;
char Pad5[3];
BnsTables::Shared::TableRef tendency_standby_msg[3];
__int32 tendency_standby_msg_Size() const {return 3;};
int tendency_standby_msg_tableId() const {return 156;};
BnsTables::Shared::TableRef tendency_start_msg[3];
__int32 tendency_start_msg_Size() const {return 3;};
int tendency_start_msg_tableId() const {return 156;};
BnsTables::Shared::TableRef tendency_timeup_alarm_msg[3];
__int32 tendency_timeup_alarm_msg_Size() const {return 3;};
int tendency_timeup_alarm_msg_tableId() const {return 156;};
BnsTables::Shared::TableRef tendency_end_msg[3];
__int32 tendency_end_msg_Size() const {return 3;};
int tendency_end_msg_tableId() const {return 156;};
BnsTables::Shared::TableRef guide_standby_msg[3];
__int32 guide_standby_msg_Size() const {return 3;};
int guide_standby_msg_tableId() const {return 156;};
BnsTables::Shared::TableRef guide_start_msg[3];
__int32 guide_start_msg_Size() const {return 3;};
int guide_start_msg_tableId() const {return 156;};
BnsTables::Shared::TableRef guide_timeup_alarm_msg[3];
__int32 guide_timeup_alarm_msg_Size() const {return 3;};
int guide_timeup_alarm_msg_tableId() const {return 156;};
BnsTables::Shared::TableRef guide_end_msg[3];
__int32 guide_end_msg_Size() const {return 3;};
int guide_end_msg_tableId() const {return 156;};
signed char recommand_level_min;
signed char recommand_level_max;
signed char recommand_mastery_level_min;
signed char recommand_mastery_level_max;
__int16 recommend_attack_power;
char Pad6[2];
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId() const {return 198;};
BnsTables::Shared::TableRef display_quests[12];
__int32 display_quests_Size() const {return 12;};
int display_quests_tableId() const {return 299;};
BnsTables::Shared::TableRef tactic;
int tactic_tableId() const {return 427;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId() const {return 72;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 22); }
		static __int16 TableId() { return 425; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) tendency_field_RecordPtr // : DrRecordPtr
	{
		tendency_field_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}