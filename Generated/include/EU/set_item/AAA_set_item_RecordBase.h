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
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef count_1_effect[2];
int count_1_effect_tableId(){return 111;};
BnsTables::Shared::TableRef count_2_effect[2];
int count_2_effect_tableId(){return 111;};
BnsTables::Shared::TableRef count_3_effect[2];
int count_3_effect_tableId(){return 111;};
BnsTables::Shared::TableRef count_4_effect[2];
int count_4_effect_tableId(){return 111;};
BnsTables::Shared::TableRef count_5_effect[2];
int count_5_effect_tableId(){return 111;};
BnsTables::Shared::TableRef count_6_effect[2];
int count_6_effect_tableId(){return 111;};
BnsTables::Shared::TableRef count_7_effect[2];
int count_7_effect_tableId(){return 111;};
BnsTables::Shared::TableRef count_8_effect[2];
int count_8_effect_tableId(){return 111;};
BnsTables::Shared::TableRef count_9_effect[2];
int count_9_effect_tableId(){return 111;};
BnsTables::Shared::TableRef count_10_effect[2];
int count_10_effect_tableId(){return 111;};
BnsTables::Shared::TableRef count_1_skill_modify_info_group[10];
int count_1_skill_modify_info_group_tableId(){return 340;};
BnsTables::Shared::TableRef count_2_skill_modify_info_group[10];
int count_2_skill_modify_info_group_tableId(){return 340;};
BnsTables::Shared::TableRef count_3_skill_modify_info_group[10];
int count_3_skill_modify_info_group_tableId(){return 340;};
BnsTables::Shared::TableRef count_4_skill_modify_info_group[10];
int count_4_skill_modify_info_group_tableId(){return 340;};
BnsTables::Shared::TableRef count_5_skill_modify_info_group[10];
int count_5_skill_modify_info_group_tableId(){return 340;};
BnsTables::Shared::TableRef count_6_skill_modify_info_group[10];
int count_6_skill_modify_info_group_tableId(){return 340;};
BnsTables::Shared::TableRef count_7_skill_modify_info_group[10];
int count_7_skill_modify_info_group_tableId(){return 340;};
BnsTables::Shared::TableRef count_8_skill_modify_info_group[10];
int count_8_skill_modify_info_group_tableId(){return 340;};
BnsTables::Shared::TableRef count_9_skill_modify_info_group[10];
int count_9_skill_modify_info_group_tableId(){return 340;};
BnsTables::Shared::TableRef count_10_skill_modify_info_group[10];
int count_10_skill_modify_info_group_tableId(){return 340;};
bool count_1_tooltip[2];
bool count_2_tooltip[2];
bool count_3_tooltip[2];
bool count_4_tooltip[2];
bool count_5_tooltip[2];
bool count_6_tooltip[2];
bool count_7_tooltip[2];
bool count_8_tooltip[2];
bool count_9_tooltip[2];
bool count_10_tooltip[2];
BnsTables::Shared::TableRef count_1_talksocial[8];
int count_1_talksocial_tableId(){return 399;};
BnsTables::Shared::TableRef count_2_talksocial[8];
int count_2_talksocial_tableId(){return 399;};
BnsTables::Shared::TableRef count_3_talksocial[8];
int count_3_talksocial_tableId(){return 399;};
BnsTables::Shared::TableRef count_4_talksocial[8];
int count_4_talksocial_tableId(){return 399;};
BnsTables::Shared::TableRef count_5_talksocial[8];
int count_5_talksocial_tableId(){return 399;};
BnsTables::Shared::TableRef count_6_talksocial[8];
int count_6_talksocial_tableId(){return 399;};
BnsTables::Shared::TableRef count_7_talksocial[8];
int count_7_talksocial_tableId(){return 399;};
BnsTables::Shared::TableRef count_8_talksocial[8];
int count_8_talksocial_tableId(){return 399;};
BnsTables::Shared::TableRef count_9_talksocial[8];
int count_9_talksocial_tableId(){return 399;};
BnsTables::Shared::TableRef count_10_talksocial[8];
int count_10_talksocial_tableId(){return 399;};
BnsTables::Shared::TableRef count_1_skill_skin;
int count_1_skill_skin_tableId(){return 344;};
BnsTables::Shared::TableRef count_2_skill_skin;
int count_2_skill_skin_tableId(){return 344;};
BnsTables::Shared::TableRef count_3_skill_skin;
int count_3_skill_skin_tableId(){return 344;};
BnsTables::Shared::TableRef count_4_skill_skin;
int count_4_skill_skin_tableId(){return 344;};
BnsTables::Shared::TableRef count_5_skill_skin;
int count_5_skill_skin_tableId(){return 344;};
BnsTables::Shared::TableRef count_6_skill_skin;
int count_6_skill_skin_tableId(){return 344;};
BnsTables::Shared::TableRef count_7_skill_skin;
int count_7_skill_skin_tableId(){return 344;};
BnsTables::Shared::TableRef count_8_skill_skin;
int count_8_skill_skin_tableId(){return 344;};
BnsTables::Shared::TableRef count_9_skill_skin;
int count_9_skill_skin_tableId(){return 344;};
BnsTables::Shared::TableRef count_10_skill_skin;
int count_10_skill_skin_tableId(){return 344;};
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 405;};
BnsTables::Shared::TableRef slot_name[10];
int slot_name_tableId(){return 405;};
BnsTables::Shared::IconRef slot_tag_icon[10];
__int8 slot_equip_type[10];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 19); }
		static __int16 TableId() { return 322; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) set_item_RecordPtr // : DrRecordPtr
	{
		set_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::set_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}