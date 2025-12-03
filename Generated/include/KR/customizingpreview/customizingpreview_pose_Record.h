/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_customizingpreview_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct customizingpreview_pose_Record : customizingpreview_Record
	{
	public:
		wchar_t* pose_showname;
__int32 pose_show_duration;
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 189;};
__int16 icon_index;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}