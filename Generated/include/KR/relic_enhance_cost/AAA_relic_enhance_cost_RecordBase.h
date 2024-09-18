/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct relic_enhance_cost_Record : BnsTables::Shared::DrEl
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
__int32 enhance_money;
BnsTables::Shared::TableRef enhance_required_item[4];
int enhance_required_item_tableId(){return 195;};
__int16 enhance_required_item_count[4];
bool enhance_reset_enable;
char Pad0[3];
__int32 enhance_reset_money;
BnsTables::Shared::TableRef enhance_reset_required_item[4];
int enhance_reset_required_item_tableId(){return 195;};
__int16 enhance_reset_required_item_count[4];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 320; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) relic_enhance_cost_RecordPtr // : DrRecordPtr
	{
		relic_enhance_cost_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::relic_enhance_cost_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}