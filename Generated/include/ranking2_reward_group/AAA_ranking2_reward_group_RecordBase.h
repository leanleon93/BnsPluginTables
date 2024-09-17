/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct ranking2_reward_group_Record : DrEl
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
__int32 reward_group_ranking_bottom[20];
Data::TableRef reward[20];
int reward_tableId(){return 298;};
__int32 effect_reward_group_ranking_top[20];
__int32 effect_reward_group_ranking_bottom[20];
Data::TableRef effect_reward[20];
int effect_reward_tableId(){return 297;};
wchar_t* default_job_ranking_imageset_large;
wchar_t* default_job_ranking_imageset;
wchar_t* job_ranking_imageset_large[20];
wchar_t* job_ranking_imageset[20];
wchar_t* default_total_ranking_imageset_large;
wchar_t* default_total_ranking_imageset;
wchar_t* total_ranking_imageset_large[20];
wchar_t* total_ranking_imageset[20];
wchar_t* ranking_buff_imageset[20];
wchar_t* ranking_top_ranker_imageset[3];

		static TableVersion Version() { return TableVersion(3, 0); }
		static __int16 TableId() { return 299; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_reward_group_RecordPtr // : DrRecordPtr
	{
		ranking2_reward_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_reward_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}