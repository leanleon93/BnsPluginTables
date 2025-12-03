/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct effect_particle_socket_Record : effect_Record
	{
	public:
		char Pad_sub_0[2];
wchar_t* effect_particle;
wchar_t* effect_particle2;
wchar_t* effect_particle3;
wchar_t* effect_particle4;
wchar_t* effect_particle5;
float effect_particle_followup_time_min;
float effect_particle_followup_time_max;
wchar_t* spawn_show;
wchar_t* spawn_show2;
wchar_t* spawn_show3;
wchar_t* spawn_show4;
wchar_t* spawn_show5;
wchar_t* despawn_show;
wchar_t* despawn_show2;
wchar_t* despawn_show3;
wchar_t* despawn_show4;
wchar_t* despawn_show5;

		static __int32 SubType() { return 981; }
	};
#pragma pack(pop)
}