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
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef ingredient_item[5];
int ingredient_item_tableId(){return 195;};
__int16 ingredient_count[5];
char Pad0[2];
__int32 ingredient_money;
BnsTables::Shared::TableRef secondary_cash;
int secondary_cash_tableId(){return 195;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 378; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) slatescroll_RecordPtr // : DrRecordPtr
	{
		slatescroll_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::slatescroll_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}