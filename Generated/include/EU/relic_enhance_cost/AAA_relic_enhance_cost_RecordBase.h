/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct relic_enhance_cost_Record : BnsTables::Shared::DrEl
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
__int32 enhance_money;
BnsTables::Shared::TableRef enhance_required_item[4];
__int32 enhance_required_item_Size() const {return 4;};
int enhance_required_item_tableId() const {return 198;};
__int16 enhance_required_item_count[4];
__int32 enhance_required_item_count_Size() const {return 4;};
bool enhance_reset_enable;
char Pad0[3];
__int32 enhance_reset_money;
BnsTables::Shared::TableRef enhance_reset_required_item[4];
__int32 enhance_reset_required_item_Size() const {return 4;};
int enhance_reset_required_item_tableId() const {return 198;};
__int16 enhance_reset_required_item_count[4];
__int32 enhance_reset_required_item_count_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 326; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) relic_enhance_cost_RecordPtr // : DrRecordPtr
	{
		relic_enhance_cost_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}