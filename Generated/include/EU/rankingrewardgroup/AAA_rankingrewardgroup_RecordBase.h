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
__int32 reward_group_bottom[20];
BnsTables::Shared::TableRef reward_data[20];
int reward_data_tableId(){return 305;};
wchar_t* default_job_ranking_imageset_large;
wchar_t* default_job_ranking_imageset;
wchar_t* job_ranking_imageset_large[20];
wchar_t* job_ranking_imageset[20];
wchar_t* default_total_ranking_imageset_large;
wchar_t* default_total_ranking_imageset;
wchar_t* total_ranking_imageset_large[20];
wchar_t* total_ranking_imageset[20];
wchar_t* ranking_buff_imageset[20];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 306; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) rankingrewardgroup_RecordPtr // : DrRecordPtr
	{
		rankingrewardgroup_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::rankingrewardgroup_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}