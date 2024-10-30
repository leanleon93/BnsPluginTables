/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct job_style_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;
signed char job_style;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view job_EnumValue() const {return Get_job_EnumValue(key.job);};
std::string_view job_style_EnumValue() const {return Get_job_style_EnumValue(key.job_style);};
wchar_t* alias;
wchar_t* introduce_job_style_icon;
BnsTables::Shared::TableRef introduce_job_style_name;
int introduce_job_style_name_tableId() const {return 420;};
BnsTables::Shared::TableRef introduce_job_style_play_desc;
int introduce_job_style_play_desc_tableId() const {return 420;};
BnsTables::Shared::TableRef introduce_job_style_specialization[5];
__int32 introduce_job_style_specialization_Size() const {return 5;};
int introduce_job_style_specialization_tableId() const {return 233;};
BnsTables::Shared::TableRef additive_attachment;
int additive_attachment_tableId() const {return 14;};
wchar_t* combat_start_fx_show;
wchar_t* combat_end_fx_show;
wchar_t* right_weapon_particle_ref;
wchar_t* right_weapon_particle_socket;
wchar_t* left_weapon_particle_ref;
wchar_t* left_weapon_particle_socket;
wchar_t* phantom_weapon_ribbon_particle_ref;
__int16 auto_combat_attack_distance;
__int16 auto_combat_converted_distance_attacker_enemy;
__int16 auto_combat_converted_distance_pouch;
__int16 auto_combat_converted_distance_enemy;
bool enable_job_style_gauge_ui;
signed char job_style_gauge_unit;
bool job_style_gauge_full_charge_icon;
char Pad0[1];
wchar_t* job_style_gauge_full_charge_particle_ref;
float job_style_gauge_full_charge_particle_scale;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 15); }
		static __int16 TableId() { return 232; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_style_RecordPtr // : DrRecordPtr
	{
		job_style_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}