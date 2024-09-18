/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skillcastcondition3_Record : BnsTables::Shared::DrEl
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
__int8 stance;
__int8 summoned_stance;
bool summoned_use_only;
__int8 summoned_dead_state;
__int8 required_weapon_type;
__int8 link_type;
__int8 link_state;
__int8 link_stage;
bool immune_caster_block_skill;
bool unnecessary_acquired;
__int8 target_type;
__int8 success_caster_combat_mode;
__int16 success_caster_flag[4];
__int8 success_caster_op;
char Pad0[1];
__int16 fail_caster_flag[4];
__int8 fail_caster_op;
char Pad1[1];
__int16 second_success_caster_flag[4];
__int8 second_success_caster_op;
__int8 first_second_success_caster_group_op;
__int16 second_fail_caster_flag[4];
__int8 second_fail_caster_op;
__int8 first_second_fail_caster_group_op;
__int16 success_caster_effect_attribute[4];
__int8 success_caster_effect_attribute_op;
char Pad2[1];
__int16 fail_caster_effect_attribute[4];
__int8 fail_caster_effect_attribute_op;
char Pad3[1];
BnsTables::Shared::TableRef success_caster_filter[2];
int success_caster_filter_tableId(){return 141;};
__int8 success_caster_filter_op;
char Pad4[3];
BnsTables::Shared::TableRef fail_caster_filter[2];
int fail_caster_filter_tableId(){return 141;};
__int8 fail_caster_filter_op;
__int8 success_target_dead_state;
__int16 success_target_flag[4];
__int8 success_target_op;
char Pad5[1];
__int16 fail_target_flag[4];
__int8 fail_target_op;
char Pad6[1];
__int16 success_target_effect_attribute[4];
__int8 success_target_effect_attribute_op;
char Pad7[1];
__int16 fail_target_effect_attribute[4];
__int8 fail_target_effect_attribute_op;
char Pad8[3];
BnsTables::Shared::TableRef success_target_filter[2];
int success_target_filter_tableId(){return 141;};
__int8 success_target_filter_op;
char Pad9[3];
BnsTables::Shared::TableRef fail_target_filter[2];
int fail_target_filter_tableId(){return 141;};
__int8 fail_target_filter_op;
bool fail_target_mount_linker;
bool fail_target_mount_linked;
bool fail_target_inhalation_linker;
bool fail_target_inhalation_linked;
bool fail_target_catch_linker;
bool fail_target_catch_linked;
char Pad10[1];
BnsTables::Shared::TableRef gather_range;
int gather_range_tableId(){return 336;};
__int16 check_style_score;
__int16 check_hp_value;
__int8 check_hp_type;
char Pad11[1];
__int16 check_sp_value[2];
__int8 check_sp_type[2];
__int16 check_summoned_hp_value;
__int8 check_summoned_hp_type;
__int8 success_caster_move_state[9];
__int8 fail_caster_move_state[9];
__int8 move_type;
char Pad12[2];
__int32 prev_combo_id[4];
__int8 prev_combo_event_type[4];
__int8 prev_combo_check_point[4];
__int16 prev_combo_result[4];
__int8 prev_combo_1_result[8];
__int8 prev_combo_2_result[8];
__int8 prev_combo_3_result[8];
__int8 prev_combo_4_result[8];
__int8 last_event_type[2];
__int16 last_event_result[2];
__int8 last_event_1_result[8];
__int8 last_event_2_result[8];
__int8 success_recycle_group[4];
__int8 success_recycle_group_id[4];
__int8 success_recycle_group_op;
__int8 fail_recycle_group[4];
__int8 fail_recycle_group_id[4];
__int8 fail_recycle_group_op;
BnsTables::Shared::TableRef soul_mask[2];
int soul_mask_tableId(){return 374;};
bool fail_soulmask_except_normal;
bool is_special_skill;
__int8 lockon_skill_type;
bool is_ground_pitch_dash_skill;
__int16 simple_context_success_caster_flag[4];
__int8 simple_context_success_caster_op;
char Pad13[1];
__int16 simple_context_fail_caster_flag[4];
__int8 simple_context_fail_caster_op;
char Pad14[1];
__int16 simple_context_success_caster_effect_attribute[4];
__int8 simple_context_success_caster_effect_attribute_op;
char Pad15[1];
__int16 simple_context_fail_caster_effect_attribute[4];
__int8 simple_context_fail_caster_effect_attribute_op;
char Pad16[1];
__int16 simple_context_success_target_flag[4];
__int8 simple_context_success_target_op;
char Pad17[1];
__int16 simple_context_fail_target_flag[4];
__int8 simple_context_fail_target_op;
char Pad18[1];
__int16 simple_context_success_target_effect_attribute[4];
__int8 simple_context_success_target_effect_attribute_op;
char Pad19[1];
__int16 simple_context_fail_target_effect_attribute[4];
__int8 simple_context_fail_target_effect_attribute_op;
char Pad20[1];
__int16 simple_context_check_sp_value[2];
__int8 simple_context_check_sp_type[2];
__int8 simple_context_success_recycle_group[4];
__int8 simple_context_success_recycle_group_id[4];
__int8 simple_context_success_recycle_group_op;
__int8 simple_context_fail_recycle_group[4];
__int8 simple_context_fail_recycle_group_id[4];
__int8 simple_context_fail_recycle_group_op;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(7, 0); }
		static __int16 TableId() { return 331; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillcastcondition3_RecordPtr // : DrRecordPtr
	{
		skillcastcondition3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillcastcondition3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}