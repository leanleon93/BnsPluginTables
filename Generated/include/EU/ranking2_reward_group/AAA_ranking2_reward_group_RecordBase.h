/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct ranking2_reward_group_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 reward_group_ranking_top[20];
__int32 reward_group_ranking_top_Size() const {return 20;};
__int32 reward_group_ranking_bottom[20];
__int32 reward_group_ranking_bottom_Size() const {return 20;};
BnsTables::Shared::TableRef reward[20];
__int32 reward_Size() const {return 20;};
int reward_tableId() const {return 327;};
__int32 effect_reward_group_ranking_top[20];
__int32 effect_reward_group_ranking_top_Size() const {return 20;};
__int32 effect_reward_group_ranking_bottom[20];
__int32 effect_reward_group_ranking_bottom_Size() const {return 20;};
BnsTables::Shared::TableRef effect_reward[20];
__int32 effect_reward_Size() const {return 20;};
int effect_reward_tableId() const {return 326;};
wchar_t* default_job_ranking_imageset_large;
wchar_t* default_job_ranking_imageset;
wchar_t* job_ranking_imageset_large[20];
__int32 job_ranking_imageset_large_Size() const {return 20;};
wchar_t* job_ranking_imageset[20];
__int32 job_ranking_imageset_Size() const {return 20;};
wchar_t* default_total_ranking_imageset_large;
wchar_t* default_total_ranking_imageset;
wchar_t* total_ranking_imageset_large[20];
__int32 total_ranking_imageset_large_Size() const {return 20;};
wchar_t* total_ranking_imageset[20];
__int32 total_ranking_imageset_Size() const {return 20;};
wchar_t* ranking_buff_imageset[20];
__int32 ranking_buff_imageset_Size() const {return 20;};
wchar_t* ranking_top_ranker_imageset[3];
__int32 ranking_top_ranker_imageset_Size() const {return 3;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 328; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_reward_group_RecordPtr // : DrRecordPtr
	{
		ranking2_reward_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}