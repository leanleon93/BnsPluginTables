/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
int context_script_tableId() const {return 77;};
BnsTables::Shared::TableRef transform_appearance;
int transform_appearance_tableId() const {return 87;};
wchar_t* transform_animset;
BnsTables::Shared::TableRef transform_equip_hand_appearance;
int transform_equip_hand_appearance_tableId() const {return 202;};
signed char transform_job;
signed char transform_weapon_type;
signed char transform_stance;
bool ui_show_job_target_indicator;
bool ui_show_job_style_gauge;
char Pad1[3];
BnsTables::Shared::TableRef transform_appearance_jin;
int transform_appearance_jin_tableId() const {return 87;};
BnsTables::Shared::TableRef transform_appearance_gon;
int transform_appearance_gon_tableId() const {return 87;};
BnsTables::Shared::TableRef transform_appearance_kun;
int transform_appearance_kun_tableId() const {return 87;};
bool is_race_transform_appearance;
bool is_use_grocery;
bool is_use_equiped_skill;
bool is_show_pet;
bool is_use_env;
bool is_use_field_item;
bool hide_hair;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 404; }
		static __int32 SubType() { return -1; }
		enum class soulmask_type {
			normal = 0,
			transform = 1,
		};

		enum class transform_job {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};

		enum class transform_weapon_type {
			none = 0,
			bare_hand = 1,
			sword = 2,
			gauntlet = 3,
			aura_bangle = 4,
			pistol = 5,
			rifle = 6,
			two_handed_axe = 7,
			bow = 8,
			staff = 9,
			dagger = 10,
			pet_1 = 11,
			pet_2 = 12,
			gun = 13,
			great_sword = 14,
			long_bow = 15,
			spear = 16,
			orb = 17,
			dual_blade = 18,
			instrument = 19,
		};

		enum class transform_stance {
			stance_none = 0,
			npcgibonjase = 1,
			cheongeomse = 2,
			geomryeongse = 3,
			danta = 4,
			yeongye = 5,
			chesur = 6,
			nabdo = 7,
			gyeonggigong = 8,
			yeongigong = 9,
			ganggigong = 10,
			gweonchongmodeu = 11,
			reoncheomodeu = 12,
			pagoe = 13,
			boho = 14,
			cheorbyeog = 15,
			sohwan = 16,
			gyoran = 17,
			eunsin = 18,
			amsar = 19,
			geomsur = 20,
			eogeom = 21,
			bardo = 22,
			npcjase1 = 23,
			npcjase2 = 24,
			npcjase3 = 25,
			sohwansu_follow = 26,
			sohwansu_command_1 = 27,
			sohwansu_flying = 28,
			jusur = 29,
			gangrim = 30,
			yugweon = 31,
			gigong = 32,
			naengjeong = 33,
			gwanggi = 34,
			janggung = 35,
			jeongryeonggung = 36,
			jjireugi = 37,
			begi = 38,
			cheongroe = 39,
			hyeorroe = 40,
			eogeomse = 41,
			jeongsu = 42,
			yeogsu = 43,
			hansonyeogsu = 44,
			ganiyeonju = 45,
			upeo = 46,
			yeonju = 47,
			ssangweor = 48,
			noesin = 49,
			chimsig = 50,
			yeomje = 51,
			npcjusijase1 = 52,
			npcjusijase2 = 53,
			npcjusijase3 = 54,
		};
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