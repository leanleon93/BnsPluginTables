/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_tendency_field_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct tendency_field_buyudo_Record : tendency_field_Record
	{
	public:
		BnsTables::Shared::TableRef playable_time;
int playable_time_tableId() const {return 460;};
__int16 check_score_required_min_faction_member_count;
char Pad_sub_0[2];
BnsTables::Shared::TableRef tendency_1_faction1_warfare_boss[5];
__int32 tendency_1_faction1_warfare_boss_Size() const {return 5;};
int tendency_1_faction1_warfare_boss_tableId() const {return 276;};
BnsTables::Shared::TableRef tendency_1_faction2_warfare_boss[5];
__int32 tendency_1_faction2_warfare_boss_Size() const {return 5;};
int tendency_1_faction2_warfare_boss_tableId() const {return 276;};
BnsTables::Shared::TableRef tendency_2_faction1_warfare_boss[5];
__int32 tendency_2_faction1_warfare_boss_Size() const {return 5;};
int tendency_2_faction1_warfare_boss_tableId() const {return 276;};
BnsTables::Shared::TableRef tendency_2_faction2_warfare_boss[5];
__int32 tendency_2_faction2_warfare_boss_Size() const {return 5;};
int tendency_2_faction2_warfare_boss_tableId() const {return 276;};
BnsTables::Shared::TableRef tendency_3_warfare_boss[5];
__int32 tendency_3_warfare_boss_Size() const {return 5;};
int tendency_3_warfare_boss_tableId() const {return 276;};
BnsTables::Shared::TableRef tendency_1_faction1_warfare_quest[5];
__int32 tendency_1_faction1_warfare_quest_Size() const {return 5;};
int tendency_1_faction1_warfare_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef tendency_1_faction2_warfare_quest[5];
__int32 tendency_1_faction2_warfare_quest_Size() const {return 5;};
int tendency_1_faction2_warfare_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef tendency_2_faction1_warfare_quest[5];
__int32 tendency_2_faction1_warfare_quest_Size() const {return 5;};
int tendency_2_faction1_warfare_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef tendency_2_faction2_warfare_quest[5];
__int32 tendency_2_faction2_warfare_quest_Size() const {return 5;};
int tendency_2_faction2_warfare_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef tendency_3_faction1_warfare_quest[5];
__int32 tendency_3_faction1_warfare_quest_Size() const {return 5;};
int tendency_3_faction1_warfare_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef tendency_3_faction2_warfare_quest[5];
__int32 tendency_3_faction2_warfare_quest_Size() const {return 5;};
int tendency_3_faction2_warfare_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef tendency_1_faction1_sub_quest[5];
__int32 tendency_1_faction1_sub_quest_Size() const {return 5;};
int tendency_1_faction1_sub_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef tendency_1_faction2_sub_quest[5];
__int32 tendency_1_faction2_sub_quest_Size() const {return 5;};
int tendency_1_faction2_sub_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef tendency_2_faction1_sub_quest[5];
__int32 tendency_2_faction1_sub_quest_Size() const {return 5;};
int tendency_2_faction1_sub_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef tendency_2_faction2_sub_quest[5];
__int32 tendency_2_faction2_sub_quest_Size() const {return 5;};
int tendency_2_faction2_sub_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef tendency_3_faction1_sub_quest[5];
__int32 tendency_3_faction1_sub_quest_Size() const {return 5;};
int tendency_3_faction1_sub_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef tendency_3_faction2_sub_quest[5];
__int32 tendency_3_faction2_sub_quest_Size() const {return 5;};
int tendency_3_faction2_sub_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef faction1_kill_quest;
int faction1_kill_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef faction2_kill_quest;
int faction2_kill_quest_tableId() const {return 306;};
__int32 defeat_field_play_point_bonus_percent;
__int32 defeat_faction_score_bonus_percent;
__int32 defeat_bonus_point_percent;
BnsTables::Shared::TableRef reentrance_faction1_spawn;
int reentrance_faction1_spawn_tableId() const {return 487;};
BnsTables::Shared::TableRef reentrance_faction2_spawn;
int reentrance_faction2_spawn_tableId() const {return 487;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}