/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct feedback_skill_score_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef skill;
int skill_tableId() const {return 356;};
signed char skill_result[8];
__int32 skill_result_Size() const {return 8;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 145; }
		static __int32 SubType() { return -1; }
		enum class skill_result {
			none = 0,
			hit = 1,
			miss = 2,
			dodge = 3,
			parry = 4,
			perfect_parry = 5,
			bounce = 6,
			counter = 7,
			critical_hit = 8,
			hit_critical_hit = 9,
			back_hit_critical_hit = 10,
			not_hit = 11,
			all = 12,
			hit_critical_hit_parry = 13,
			parry_perfect_parry = 14,
			front_hit_critical_hit = 15,
			parry_perfect_parry_counter = 16,
			parry_perfect_parry_dodge = 17,
			parry_dodge = 18,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) feedback_skill_score_RecordPtr // : DrRecordPtr
	{
		feedback_skill_score_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}