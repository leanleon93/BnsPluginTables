/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_customizingpreview_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct customizingpreview_silhouette_Record : customizingpreview_Record
	{
	public:
		__int32 silhouette_designer_preset_index;
signed char silhouette_race;
signed char silhouette_sex;
char Pad_sub_0[2];
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 184;};
__int16 icon_index;
char Pad_sub_1[2];
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 427;};

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}