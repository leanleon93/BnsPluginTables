/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct jumpingcharacter_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;
__int16 jumping_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 condition_level;
char Pad0[3];
Data::TableRef tutorial_zone[4];
int tutorial_zone_tableId(){return 443;};
Data::TableRef train_quest;
int train_quest_tableId(){return 283;};
Data::TableRef skip_msg_achievement;
int skip_msg_achievement_tableId(){return 6;};
bool creation_enable;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 229; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jumpingcharacter_RecordPtr // : DrRecordPtr
	{
		jumpingcharacter_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::jumpingcharacter_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}