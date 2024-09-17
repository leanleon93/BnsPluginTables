/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct boast_event_improve_item_Record : boast_event_Record
	{
	public:
		char Pad_sub_0[3];
__int32 improve_id;
__int8 improve_level;
__int8 op_type;

		static __int32 SubType() { return 12; }
	};
#pragma pack(pop)
}