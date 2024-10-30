/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct jumpingcharacter_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;
__int16 jumping_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 condition_level;
char Pad0[3];
BnsTables::Shared::TableRef tutorial_zone[4];
__int32 tutorial_zone_Size() const {return 4;};
int tutorial_zone_tableId() const {return 461;};
BnsTables::Shared::TableRef train_quest;
int train_quest_tableId() const {return 294;};
BnsTables::Shared::TableRef skip_msg_achievement;
int skip_msg_achievement_tableId() const {return 6;};
bool creation_enable;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 236; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jumpingcharacter_RecordPtr // : DrRecordPtr
	{
		jumpingcharacter_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}