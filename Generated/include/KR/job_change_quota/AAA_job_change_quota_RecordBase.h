/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct job_change_quota_Record : BnsTables::Shared::DrEl
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
__int16 world_cluster_id;
char Pad0[2];
wchar_t* start_time;
wchar_t* end_time;
__int8 job[30];
__int16 quota_mon[30];
__int16 quota_tue[30];
__int16 quota_wed[30];
__int16 quota_thu[30];
__int16 quota_fri[30];
__int16 quota_sat[30];
__int16 quota_sun[30];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 229; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_quota_RecordPtr // : DrRecordPtr
	{
		job_change_quota_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_change_quota_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}