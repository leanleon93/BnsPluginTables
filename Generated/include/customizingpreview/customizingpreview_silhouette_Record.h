/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_customizingpreview_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct customizingpreview_silhouette_Record : customizingpreview_Record
	{
	public:
		__int32 silhouette_designer_preset_index;
__int8 silhouette_race;
__int8 silhouette_sex;
char Pad_sub_0[2];
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad_sub_1[2];
Data::TableRef desc;
int desc_tableId(){return 405;};

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}