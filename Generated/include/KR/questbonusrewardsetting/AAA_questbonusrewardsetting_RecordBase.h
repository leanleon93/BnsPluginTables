/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class questbonusrewardsetting_RecordSubType : __int32
    {
		questbonusrewardsetting_record_sub_sealed_level = 0,
		questbonusrewardsetting_record_sub_difficulty_type = 1,
		questbonusrewardsetting_record_sub_ignore_difficulty = 2,
		questbonusrewardsetting_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct questbonusrewardsetting_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef quest;
int quest_tableId() const {return 307;};
BnsTables::Shared::TableRef reward;
int reward_tableId() const {return 305;};
BnsTables::Shared::TableRef basic_quota;
int basic_quota_tableId() const {return 69;};
BnsTables::Shared::TableRef contents_reset[10];
__int32 contents_reset_Size() const {return 10;};
int contents_reset_tableId() const {return 75;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 306; }
		static __int32 SubType() { return -1; }
		enum class difficulty_type {
			none = 0,
			easy = 1,
			normal = 2,
			hard = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) questbonusrewardsetting_RecordPtr // : DrRecordPtr
	{
		questbonusrewardsetting_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}