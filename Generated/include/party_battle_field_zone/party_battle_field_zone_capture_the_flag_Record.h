/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_party_battle_field_zone_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct party_battle_field_zone_capture_the_flag_Record : party_battle_field_zone_Record
	{
	public:
		char Pad_sub_0[2];
Data::TableRef flag_spawn_env;
int flag_spawn_env_tableId(){return 446;};
__int16 flag_spawn_env_respawn_duration_second[5];
__int8 flag_spawn_limit_count;
char Pad_sub_1[1];
Data::TableRef alpha_control_point[3];
int alpha_control_point_tableId(){return 446;};
Data::TableRef beta_control_point[3];
int beta_control_point_tableId(){return 446;};
__int16 double_occupation_bonus_score;
__int16 vote_delay_second;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}