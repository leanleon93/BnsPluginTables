/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_graph_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct item_graph_seed_Record : item_graph_Record
	{
	public:
		BnsTables::Shared::TableRef seed_item[42];
int seed_item_tableId(){return 195;};
BnsTables::Shared::TableRef seed_item_group;
int seed_item_group_tableId(){return 201;};
__int8 seed_item_sub_group[42];
__int8 node_type;
__int8 attribute_group;
__int8 item_equip_type;
__int8 growth_category;
__int16 row;
__int16 column;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}