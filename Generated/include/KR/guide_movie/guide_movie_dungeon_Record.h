/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_guide_movie_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct guide_movie_dungeon_Record : guide_movie_Record
	{
	public:
		BnsTables::Shared::TableRef cave;
int cave_tableId() const {return 49;};
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId() const {return 117;};
BnsTables::Shared::TableRef raid_dungeon;
int raid_dungeon_tableId() const {return 316;};
BnsTables::Shared::TableRef boss_challenge;
int boss_challenge_tableId() const {return 44;};
BnsTables::Shared::TableRef duel_bot_challenge;
int duel_bot_challenge_tableId() const {return 105;};
BnsTables::Shared::TableRef duel_bot_training_room;
int duel_bot_training_room_tableId() const {return 108;};
BnsTables::Shared::TableRef tendency_field;
int tendency_field_tableId() const {return 433;};
BnsTables::Shared::TableRef simple_field;
int simple_field_tableId() const {return 349;};
BnsTables::Shared::TableRef time_limit_field;
int time_limit_field_tableId() const {return 436;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}