/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct quest_tutorial_case_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		signed char prob;
char Pad0[3];
BnsTables::Shared::TableRef mapunit[10];
__int32 mapunit_Size() const {return 10;};
int mapunit_tableId() const {return 262;};
__int16 range_min;
__int16 range_max;
signed char progress_mission;
char Pad1[3];
BnsTables::Shared::TableRef valid_zone[2];
__int32 valid_zone_Size() const {return 2;};
int valid_zone_tableId() const {return 486;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 0; }
		static __int32 SubType() { return -1; }
		enum class progress_mission {
			y = 0,
			reaction_only = 1,
			n = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_tutorial_case_RecordPtr // : DrRecordPtr
	{
		quest_tutorial_case_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}