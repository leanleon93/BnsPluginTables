/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct weapon_appearance_change_cost_Record : DrEl
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
		Data::TableRef cost_apply_item[2];
int cost_apply_item_tableId(){return 189;};
__int16 cost_apply_item_amount[2];
__int32 cost_apply_money;
bool cost_remove_separable;
char Pad0[3];
Data::TableRef cost_remove_item[2];
int cost_remove_item_tableId(){return 189;};
__int16 cost_remove_item_amount[2];
__int32 cost_remove_money;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 427; }
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