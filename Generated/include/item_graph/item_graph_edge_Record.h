/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_graph_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct item_graph_edge_Record : item_graph_Record
	{
	public:
		__int8 edge_type;
__int8 attribute_group;
__int8 seed_item_sub_group;
char Pad_sub_0[1];
Data::TableRef feed_item;
int feed_item_tableId(){return 189;};
Data::TableRef feed_recipe;
int feed_recipe_tableId(){return 212;};
Data::TableRef start_item;
int start_item_tableId(){return 189;};
__int8 start_orientation;
char Pad_sub_1[3];
Data::TableRef end_item;
int end_item_tableId(){return 189;};
__int8 end_orientation;
__int8 success_probability;
bool has_arrow;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}