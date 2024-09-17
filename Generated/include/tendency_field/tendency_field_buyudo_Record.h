/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_tendency_field_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct tendency_field_buyudo_Record : tendency_field_Record
	{
	public:
		Data::TableRef playable_time;
int playable_time_tableId(){return 431;};
__int16 check_score_required_min_faction_member_count;
char Pad_sub_0[2];
Data::TableRef tendency_1_faction1_warfare_boss[5];
int tendency_1_faction1_warfare_boss_tableId(){return 255;};
Data::TableRef tendency_1_faction2_warfare_boss[5];
int tendency_1_faction2_warfare_boss_tableId(){return 255;};
Data::TableRef tendency_2_faction1_warfare_boss[5];
int tendency_2_faction1_warfare_boss_tableId(){return 255;};
Data::TableRef tendency_2_faction2_warfare_boss[5];
int tendency_2_faction2_warfare_boss_tableId(){return 255;};
Data::TableRef tendency_3_warfare_boss[5];
int tendency_3_warfare_boss_tableId(){return 255;};
Data::TableRef tendency_1_faction1_warfare_quest[5];
int tendency_1_faction1_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_1_faction2_warfare_quest[5];
int tendency_1_faction2_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_2_faction1_warfare_quest[5];
int tendency_2_faction1_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_2_faction2_warfare_quest[5];
int tendency_2_faction2_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_3_faction1_warfare_quest[5];
int tendency_3_faction1_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_3_faction2_warfare_quest[5];
int tendency_3_faction2_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_1_faction1_sub_quest[5];
int tendency_1_faction1_sub_quest_tableId(){return 283;};
Data::TableRef tendency_1_faction2_sub_quest[5];
int tendency_1_faction2_sub_quest_tableId(){return 283;};
Data::TableRef tendency_2_faction1_sub_quest[5];
int tendency_2_faction1_sub_quest_tableId(){return 283;};
Data::TableRef tendency_2_faction2_sub_quest[5];
int tendency_2_faction2_sub_quest_tableId(){return 283;};
Data::TableRef tendency_3_faction1_sub_quest[5];
int tendency_3_faction1_sub_quest_tableId(){return 283;};
Data::TableRef tendency_3_faction2_sub_quest[5];
int tendency_3_faction2_sub_quest_tableId(){return 283;};
Data::TableRef faction1_kill_quest;
int faction1_kill_quest_tableId(){return 283;};
Data::TableRef faction2_kill_quest;
int faction2_kill_quest_tableId(){return 283;};
__int32 defeat_field_play_point_bonus_percent;
__int32 defeat_faction_score_bonus_percent;
__int32 defeat_bonus_point_percent;
Data::TableRef reentrance_faction1_spawn;
int reentrance_faction1_spawn_tableId(){return 452;};
Data::TableRef reentrance_faction2_spawn;
int reentrance_faction2_spawn_tableId(){return 452;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}