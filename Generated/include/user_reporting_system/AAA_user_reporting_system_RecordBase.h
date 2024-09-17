/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct user_reporting_system_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 title_category;
__int8 report_scene_code;
__int16 report_reason_code;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef title_category_name;
int title_category_name_tableId(){return 405;};
Data::TableRef report_scene_name;
int report_scene_name_tableId(){return 405;};
Data::TableRef report_reason_name;
int report_reason_name_tableId(){return 405;};
__int8 sort;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 418; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) user_reporting_system_RecordPtr // : DrRecordPtr
	{
		user_reporting_system_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::user_reporting_system_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}