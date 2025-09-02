/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct set_item_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
char Pad0[3];
BnsTables::Shared::TableRef count_1_effect[2];
__int32 count_1_effect_Size() const {return 2;};
int count_1_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef count_2_effect[2];
__int32 count_2_effect_Size() const {return 2;};
int count_2_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef count_3_effect[2];
__int32 count_3_effect_Size() const {return 2;};
int count_3_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef count_4_effect[2];
__int32 count_4_effect_Size() const {return 2;};
int count_4_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef count_5_effect[2];
__int32 count_5_effect_Size() const {return 2;};
int count_5_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef count_6_effect[2];
__int32 count_6_effect_Size() const {return 2;};
int count_6_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef count_7_effect[2];
__int32 count_7_effect_Size() const {return 2;};
int count_7_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef count_8_effect[2];
__int32 count_8_effect_Size() const {return 2;};
int count_8_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef count_9_effect[2];
__int32 count_9_effect_Size() const {return 2;};
int count_9_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef count_10_effect[2];
__int32 count_10_effect_Size() const {return 2;};
int count_10_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef count_1_skill_modify_info_group[10];
__int32 count_1_skill_modify_info_group_Size() const {return 10;};
int count_1_skill_modify_info_group_tableId() const {return 367;};
BnsTables::Shared::TableRef count_2_skill_modify_info_group[10];
__int32 count_2_skill_modify_info_group_Size() const {return 10;};
int count_2_skill_modify_info_group_tableId() const {return 367;};
BnsTables::Shared::TableRef count_3_skill_modify_info_group[10];
__int32 count_3_skill_modify_info_group_Size() const {return 10;};
int count_3_skill_modify_info_group_tableId() const {return 367;};
BnsTables::Shared::TableRef count_4_skill_modify_info_group[10];
__int32 count_4_skill_modify_info_group_Size() const {return 10;};
int count_4_skill_modify_info_group_tableId() const {return 367;};
BnsTables::Shared::TableRef count_5_skill_modify_info_group[10];
__int32 count_5_skill_modify_info_group_Size() const {return 10;};
int count_5_skill_modify_info_group_tableId() const {return 367;};
BnsTables::Shared::TableRef count_6_skill_modify_info_group[10];
__int32 count_6_skill_modify_info_group_Size() const {return 10;};
int count_6_skill_modify_info_group_tableId() const {return 367;};
BnsTables::Shared::TableRef count_7_skill_modify_info_group[10];
__int32 count_7_skill_modify_info_group_Size() const {return 10;};
int count_7_skill_modify_info_group_tableId() const {return 367;};
BnsTables::Shared::TableRef count_8_skill_modify_info_group[10];
__int32 count_8_skill_modify_info_group_Size() const {return 10;};
int count_8_skill_modify_info_group_tableId() const {return 367;};
BnsTables::Shared::TableRef count_9_skill_modify_info_group[10];
__int32 count_9_skill_modify_info_group_Size() const {return 10;};
int count_9_skill_modify_info_group_tableId() const {return 367;};
BnsTables::Shared::TableRef count_10_skill_modify_info_group[10];
__int32 count_10_skill_modify_info_group_Size() const {return 10;};
int count_10_skill_modify_info_group_tableId() const {return 367;};
bool count_1_tooltip[2];
__int32 count_1_tooltip_Size() const {return 2;};
bool count_2_tooltip[2];
__int32 count_2_tooltip_Size() const {return 2;};
bool count_3_tooltip[2];
__int32 count_3_tooltip_Size() const {return 2;};
bool count_4_tooltip[2];
__int32 count_4_tooltip_Size() const {return 2;};
bool count_5_tooltip[2];
__int32 count_5_tooltip_Size() const {return 2;};
bool count_6_tooltip[2];
__int32 count_6_tooltip_Size() const {return 2;};
bool count_7_tooltip[2];
__int32 count_7_tooltip_Size() const {return 2;};
bool count_8_tooltip[2];
__int32 count_8_tooltip_Size() const {return 2;};
bool count_9_tooltip[2];
__int32 count_9_tooltip_Size() const {return 2;};
bool count_10_tooltip[2];
__int32 count_10_tooltip_Size() const {return 2;};
BnsTables::Shared::TableRef count_1_talksocial[8];
__int32 count_1_talksocial_Size() const {return 8;};
int count_1_talksocial_tableId() const {return 428;};
BnsTables::Shared::TableRef count_2_talksocial[8];
__int32 count_2_talksocial_Size() const {return 8;};
int count_2_talksocial_tableId() const {return 428;};
BnsTables::Shared::TableRef count_3_talksocial[8];
__int32 count_3_talksocial_Size() const {return 8;};
int count_3_talksocial_tableId() const {return 428;};
BnsTables::Shared::TableRef count_4_talksocial[8];
__int32 count_4_talksocial_Size() const {return 8;};
int count_4_talksocial_tableId() const {return 428;};
BnsTables::Shared::TableRef count_5_talksocial[8];
__int32 count_5_talksocial_Size() const {return 8;};
int count_5_talksocial_tableId() const {return 428;};
BnsTables::Shared::TableRef count_6_talksocial[8];
__int32 count_6_talksocial_Size() const {return 8;};
int count_6_talksocial_tableId() const {return 428;};
BnsTables::Shared::TableRef count_7_talksocial[8];
__int32 count_7_talksocial_Size() const {return 8;};
int count_7_talksocial_tableId() const {return 428;};
BnsTables::Shared::TableRef count_8_talksocial[8];
__int32 count_8_talksocial_Size() const {return 8;};
int count_8_talksocial_tableId() const {return 428;};
BnsTables::Shared::TableRef count_9_talksocial[8];
__int32 count_9_talksocial_Size() const {return 8;};
int count_9_talksocial_tableId() const {return 428;};
BnsTables::Shared::TableRef count_10_talksocial[8];
__int32 count_10_talksocial_Size() const {return 8;};
int count_10_talksocial_tableId() const {return 428;};
BnsTables::Shared::TableRef count_1_skill_skin;
int count_1_skill_skin_tableId() const {return 371;};
BnsTables::Shared::TableRef count_2_skill_skin;
int count_2_skill_skin_tableId() const {return 371;};
BnsTables::Shared::TableRef count_3_skill_skin;
int count_3_skill_skin_tableId() const {return 371;};
BnsTables::Shared::TableRef count_4_skill_skin;
int count_4_skill_skin_tableId() const {return 371;};
BnsTables::Shared::TableRef count_5_skill_skin;
int count_5_skill_skin_tableId() const {return 371;};
BnsTables::Shared::TableRef count_6_skill_skin;
int count_6_skill_skin_tableId() const {return 371;};
BnsTables::Shared::TableRef count_7_skill_skin;
int count_7_skill_skin_tableId() const {return 371;};
BnsTables::Shared::TableRef count_8_skill_skin;
int count_8_skill_skin_tableId() const {return 371;};
BnsTables::Shared::TableRef count_9_skill_skin;
int count_9_skill_skin_tableId() const {return 371;};
BnsTables::Shared::TableRef count_10_skill_skin;
int count_10_skill_skin_tableId() const {return 371;};
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 434;};
BnsTables::Shared::TableRef slot_name[10];
__int32 slot_name_Size() const {return 10;};
int slot_name_tableId() const {return 434;};
BnsTables::Shared::IconRef slot_tag_icon[10];
__int32 slot_tag_icon_Size() const {return 10;};
signed char slot_equip_type[10];
__int32 slot_equip_type_Size() const {return 10;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 19); }
		static __int16 TableId() { return 347; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) set_item_RecordPtr // : DrRecordPtr
	{
		set_item_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}