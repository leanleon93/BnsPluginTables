/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct soulmaskset_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 soul_mask_id_1;
__int8 soul_mask_id_2;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 run_speed;
bool use_vehicle;
__int8 soulmask_type;
wchar_t* kun_mesh;
wchar_t* gon_male_mesh;
wchar_t* gon_female_mesh;
wchar_t* lyn_male_mesh;
wchar_t* lyn_female_mesh;
wchar_t* jin_male_mesh;
wchar_t* jin_female_mesh;
wchar_t* kun_mesh_col[3];
wchar_t* gon_male_mesh_col[3];
wchar_t* gon_female_mesh_col[3];
wchar_t* lyn_male_mesh_col[3];
wchar_t* lyn_female_mesh_col[3];
wchar_t* jin_male_mesh_col[3];
wchar_t* jin_female_mesh_col[3];
wchar_t* kun_accessory_mesh;
wchar_t* gon_male_accessory_mesh;
wchar_t* gon_female_accessory_mesh;
wchar_t* lyn_male_accessory_mesh;
wchar_t* lyn_female_accessory_mesh;
wchar_t* jin_male_accessory_mesh;
wchar_t* jin_female_accessory_mesh;
wchar_t* kun_accessory_mesh_col[3];
wchar_t* gon_male_accessory_mesh_col[3];
wchar_t* gon_female_accessory_mesh_col[3];
wchar_t* lyn_male_accessory_mesh_col[3];
wchar_t* lyn_female_accessory_mesh_col[3];
wchar_t* jin_male_accessory_mesh_col[3];
wchar_t* jin_female_accessory_mesh_col[3];
bool is_accessory_skel_hair;
char Pad0[3];
Data::TableRef context_script;
int context_script_tableId(){return 74;};
Data::TableRef transform_appearance;
int transform_appearance_tableId(){return 84;};
wchar_t* transform_animset;
Data::TableRef transform_equip_hand_appearance;
int transform_equip_hand_appearance_tableId(){return 189;};
__int8 transform_job;
__int8 transform_weapon_type;
__int8 transform_stance;
bool ui_show_job_target_indicator;
bool ui_show_job_style_gauge;
char Pad1[3];
Data::TableRef transform_appearance_jin;
int transform_appearance_jin_tableId(){return 84;};
Data::TableRef transform_appearance_gon;
int transform_appearance_gon_tableId(){return 84;};
Data::TableRef transform_appearance_kun;
int transform_appearance_kun_tableId(){return 84;};
bool is_race_transform_appearance;
bool is_use_grocery;
bool is_use_equiped_skill;
bool is_show_pet;
bool is_use_env;
bool is_use_field_item;
bool hide_hair;

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 374; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soulmaskset_RecordPtr // : DrRecordPtr
	{
		soulmaskset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soulmaskset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}