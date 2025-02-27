/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct itemspirit_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef main_ingredient;
int main_ingredient_tableId() const {return 197;};
signed char applicable_part[4];
__int32 applicable_part_Size() const {return 4;};
bool use_random_ability_value;
signed char success_probability;
char Pad0[2];
__int32 money_cost;
BnsTables::Shared::TableRef distribution_type;
int distribution_type_tableId() const {return 309;};
BnsTables::Shared::TableRef fixed_ingredient[8];
__int32 fixed_ingredient_Size() const {return 8;};
int fixed_ingredient_tableId() const {return 197;};
__int16 fixed_ingredient_stack_count[8];
__int32 fixed_ingredient_stack_count_Size() const {return 8;};
signed char attach_ability[10];
__int32 attach_ability_Size() const {return 10;};
signed char attach_ability_total_count;
char Pad1[1];
__int32 ability_min[10];
__int32 ability_min_Size() const {return 10;};
__int32 ability_max[10];
__int32 ability_max_Size() const {return 10;};
__int32 once_attach_ability_min[10];
__int32 once_attach_ability_min_Size() const {return 10;};
__int32 once_attach_ability_max[10];
__int32 once_attach_ability_max_Size() const {return 10;};
__int16 attach_ability_weight[10];
__int32 attach_ability_weight_Size() const {return 10;};
signed char warning;
bool use_random_ability_value_select;
char Pad2[2];
__int32 select_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 8); }
		static __int16 TableId() { return 219; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemspirit_RecordPtr // : DrRecordPtr
	{
		itemspirit_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}