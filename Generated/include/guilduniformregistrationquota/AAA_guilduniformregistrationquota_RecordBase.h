/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct guilduniformregistrationquota_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 increase_step;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef payment_item;
int payment_item_tableId(){return 189;};
__int32 payment_item_count;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 174; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformregistrationquota_RecordPtr // : DrRecordPtr
	{
		guilduniformregistrationquota_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guilduniformregistrationquota_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}