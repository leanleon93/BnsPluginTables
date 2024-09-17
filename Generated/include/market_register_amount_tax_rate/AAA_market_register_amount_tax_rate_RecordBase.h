/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct market_register_amount_tax_rate_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 min_amount;
__int16 max_amount;
__int16 tax_rate;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 243; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) market_register_amount_tax_rate_RecordPtr // : DrRecordPtr
	{
		market_register_amount_tax_rate_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::market_register_amount_tax_rate_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}