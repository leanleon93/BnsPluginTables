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
__int64 start_time;
__int64 end_time;
signed char job[30];
__int32 job_Size() const {return 30;};
__int16 quota_mon[30];
__int32 quota_mon_Size() const {return 30;};
__int16 quota_tue[30];
__int32 quota_tue_Size() const {return 30;};
__int16 quota_wed[30];
__int32 quota_wed_Size() const {return 30;};
__int16 quota_thu[30];
__int32 quota_thu_Size() const {return 30;};
__int16 quota_fri[30];
__int32 quota_fri_Size() const {return 30;};
__int16 quota_sat[30];
__int32 quota_sat_Size() const {return 30;};
__int16 quota_sun[30];
__int32 quota_sun_Size() const {return 30;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 232; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_quota_RecordPtr // : DrRecordPtr
	{
		job_change_quota_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}