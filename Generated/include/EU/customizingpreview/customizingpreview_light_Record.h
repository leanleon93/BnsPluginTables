/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_customizingpreview_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct customizingpreview_light_Record : customizingpreview_Record
	{
	public:
		BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 188;};
__int16 icon_index;
__int16 light_index;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}