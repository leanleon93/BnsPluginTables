/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_graph_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct item_graph_edge_Record : item_graph_Record
	{
	public:
		signed char edge_type;
signed char attribute_group;
signed char seed_item_sub_group;
char Pad_sub_0[1];
BnsTables::Shared::TableRef feed_item;
int feed_item_tableId() const {return 203;};
BnsTables::Shared::TableRef feed_recipe;
int feed_recipe_tableId() const {return 227;};
BnsTables::Shared::TableRef start_item;
int start_item_tableId() const {return 203;};
signed char start_orientation;
char Pad_sub_1[3];
BnsTables::Shared::TableRef end_item;
int end_item_tableId() const {return 203;};
signed char end_orientation;
signed char success_probability;
bool has_arrow;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}