/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct content_quota_Record : DrEl
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
__int64 min_value;
__int64 max_value;
__int16 version;
__int8 target_type;
char Pad0[1];
wchar_t* expiration_time;
__int8 charge_interval;
__int8 charge_day_of_week;
__int8 charge_time;
char Pad1[1];
__int64 charge_amount_per_interval;
bool consume_key_record;
char Pad2[3];
Data::TableRef consume_order[4];
int consume_order_tableId(){return 66;};

		static TableVersion Version() { return TableVersion(5, 1); }
		static __int16 TableId() { return 66; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) content_quota_RecordPtr // : DrRecordPtr
	{
		content_quota_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::content_quota_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}