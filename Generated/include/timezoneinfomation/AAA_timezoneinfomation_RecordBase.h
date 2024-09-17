/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct timezoneinfomation_Record : DrEl
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
__int32 bias_minute;
Data::TableRef display_name;
int display_name_tableId(){return 405;};
__int8 sort_no;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 407; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) timezoneinfomation_RecordPtr // : DrRecordPtr
	{
		timezoneinfomation_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::timezoneinfomation_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}