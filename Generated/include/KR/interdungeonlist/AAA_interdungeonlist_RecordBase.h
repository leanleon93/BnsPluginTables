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
int dungeon_tableId(){return 114;};
BnsTables::Shared::TableRef cave;
int cave_tableId(){return 49;};
BnsTables::Shared::TableRef party_battle_field;
int party_battle_field_tableId(){return 271;};
BnsTables::Shared::TableRef public_raid;
int public_raid_tableId(){return 290;};
BnsTables::Shared::TableRef battle_royal_field;
int battle_royal_field_tableId(){return 32;};
BnsTables::Shared::TableRef sealed_dungeon;
int sealed_dungeon_tableId(){return 114;};
BnsTables::Shared::TableRef duel_npc_challenge;
int duel_npc_challenge_tableId(){return 110;};
BnsTables::Shared::TableRef required_complete_quest[2];
int required_complete_quest_tableId(){return 294;};
__int8 required_complete_quest_check;
bool use_difficulty_type[3];
bool use_chat_filter;
__int8 quest_mission_step;
bool use_guild_combat;
bool use_pc_contents_type_dungeon;
__int8 skip_match_required_member_count;
char Pad0[3];
wchar_t* representative_small_imageset;
wchar_t* representative_large_imageset;
__int8 first_clear_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 188; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) interdungeonlist_RecordPtr // : DrRecordPtr
	{
		interdungeonlist_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::interdungeonlist_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}