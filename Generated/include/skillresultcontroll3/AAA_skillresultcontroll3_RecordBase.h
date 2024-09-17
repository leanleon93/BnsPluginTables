/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skillresultcontroll3_Record : DrEl
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
bool immune_target_counter_skill[5];
bool immune_target_parry_skill[5];
bool immune_target_perfect_parry_skill[5];
bool immune_target_bounce_skill[5];
bool immune_target_dodge_skill[5];
bool immune_miss_result[5];

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 342; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillresultcontroll3_RecordPtr // : DrRecordPtr
	{
		skillresultcontroll3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillresultcontroll3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}