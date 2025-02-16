/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct market_targeted_sale_income_tax_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 tax;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 257; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) market_targeted_sale_income_tax_RecordPtr // : DrRecordPtr
	{
		market_targeted_sale_income_tax_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}