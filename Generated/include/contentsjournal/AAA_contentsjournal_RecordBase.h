/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct contentsjournal_Record : DrEl
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
Data::TableRef cave;
int cave_tableId(){return 49;};
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
Data::TableRef dungeon_solo;
int dungeon_solo_tableId(){return 110;};
Data::TableRef raid_dungeon;
int raid_dungeon_tableId(){return 289;};
Data::TableRef sealed_dungeon_modify;
int sealed_dungeon_modify_tableId(){return 316;};
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
Data::TableRef classic_field_zone;
int classic_field_zone_tableId(){return 57;};
Data::TableRef time_limit_field_zone;
int time_limit_field_zone_tableId(){return 406;};
Data::TableRef teleport;
int teleport_tableId(){return 401;};
__int8 sort_no;
bool event;

		static TableVersion Version() { return TableVersion(0, 10); }
		static __int16 TableId() { return 70; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contentsjournal_RecordPtr // : DrRecordPtr
	{
		contentsjournal_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contentsjournal_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}