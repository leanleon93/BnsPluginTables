/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class arenaportal_RecordSubType : __int32
    {
		arenaportal_record_sub_duel = 0,
		arenaportal_record_sub_dungeon = 1,
		arenaportal_record_sub_public_raid = 2,
		arenaportal_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct arenaportal_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef faction[2];
__int32 faction_Size() const {return 2;};
int faction_tableId() const {return 136;};
signed char required_quest_check;
char Pad0[3];
BnsTables::Shared::TableRef required_quest[6];
__int32 required_quest_Size() const {return 6;};
int required_quest_tableId() const {return 299;};
signed char required_min_level;
char Pad1[1];
__int16 required_min_faction_level;
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 471;};
float position_x;
float position_y;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 0); }
		static __int16 TableId() { return 13; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) arenaportal_RecordPtr // : DrRecordPtr
	{
		arenaportal_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}