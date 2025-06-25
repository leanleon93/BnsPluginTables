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
__int32 seed_item_Size() const {return 42;};
int seed_item_tableId() const {return 202;};
BnsTables::Shared::TableRef seed_item_group;
int seed_item_group_tableId() const {return 208;};
signed char seed_item_sub_group[42];
__int32 seed_item_sub_group_Size() const {return 42;};
signed char node_type;
signed char attribute_group;
signed char item_equip_type;
signed char growth_category;
__int16 row;
__int16 column;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}