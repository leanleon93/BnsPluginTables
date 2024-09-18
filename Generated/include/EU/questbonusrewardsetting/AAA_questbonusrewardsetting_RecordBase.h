/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
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
int quest_tableId(){return 283;};
BnsTables::Shared::TableRef reward;
int reward_tableId(){return 281;};
BnsTables::Shared::TableRef basic_quota;
int basic_quota_tableId(){return 66;};
BnsTables::Shared::TableRef contents_reset[10];
int contents_reset_tableId(){return 72;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 282; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) questbonusrewardsetting_RecordPtr // : DrRecordPtr
	{
		questbonusrewardsetting_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::questbonusrewardsetting_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}