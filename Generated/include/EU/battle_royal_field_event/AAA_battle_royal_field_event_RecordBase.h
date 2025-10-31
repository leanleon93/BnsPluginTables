/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct battle_royal_field_event_Record : BnsTables::Shared::DrEl
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
__int32 default_event_area_radius;
__int32 notice_time[10];
__int32 notice_time_Size() const {return 10;};
__int32 start_time[10];
__int32 start_time_Size() const {return 10;};
__int32 duration[10];
__int32 duration_Size() const {return 10;};
__int32 toxic_event_area_radius[10];
__int32 toxic_event_area_radius_Size() const {return 10;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 35; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battle_royal_field_event_RecordPtr // : DrRecordPtr
	{
		battle_royal_field_event_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}