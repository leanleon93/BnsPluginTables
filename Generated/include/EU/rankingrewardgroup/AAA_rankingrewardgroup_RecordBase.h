/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct rankingrewardgroup_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 reward_group_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* reward_group_alias;
__int32 reward_group_top[20];
__int32 reward_group_top_Size() const {return 20;};
__int32 reward_group_bottom[20];
__int32 reward_group_bottom_Size() const {return 20;};
BnsTables::Shared::TableRef reward_data[20];
__int32 reward_data_Size() const {return 20;};
int reward_data_tableId() const {return 323;};
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

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 324; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) rankingrewardgroup_RecordPtr // : DrRecordPtr
	{
		rankingrewardgroup_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}