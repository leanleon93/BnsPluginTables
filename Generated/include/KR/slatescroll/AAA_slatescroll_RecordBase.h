/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct slatescroll_Record : BnsTables::Shared::DrEl
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
		wchar_t* alias;
BnsTables::Shared::TableRef ingredient_item[5];
__int32 ingredient_item_Size() const {return 5;};
int ingredient_item_tableId() const {return 203;};
__int16 ingredient_count[5];
__int32 ingredient_count_Size() const {return 5;};
char Pad0[2];
__int32 ingredient_money;
BnsTables::Shared::TableRef secondary_cash;
int secondary_cash_tableId() const {return 203;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 396; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) slatescroll_RecordPtr // : DrRecordPtr
	{
		slatescroll_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}