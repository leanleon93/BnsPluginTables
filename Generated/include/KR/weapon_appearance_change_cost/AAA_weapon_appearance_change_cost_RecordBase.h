/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct weapon_appearance_change_cost_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 item_grade;
__int8 growth_efficient_level;
__int8 weapon_cost_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef cost_apply_item[2];
int cost_apply_item_tableId(){return 195;};
__int16 cost_apply_item_amount[2];
__int32 cost_apply_money;
bool cost_remove_separable;
char Pad0[3];
BnsTables::Shared::TableRef cost_remove_item[2];
int cost_remove_item_tableId(){return 195;};
__int16 cost_remove_item_amount[2];
__int32 cost_remove_money;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 442; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weapon_appearance_change_cost_RecordPtr // : DrRecordPtr
	{
		weapon_appearance_change_cost_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::weapon_appearance_change_cost_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}