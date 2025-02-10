/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct auto_combat_skill_cast_condition_Record : BnsTables::Shared::DrEl
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
wchar_t* name;
signed char check_hp_percent_target_type;
char Pad0[1];
__int16 check_hp_percent;
signed char check_hp_percent_op;
char Pad1[1];
__int16 check_caster_success_effect_flag[4];
__int32 check_caster_success_effect_flag_Size() const {return 4;};
signed char check_caster_success_effect_flag_op;
char Pad2[1];
__int16 check_caster_fail_effect_flag[4];
__int32 check_caster_fail_effect_flag_Size() const {return 4;};
signed char check_caster_fail_effect_flag_op;
char Pad3[1];
__int16 check_caster_success_effect_attribute[4];
__int32 check_caster_success_effect_attribute_Size() const {return 4;};
signed char check_caster_success_effect_attribute_op;
char Pad4[1];
__int16 check_caster_fail_effect_attribute[4];
__int32 check_caster_fail_effect_attribute_Size() const {return 4;};
signed char check_caster_fail_effect_attribute_op;
char Pad5[1];
__int16 check_target_success_effect_flag[4];
__int32 check_target_success_effect_flag_Size() const {return 4;};
signed char check_target_success_effect_flag_op;
char Pad6[1];
__int16 check_target_fail_effect_flag[4];
__int32 check_target_fail_effect_flag_Size() const {return 4;};
signed char check_target_fail_effect_flag_op;
char Pad7[1];
__int16 check_target_success_effect_attribute[4];
__int32 check_target_success_effect_attribute_Size() const {return 4;};
signed char check_target_success_effect_attribute_op;
char Pad8[1];
__int16 check_target_fail_effect_attribute[4];
__int32 check_target_fail_effect_attribute_Size() const {return 4;};
signed char check_target_fail_effect_attribute_op;
char Pad9[1];
__int16 check_summoned_success_effect_flag[4];
__int32 check_summoned_success_effect_flag_Size() const {return 4;};
signed char check_summoned_success_effect_flag_op;
char Pad10[1];
__int16 check_summoned_fail_effect_flag[4];
__int32 check_summoned_fail_effect_flag_Size() const {return 4;};
signed char check_summoned_fail_effect_flag_op;
char Pad11[1];
__int16 check_summoned_success_effect_attribute[4];
__int32 check_summoned_success_effect_attribute_Size() const {return 4;};
signed char check_summoned_success_effect_attribute_op;
char Pad12[1];
__int16 check_summoned_fail_effect_attribute[4];
__int32 check_summoned_fail_effect_attribute_Size() const {return 4;};
signed char check_summoned_fail_effect_attribute_op;
char Pad13[3];
__int32 check_caster_recycle_skill_id[4];
__int32 check_caster_recycle_skill_id_Size() const {return 4;};
signed char check_caster_recycle_skill_variation_id[4];
__int32 check_caster_recycle_skill_variation_id_Size() const {return 4;};
signed char check_caster_recycle_skill_op;
signed char check_target_npc_grade2;
signed char check_target_npc_grade2_op;
signed char check_target_distance_target_type;
__int16 check_target_distance;
signed char check_target_distance_op;
signed char check_around_target_type;
__int16 check_around_enemy_count;
bool check_around_enemy_targeting;
char Pad14[1];
__int16 check_around_range;
signed char check_around_op;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 22; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) auto_combat_skill_cast_condition_RecordPtr // : DrRecordPtr
	{
		auto_combat_skill_cast_condition_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}