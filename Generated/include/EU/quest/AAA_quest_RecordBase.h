/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
int name2_tableId() const {return 420;};
BnsTables::Shared::TableRef map_group_1[2];
__int32 map_group_1_Size() const {return 2;};
int map_group_1_tableId() const {return 244;};
BnsTables::Shared::TableRef group2;
int group2_tableId() const {return 420;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 420;};
BnsTables::Shared::TableRef completed_desc;
int completed_desc_tableId() const {return 420;};
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
int main_faction_tableId() const {return 135;};
signed char production;
signed char save_type;
bool invoke_fx_msg;
char Pad1[1];
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId() const {return 114;};
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
int reset_item_tableId() const {return 195;};
signed char reset_item_count[4];
__int32 reset_item_count_Size() const {return 4;};
BnsTables::Shared::TableRef acquire_talksocial;
int acquire_talksocial_tableId() const {return 414;};
float acquire_talksocial_delay;
BnsTables::Shared::TableRef complete_talksocial;
int complete_talksocial_tableId() const {return 414;};
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
BnsTables::Shared::TableRef dungeon2;
int dungeon2_tableId() const {return 114;};
signed char duel_mission_steps[16];
__int32 duel_mission_steps_Size() const {return 16;};
signed char duel_missions[16];
__int32 duel_missions_Size() const {return 16;};
signed char duel_cases[16];
__int32 duel_cases_Size() const {return 16;};
__int16 duel_case_subtypes[16];
__int32 duel_case_subtypes_Size() const {return 16;};
signed char exceed_level_next_level;
char Pad6[3];
BnsTables::Shared::TableRef contents_reset;
int contents_reset_tableId() const {return 73;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(11, 0); }
		static __int16 TableId() { return 294; }
		static __int32 SubType() { return 0; }
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