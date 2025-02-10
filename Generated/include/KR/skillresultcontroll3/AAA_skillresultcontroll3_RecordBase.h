/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skillresultcontroll3_Record : BnsTables::Shared::DrEl
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
bool immune_target_counter_skill[5];
__int32 immune_target_counter_skill_Size() const {return 5;};
bool immune_target_parry_skill[5];
__int32 immune_target_parry_skill_Size() const {return 5;};
bool immune_target_perfect_parry_skill[5];
__int32 immune_target_perfect_parry_skill_Size() const {return 5;};
bool immune_target_bounce_skill[5];
__int32 immune_target_bounce_skill_Size() const {return 5;};
bool immune_target_dodge_skill[5];
__int32 immune_target_dodge_skill_Size() const {return 5;};
bool immune_miss_result[5];
__int32 immune_miss_result_Size() const {return 5;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 8); }
		static __int16 TableId() { return 360; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillresultcontroll3_RecordPtr // : DrRecordPtr
	{
		skillresultcontroll3_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}