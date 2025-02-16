/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct soulmaskset_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char soul_mask_id_1;
signed char soul_mask_id_2;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 run_speed;
bool use_vehicle;
signed char soulmask_type;
wchar_t* kun_mesh;
wchar_t* gon_male_mesh;
wchar_t* gon_female_mesh;
wchar_t* lyn_male_mesh;
wchar_t* lyn_female_mesh;
wchar_t* jin_male_mesh;
wchar_t* jin_female_mesh;
wchar_t* kun_mesh_col[3];
__int32 kun_mesh_col_Size() const {return 3;};
wchar_t* gon_male_mesh_col[3];
__int32 gon_male_mesh_col_Size() const {return 3;};
wchar_t* gon_female_mesh_col[3];
__int32 gon_female_mesh_col_Size() const {return 3;};
wchar_t* lyn_male_mesh_col[3];
__int32 lyn_male_mesh_col_Size() const {return 3;};
wchar_t* lyn_female_mesh_col[3];
__int32 lyn_female_mesh_col_Size() const {return 3;};
wchar_t* jin_male_mesh_col[3];
__int32 jin_male_mesh_col_Size() const {return 3;};
wchar_t* jin_female_mesh_col[3];
__int32 jin_female_mesh_col_Size() const {return 3;};
wchar_t* kun_accessory_mesh;
wchar_t* gon_male_accessory_mesh;
wchar_t* gon_female_accessory_mesh;
wchar_t* lyn_male_accessory_mesh;
wchar_t* lyn_female_accessory_mesh;
wchar_t* jin_male_accessory_mesh;
wchar_t* jin_female_accessory_mesh;
wchar_t* kun_accessory_mesh_col[3];
__int32 kun_accessory_mesh_col_Size() const {return 3;};
wchar_t* gon_male_accessory_mesh_col[3];
__int32 gon_male_accessory_mesh_col_Size() const {return 3;};
wchar_t* gon_female_accessory_mesh_col[3];
__int32 gon_female_accessory_mesh_col_Size() const {return 3;};
wchar_t* lyn_male_accessory_mesh_col[3];
__int32 lyn_male_accessory_mesh_col_Size() const {return 3;};
wchar_t* lyn_female_accessory_mesh_col[3];
__int32 lyn_female_accessory_mesh_col_Size() const {return 3;};
wchar_t* jin_male_accessory_mesh_col[3];
__int32 jin_male_accessory_mesh_col_Size() const {return 3;};
wchar_t* jin_female_accessory_mesh_col[3];
__int32 jin_female_accessory_mesh_col_Size() const {return 3;};
bool is_accessory_skel_hair;
char Pad0[3];
BnsTables::Shared::TableRef context_script;
int context_script_tableId() const {return 75;};
BnsTables::Shared::TableRef transform_appearance;
int transform_appearance_tableId() const {return 85;};
wchar_t* transform_animset;
BnsTables::Shared::TableRef transform_equip_hand_appearance;
int transform_equip_hand_appearance_tableId() const {return 198;};
signed char transform_job;
signed char transform_weapon_type;
signed char transform_stance;
bool ui_show_job_target_indicator;
bool ui_show_job_style_gauge;
char Pad1[3];
BnsTables::Shared::TableRef transform_appearance_jin;
int transform_appearance_jin_tableId() const {return 85;};
BnsTables::Shared::TableRef transform_appearance_gon;
int transform_appearance_gon_tableId() const {return 85;};
BnsTables::Shared::TableRef transform_appearance_kun;
int transform_appearance_kun_tableId() const {return 85;};
bool is_race_transform_appearance;
bool is_use_grocery;
bool is_use_equiped_skill;
bool is_show_pet;
bool is_use_env;
bool is_use_field_item;
bool hide_hair;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 396; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soulmaskset_RecordPtr // : DrRecordPtr
	{
		soulmaskset_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}