/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct contentsjournal2noti_Record : DrEl
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
Data::TableRef description;
int description_tableId(){return 405;};
Data::TableRef noti_quest_id;
int noti_quest_id_tableId(){return 283;};
__int8 noti_level;
__int8 noti_mastery_level;
char Pad0[2];
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
bool event;
char Pad1[3];
Data::TableRef simple_field;
int simple_field_tableId(){return 323;};
Data::TableRef classic_field_zone;
int classic_field_zone_tableId(){return 57;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 69; }
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