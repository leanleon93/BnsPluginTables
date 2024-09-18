/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct contentsjournal2noti_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef description;
int description_tableId(){return 420;};
BnsTables::Shared::TableRef noti_quest_id;
int noti_quest_id_tableId(){return 294;};
__int8 noti_level;
__int8 noti_mastery_level;
char Pad0[2];
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
bool event;
char Pad1[3];
BnsTables::Shared::TableRef simple_field;
int simple_field_tableId(){return 336;};
BnsTables::Shared::TableRef classic_field_zone;
int classic_field_zone_tableId(){return 58;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 70; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contentsjournal2noti_RecordPtr // : DrRecordPtr
	{
		contentsjournal2noti_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contentsjournal2noti_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}