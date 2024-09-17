/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct duel_bot_Record : DrEl
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
__int8 race;
__int8 sex;
__int8 job;
__int8 level;
__int8 mastery_level;
char Pad0[3];
Data::TableRef faction;
int faction_tableId(){return 130;};
__int16 speed;
__int16 radius;
__int16 scale;
char Pad1[2];
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef appearance;
int appearance_tableId(){return 84;};
wchar_t* animset;
Data::TableRef summoned_name2;
int summoned_name2_tableId(){return 405;};
Data::TableRef summoned_appearance;
int summoned_appearance_tableId(){return 84;};
wchar_t* summoned_animset;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 103; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_RecordPtr // : DrRecordPtr
	{
		duel_bot_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_bot_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}