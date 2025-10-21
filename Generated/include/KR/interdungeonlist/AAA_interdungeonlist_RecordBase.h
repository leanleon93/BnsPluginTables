/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct interdungeonlist_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId() const {return 117;};
BnsTables::Shared::TableRef cave;
int cave_tableId() const {return 49;};
BnsTables::Shared::TableRef party_battle_field;
int party_battle_field_tableId() const {return 284;};
BnsTables::Shared::TableRef public_raid;
int public_raid_tableId() const {return 303;};
BnsTables::Shared::TableRef battle_royal_field;
int battle_royal_field_tableId() const {return 32;};
BnsTables::Shared::TableRef sealed_dungeon;
int sealed_dungeon_tableId() const {return 117;};
BnsTables::Shared::TableRef duel_npc_challenge;
int duel_npc_challenge_tableId() const {return 113;};
BnsTables::Shared::TableRef required_complete_quest[2];
__int32 required_complete_quest_Size() const {return 2;};
int required_complete_quest_tableId() const {return 307;};
signed char required_complete_quest_check;
bool use_difficulty_type[3];
__int32 use_difficulty_type_Size() const {return 3;};
bool use_chat_filter;
signed char quest_mission_step;
bool use_guild_combat;
bool use_pc_contents_type_dungeon;
signed char skip_match_required_member_count;
char Pad0[3];
wchar_t* representative_small_imageset;
wchar_t* representative_large_imageset;
signed char first_clear_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 194; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) interdungeonlist_RecordPtr // : DrRecordPtr
	{
		interdungeonlist_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}