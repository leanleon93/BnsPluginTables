/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct quest_Record : BnsTables::Shared::DrEl
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
signed char max_repeat;
char Pad0[3];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 441;};
BnsTables::Shared::TableRef map_group_1[2];
__int32 map_group_1_Size() const {return 2;};
int map_group_1_tableId() const {return 257;};
BnsTables::Shared::TableRef group2;
int group2_tableId() const {return 441;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 441;};
BnsTables::Shared::TableRef completed_desc;
int completed_desc_tableId() const {return 441;};
signed char category;
bool completed_list;
signed char grade;
bool tutorial;
bool show_tutorial_tag;
signed char last_mission_step;
bool effect_exist;
signed char day_of_week;
signed char reset_type;
signed char reset_by_acquire_time;
signed char reset_day_of_week;
signed char reset_day_of_month;
BnsTables::Shared::TableRef main_faction;
int main_faction_tableId() const {return 140;};
signed char production;
signed char save_type;
bool invoke_fx_msg;
char Pad1[1];
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId() const {return 118;};
signed char dungeon_type;
signed char content_type;
bool retired;
bool progress_difficulty_type[3];
__int32 progress_difficulty_type_Size() const {return 3;};
bool progress_difficulty_type_always;
char Pad2[1];
BnsTables::Shared::ExplicitTableRef attraction[4];
__int32 attraction_Size() const {return 4;};
BnsTables::Shared::ExplicitTableRef attraction_info;
bool reset_enable;
char Pad3[3];
__int32 reset_money;
BnsTables::Shared::TableRef reset_item[4];
__int32 reset_item_Size() const {return 4;};
int reset_item_tableId() const {return 204;};
signed char reset_item_count[4];
__int32 reset_item_count_Size() const {return 4;};
BnsTables::Shared::TableRef acquire_talksocial;
int acquire_talksocial_tableId() const {return 435;};
float acquire_talksocial_delay;
BnsTables::Shared::TableRef complete_talksocial;
int complete_talksocial_tableId() const {return 435;};
float complete_talksocial_delay;
bool check_vitality;
char Pad4[1];
__int16 valid_date_start_year;
signed char valid_date_start_month;
signed char valid_date_start_day;
__int16 valid_date_end_year;
signed char valid_date_end_month;
signed char valid_date_end_day;
signed char valid_time_start_hour;
signed char valid_time_end_hour;
bool valid_dayofweek_sun;
bool valid_dayofweek_mon;
bool valid_dayofweek_tue;
bool valid_dayofweek_wed;
bool valid_dayofweek_thu;
bool valid_dayofweek_fri;
bool valid_dayofweek_sat;
bool replay_check;
bool cinema_check;
char Pad5[3];
__int32 fatigability_consume_amount;
bool give_up_side_episode;
char Pad6[3];
BnsTables::Shared::TableRef dungeon2;
int dungeon2_tableId() const {return 118;};
signed char duel_mission_steps[16];
__int32 duel_mission_steps_Size() const {return 16;};
signed char duel_missions[16];
__int32 duel_missions_Size() const {return 16;};
signed char duel_cases[16];
__int32 duel_cases_Size() const {return 16;};
__int16 duel_case_subtypes[16];
__int32 duel_case_subtypes_Size() const {return 16;};
signed char exceed_level_next_level;
char Pad7[3];
BnsTables::Shared::TableRef contents_reset;
int contents_reset_tableId() const {return 75;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(12, 0); }
		static __int16 TableId() { return 310; }
		static __int32 SubType() { return -1; }
		enum class category {
			epic = 0,
			normal = 1,
			job = 2,
			dungeon = 3,
			attraction = 4,
			tendency_simple = 5,
			tendency_tendency = 6,
			mentoring = 7,
			hunting = 8,
		};

		enum class grade {
			value_1 = 0,
			value_2 = 1,
			value_3 = 2,
			value_4 = 3,
			value_5 = 4,
			value_6 = 5,
			value_7 = 6,
			value_8 = 7,
			value_9 = 8,
			value_10 = 9,
			value_11 = 10,
			value_12 = 11,
			value_13 = 12,
			value_14 = 13,
			value_15 = 14,
			value_16 = 15,
			value_17 = 16,
			value_18 = 17,
			value_19 = 18,
			value_20 = 19,
			value_21 = 20,
			value_22 = 21,
			value_23 = 22,
			value_24 = 23,
			value_25 = 24,
			value_26 = 25,
			value_27 = 26,
		};

		enum class day_of_week {
			none = 0,
			daily = 1,
			weekly = 2,
			monthly = 3,
			mon = 4,
			tue = 5,
			wed = 6,
			the = 7,
			fri = 8,
			sat = 9,
			sun = 10,
			sat_sun = 11,
			fri_sat_sun = 12,
		};

		enum class reset_type {
			none = 0,
			daily = 1,
			weekly = 2,
			monthly = 3,
		};

		enum class reset_by_acquire_time {
			none = 0,
			daily = 1,
			weekly = 2,
		};

		enum class reset_day_of_week {
			sun = 0,
			mon = 1,
			tue = 2,
			wed = 3,
			thu = 4,
			fri = 5,
			sat = 6,
		};

		enum class production {
			none = 0,
			production_type_1 = 1,
			production_type_2 = 2,
			production_type_3 = 3,
			production_type_4 = 4,
			production_type_5 = 5,
			production_type_6 = 6,
			production_type_7 = 7,
			gathering_type_1 = 8,
			gathering_type_2 = 9,
			gathering_type_3 = 10,
			gathering_type_4 = 11,
			gathering_type_5 = 12,
			gathering_type_6 = 13,
			gathering_type_7 = 14,
		};

		enum class save_type {
			all = 0,
			except_completion = 1,
			nothing = 2,
			except_completion_and_logout_save = 3,
		};

		enum class dungeon_type {
			unbind = 0,
			bind = 1,
		};

		enum class content_type {
			none = 0,
			gather = 1,
			production = 2,
			pvp_reward = 3,
			festival = 4,
			elite_skill = 5,
			duel = 6,
			party_battle = 7,
			special = 8,
			side_episode = 9,
			hidden = 10,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_RecordPtr // : DrRecordPtr
	{
		quest_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}