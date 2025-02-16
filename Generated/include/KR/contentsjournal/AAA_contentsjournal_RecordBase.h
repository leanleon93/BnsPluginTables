/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct contentsjournal_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef cave;
int cave_tableId() const {return 49;};
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId() const {return 114;};
BnsTables::Shared::TableRef dungeon_solo;
int dungeon_solo_tableId() const {return 114;};
BnsTables::Shared::TableRef raid_dungeon;
int raid_dungeon_tableId() const {return 308;};
BnsTables::Shared::TableRef sealed_dungeon_modify;
int sealed_dungeon_modify_tableId() const {return 335;};
BnsTables::Shared::TableRef boss_challenge;
int boss_challenge_tableId() const {return 44;};
BnsTables::Shared::TableRef duel_bot_challenge;
int duel_bot_challenge_tableId() const {return 102;};
BnsTables::Shared::TableRef duel_bot_training_room;
int duel_bot_training_room_tableId() const {return 105;};
BnsTables::Shared::TableRef tendency_field;
int tendency_field_tableId() const {return 425;};
BnsTables::Shared::TableRef simple_field;
int simple_field_tableId() const {return 341;};
BnsTables::Shared::TableRef classic_field_zone;
int classic_field_zone_tableId() const {return 58;};
BnsTables::Shared::TableRef time_limit_field_zone;
int time_limit_field_zone_tableId() const {return 428;};
BnsTables::Shared::TableRef teleport;
int teleport_tableId() const {return 423;};
signed char sort_no;
bool event;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 10); }
		static __int16 TableId() { return 71; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contentsjournal_RecordPtr // : DrRecordPtr
	{
		contentsjournal_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}