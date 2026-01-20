/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct user_reporting_system_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char title_category;
signed char report_scene_code;
__int16 report_reason_code;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef title_category_name;
int title_category_name_tableId() const {return 438;};
BnsTables::Shared::TableRef report_scene_name;
int report_scene_name_tableId() const {return 438;};
BnsTables::Shared::TableRef report_reason_name;
int report_reason_name_tableId() const {return 438;};
signed char sort;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 451; }
		static __int32 SubType() { return -1; }
		enum class title_category {
			user = 0,
			guild = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) user_reporting_system_RecordPtr // : DrRecordPtr
	{
		user_reporting_system_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}