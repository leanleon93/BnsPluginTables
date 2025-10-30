/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct quest_optional_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		BnsTables::Shared::TableRef faction;
int faction_tableId() const {return 139;};
signed char job[16];
__int32 job_Size() const {return 16;};
signed char sex[4];
__int32 sex_Size() const {return 4;};
signed char race[4];
__int32 race_Size() const {return 4;};
BnsTables::Shared::ExplicitTableRef slot[4];
__int32 slot_Size() const {return 4;};
signed char item_count[4];
__int32 item_count_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 512; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_optional_reward_RecordPtr // : DrRecordPtr
	{
		quest_optional_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}