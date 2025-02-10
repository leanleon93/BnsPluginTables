/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_customizingpreview_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct customizingpreview_face_look_Record : customizingpreview_Record
	{
	public:
		wchar_t* face_look_showname;
__int32 face_look_show_duration;
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 183;};
__int16 icon_index;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}