/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill_training_room_subject_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct skill_training_room_subject_class_training_Record : skill_training_room_subject_Record
	{
	public:
		char Pad_sub_0[2];
BnsTables::Shared::TableRef main_skill;
int main_skill_tableId() const {return 342;};
BnsTables::Shared::TableRef skill_combo_desc;
int skill_combo_desc_tableId() const {return 427;};
BnsTables::Shared::TableRef skill_combo_tips_main;
int skill_combo_tips_main_tableId() const {return 427;};
BnsTables::Shared::TableRef skill_combo_tips_desc;
int skill_combo_tips_desc_tableId() const {return 427;};
BnsTables::Shared::TableRef skill_training_sequence;
int skill_training_sequence_tableId() const {return 380;};
BnsTables::Shared::TableRef guide_text;
int guide_text_tableId() const {return 427;};
signed char base_job_style;
signed char advanced_job_style;
signed char advanced_tier_variation[5];
__int32 advanced_tier_variation_Size() const {return 5;};
signed char advanced_tier_variation_flag_op[5];
__int32 advanced_tier_variation_flag_op_Size() const {return 5;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}