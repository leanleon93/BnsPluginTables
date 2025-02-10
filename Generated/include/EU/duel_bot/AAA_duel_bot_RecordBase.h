/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct duel_bot_Record : BnsTables::Shared::DrEl
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
signed char race;
signed char sex;
signed char job;
signed char level;
signed char mastery_level;
char Pad0[3];
BnsTables::Shared::TableRef faction;
int faction_tableId() const {return 135;};
__int16 speed;
__int16 radius;
__int16 scale;
char Pad1[2];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 420;};
BnsTables::Shared::TableRef appearance;
int appearance_tableId() const {return 85;};
wchar_t* animset;
BnsTables::Shared::TableRef summoned_name2;
int summoned_name2_tableId() const {return 420;};
BnsTables::Shared::TableRef summoned_appearance;
int summoned_appearance_tableId() const {return 85;};
wchar_t* summoned_animset;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 104; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_RecordPtr // : DrRecordPtr
	{
		duel_bot_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}