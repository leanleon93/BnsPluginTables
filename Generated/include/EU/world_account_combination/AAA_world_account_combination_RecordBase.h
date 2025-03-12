/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct world_account_combination_Record : BnsTables::Shared::DrEl
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
__int32 count;
signed char item_type;
char Pad0[3];
BnsTables::Shared::TableRef material_group;
int material_group_tableId() const {return 205;};
BnsTables::Shared::TableRef material_group_name;
int material_group_name_tableId() const {return 427;};
__int16 great_success_probability;
char Pad1[2];
BnsTables::Shared::TableRef great_success_item_group;
int great_success_item_group_tableId() const {return 205;};
__int16 success_probability;
char Pad2[2];
BnsTables::Shared::TableRef success_item_group;
int success_item_group_tableId() const {return 205;};
__int16 fail_probability;
char Pad3[2];
BnsTables::Shared::TableRef fail_item_group;
int fail_item_group_tableId() const {return 205;};
__int16 big_fail_probability;
char Pad4[2];
BnsTables::Shared::TableRef big_fail_item_group;
int big_fail_item_group_tableId() const {return 205;};
BnsTables::Shared::TableRef world_account_combination_cost_group;
int world_account_combination_cost_group_tableId() const {return 77;};
BnsTables::Shared::TableRef reward_group_name;
int reward_group_name_tableId() const {return 427;};
__int32 mileage_weight;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 457; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_account_combination_RecordPtr // : DrRecordPtr
	{
		world_account_combination_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}