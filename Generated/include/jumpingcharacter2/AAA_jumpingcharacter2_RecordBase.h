/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct jumpingcharacter2_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 required_level;
char Pad0[2];
Data::TableRef required_preceding_epic_quest;
int required_preceding_epic_quest_tableId(){return 283;};
Data::TableRef last_epic_quest_to_complete;
int last_epic_quest_to_complete_tableId(){return 283;};
Data::TableRef quest_to_complete[20];
int quest_to_complete_tableId(){return 283;};
Data::TableRef warp_to_pcspawn;
int warp_to_pcspawn_tableId(){return 452;};
Data::TableRef faction1_item;
int faction1_item_tableId(){return 189;};
Data::TableRef faction2_item;
int faction2_item_tableId(){return 189;};
__int32 reward_exp;
__int32 reward_money;
Data::TableRef reward_item[4];
int reward_item_tableId(){return 189;};
__int16 reward_item_count[4];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 228; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jumpingcharacter2_RecordPtr // : DrRecordPtr
	{
		jumpingcharacter2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::jumpingcharacter2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}