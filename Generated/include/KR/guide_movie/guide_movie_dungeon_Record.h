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
int cave_tableId(){return 49;};
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId(){return 114;};
BnsTables::Shared::TableRef raid_dungeon;
int raid_dungeon_tableId(){return 302;};
BnsTables::Shared::TableRef boss_challenge;
int boss_challenge_tableId(){return 44;};
BnsTables::Shared::TableRef duel_bot_challenge;
int duel_bot_challenge_tableId(){return 102;};
BnsTables::Shared::TableRef duel_bot_training_room;
int duel_bot_training_room_tableId(){return 105;};
BnsTables::Shared::TableRef tendency_field;
int tendency_field_tableId(){return 418;};
BnsTables::Shared::TableRef simple_field;
int simple_field_tableId(){return 336;};
BnsTables::Shared::TableRef time_limit_field;
int time_limit_field_tableId(){return 421;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}