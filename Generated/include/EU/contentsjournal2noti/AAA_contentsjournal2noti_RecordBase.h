/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct contentsjournal2noti_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef description;
int description_tableId() const {return 435;};
BnsTables::Shared::TableRef noti_quest_id;
int noti_quest_id_tableId() const {return 307;};
signed char noti_level;
signed char noti_mastery_level;
char Pad0[2];
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
bool event;
char Pad1[3];
BnsTables::Shared::TableRef simple_field;
int simple_field_tableId() const {return 349;};
BnsTables::Shared::TableRef classic_field_zone;
int classic_field_zone_tableId() const {return 58;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 72; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contentsjournal2noti_RecordPtr // : DrRecordPtr
	{
		contentsjournal2noti_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}