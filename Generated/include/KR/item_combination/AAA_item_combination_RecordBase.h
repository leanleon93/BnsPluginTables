/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_combination_Record : BnsTables::Shared::DrEl
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
signed char item_type;
char Pad0[3];
__int32 count;
BnsTables::Shared::TableRef material_group;
int material_group_tableId() const {return 209;};
BnsTables::Shared::TableRef material_group_name;
int material_group_name_tableId() const {return 435;};
__int16 great_success_probability;
char Pad1[2];
BnsTables::Shared::TableRef great_success_item_group;
int great_success_item_group_tableId() const {return 209;};
__int16 success_probability;
char Pad2[2];
BnsTables::Shared::TableRef success_item_group;
int success_item_group_tableId() const {return 209;};
__int16 fail_probability;
char Pad3[2];
BnsTables::Shared::TableRef fail_item_group;
int fail_item_group_tableId() const {return 209;};
__int16 big_fail_probability;
char Pad4[2];
BnsTables::Shared::TableRef big_fail_item_group;
int big_fail_item_group_tableId() const {return 209;};
BnsTables::Shared::TableRef item_combination_cost_group;
int item_combination_cost_group_tableId() const {return 79;};
BnsTables::Shared::TableRef reward_group_name;
int reward_group_name_tableId() const {return 435;};
__int32 mileage_weight;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 200; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_combination_RecordPtr // : DrRecordPtr
	{
		item_combination_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}