/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itemspirit_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef main_ingredient;
int main_ingredient_tableId(){return 195;};
__int8 applicable_part[4];
bool use_random_ability_value;
__int8 success_probability;
char Pad0[2];
__int32 money_cost;
BnsTables::Shared::TableRef distribution_type;
int distribution_type_tableId(){return 304;};
BnsTables::Shared::TableRef fixed_ingredient[8];
int fixed_ingredient_tableId(){return 195;};
__int16 fixed_ingredient_stack_count[8];
__int8 attach_ability[2];
char Pad1[2];
__int32 ability_min[2];
__int32 ability_max[2];
__int32 once_attach_ability_min[2];
__int32 once_attach_ability_max[2];
__int8 warning;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 217; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemspirit_RecordPtr // : DrRecordPtr
	{
		itemspirit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemspirit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}