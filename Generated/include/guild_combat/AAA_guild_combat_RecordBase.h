/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct guild_combat_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 season_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 required_level;
char Pad0[1];
__int16 required_mastery_level;
Data::TableRef available_matching_weekly_time;
int available_matching_weekly_time_tableId(){return 431;};
__int16 party_battle_point_bonus_rate;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 163; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_combat_RecordPtr // : DrRecordPtr
	{
		guild_combat_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guild_combat_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}