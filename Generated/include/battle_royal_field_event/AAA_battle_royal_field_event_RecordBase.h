/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct battle_royal_field_event_Record : DrEl
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
__int32 start_time[10];
__int32 duration[10];
__int32 toxic_event_area_radius[10];

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 35; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battle_royal_field_event_RecordPtr // : DrRecordPtr
	{
		battle_royal_field_event_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::battle_royal_field_event_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}