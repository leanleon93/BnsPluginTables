/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct quest_Record : DrEl
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
__int8 max_repeat;
char Pad0[3];
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef map_group_1[2];
int map_group_1_tableId(){return 237;};
Data::TableRef group2;
int group2_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
Data::TableRef completed_desc;
int completed_desc_tableId(){return 405;};
__int8 category;
bool completed_list;
__int8 grade;
bool tutorial;
bool show_tutorial_tag;
__int8 last_mission_step;
bool effect_exist;
__int8 day_of_week;
__int8 reset_type;
__int8 reset_by_acquire_time;
__int8 reset_day_of_week;
__int8 reset_day_of_month;
Data::TableRef main_faction;
int main_faction_tableId(){return 130;};
__int8 production;
__int8 save_type;
bool invoke_fx_msg;
char Pad1[1];
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
__int8 dungeon_type;
__int8 content_type;
bool retired;
bool progress_difficulty_type[3];
bool progress_difficulty_type_always;
char Pad2[1];
Data::ExplicitTableRef attraction[4];
Data::ExplicitTableRef attraction_info;
bool reset_enable;
char Pad3[3];
__int32 reset_money;
Data::TableRef reset_item[4];
int reset_item_tableId(){return 189;};
__int8 reset_item_count[4];
Data::TableRef acquire_talksocial;
int acquire_talksocial_tableId(){return 399;};
float acquire_talksocial_delay;
Data::TableRef complete_talksocial;
int complete_talksocial_tableId(){return 399;};
float complete_talksocial_delay;
bool check_vitality;
char Pad4[1];
__int16 valid_date_start_year;
__int8 valid_date_start_month;
__int8 valid_date_start_day;
__int16 valid_date_end_year;
__int8 valid_date_end_month;
__int8 valid_date_end_day;
__int8 valid_time_start_hour;
__int8 valid_time_end_hour;
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
Data::TableRef dungeon2;
int dungeon2_tableId(){return 110;};
__int8 duel_mission_steps[16];
__int8 duel_missions[16];
__int8 duel_cases[16];
__int16 duel_case_subtypes[16];
__int8 exceed_level_next_level;
char Pad6[3];
Data::TableRef contents_reset;
int contents_reset_tableId(){return 72;};

		static TableVersion Version() { return TableVersion(7, 1); }
		static __int16 TableId() { return 283; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_RecordPtr // : DrRecordPtr
	{
		quest_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::quest_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}