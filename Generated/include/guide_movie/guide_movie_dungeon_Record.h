/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_guide_movie_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct guide_movie_dungeon_Record : guide_movie_Record
	{
	public:
		Data::TableRef cave;
int cave_tableId(){return 49;};
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
Data::TableRef raid_dungeon;
int raid_dungeon_tableId(){return 289;};
Data::TableRef boss_challenge;
int boss_challenge_tableId(){return 44;};
Data::TableRef duel_bot_challenge;
int duel_bot_challenge_tableId(){return 101;};
Data::TableRef duel_bot_training_room;
int duel_bot_training_room_tableId(){return 104;};
Data::TableRef tendency_field;
int tendency_field_tableId(){return 403;};
Data::TableRef simple_field;
int simple_field_tableId(){return 323;};
Data::TableRef time_limit_field;
int time_limit_field_tableId(){return 406;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}