/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class boast_event_RecordSubType : __int32
    {
		boast_event_record_sub_transform_item = 0,
		boast_event_record_sub_transform_item_convert = 1,
		boast_event_record_sub_buy_random_store_item = 2,
		boast_event_record_sub_acquire_item_reward = 3,
		boast_event_record_sub_awakening_item = 4,
		boast_event_record_sub_complete_achievement = 5,
		boast_event_record_sub_acquire_env_reward = 6,
		boast_event_record_sub_acquire_npc_reward = 7,
		boast_event_record_sub_growth_item = 8,
		boast_event_record_sub_process_item_fusion = 9,
		boast_event_record_sub_treasureboard_season_reward = 10,
		boast_event_record_sub_treasureboard_reward = 11,
		boast_event_record_sub_improve_item = 12,
		boast_event_record_sub_count = 13,
    };
#pragma pack(push, 1)
	struct boast_event_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char broadcast;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 0); }
		static __int16 TableId() { return 43; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) boast_event_RecordPtr // : DrRecordPtr
	{
		boast_event_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}