/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class zoneevent_RecordSubType : __int32
    {
		zoneevent_record_sub_faction_kill_count = 0,
		zoneevent_record_sub_kill_npc = 1,
		zoneevent_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct zoneevent_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;
__int8 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* start_kismet_name;
wchar_t* end_kismet_name;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 448; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneevent_RecordPtr // : DrRecordPtr
	{
		zoneevent_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneevent_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}