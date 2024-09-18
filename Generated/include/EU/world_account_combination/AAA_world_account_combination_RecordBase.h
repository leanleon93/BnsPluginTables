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
__int8 item_type;
char Pad0[3];
BnsTables::Shared::TableRef material_group;
int material_group_tableId(){return 196;};
BnsTables::Shared::TableRef material_group_name;
int material_group_name_tableId(){return 405;};
BnsTables::Shared::TableRef world_account_combination_cost_group;
int world_account_combination_cost_group_tableId(){return 76;};
BnsTables::Shared::TableRef reward_group_name;
int reward_group_name_tableId(){return 405;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 434; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_account_combination_RecordPtr // : DrRecordPtr
	{
		world_account_combination_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::world_account_combination_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}