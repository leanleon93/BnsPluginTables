/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct boast_event_improve_item_Record : boast_event_Record
	{
	public:
		char Pad_sub_0[3];
__int32 improve_id;
signed char improve_level;
signed char op_type;

		static __int32 SubType() { return 12; }
	};
#pragma pack(pop)
}