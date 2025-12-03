/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_customizingpreview_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct customizingpreview_costume_Record : customizingpreview_Record
	{
	public:
		BnsTables::Shared::TableRef costume_item;
int costume_item_tableId() const {return 203;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}