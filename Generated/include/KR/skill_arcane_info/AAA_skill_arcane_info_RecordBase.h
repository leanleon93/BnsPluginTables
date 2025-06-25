/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_arcane_info_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef skill3;
int skill3_tableId() const {return 349;};
__int16 arcane_score;
__int16 default_arcane_score;
__int32 reference_value_arcane_score[6];
__int32 reference_value_arcane_score_Size() const {return 6;};
signed char reference_value_arcane_score_total_count;
char Pad0[3];
BnsTables::Shared::TableRef apply_skill_modifys[6];
__int32 apply_skill_modifys_Size() const {return 6;};
int apply_skill_modifys_tableId() const {return 366;};
BnsTables::Shared::TableRef apply_skill_modify_per_arcane_score[6];
__int32 apply_skill_modify_per_arcane_score_Size() const {return 6;};
int apply_skill_modify_per_arcane_score_tableId() const {return 366;};
signed char apply_skill_modify_per_arcane_score_total_count;
char Pad1[3];
__int32 per_arcane_score_section[6];
__int32 per_arcane_score_section_Size() const {return 6;};
BnsTables::Shared::TableRef cast_effect[6];
__int32 cast_effect_Size() const {return 6;};
int cast_effect_tableId() const {return 118;};
signed char cast_effect_total_count;
char Pad2[3];
BnsTables::Shared::TableRef exec_effect_1[6];
__int32 exec_effect_1_Size() const {return 6;};
int exec_effect_1_tableId() const {return 119;};
BnsTables::Shared::TableRef exec_effect_2[6];
__int32 exec_effect_2_Size() const {return 6;};
int exec_effect_2_tableId() const {return 119;};
BnsTables::Shared::TableRef exec_effect_3[6];
__int32 exec_effect_3_Size() const {return 6;};
int exec_effect_3_tableId() const {return 119;};
BnsTables::Shared::TableRef exec_effect_4[6];
__int32 exec_effect_4_Size() const {return 6;};
int exec_effect_4_tableId() const {return 119;};
BnsTables::Shared::TableRef exec_effect_5[6];
__int32 exec_effect_5_Size() const {return 6;};
int exec_effect_5_tableId() const {return 119;};
signed char exec_effect_1_total_count;
signed char exec_effect_2_total_count;
signed char exec_effect_3_total_count;
signed char exec_effect_4_total_count;
signed char exec_effect_5_total_count;
char Pad3[3];
BnsTables::Shared::TableRef swing_caster_effect_1[6];
__int32 swing_caster_effect_1_Size() const {return 6;};
int swing_caster_effect_1_tableId() const {return 118;};
BnsTables::Shared::TableRef swing_caster_effect_2[6];
__int32 swing_caster_effect_2_Size() const {return 6;};
int swing_caster_effect_2_tableId() const {return 118;};
BnsTables::Shared::TableRef swing_caster_effect_3[6];
__int32 swing_caster_effect_3_Size() const {return 6;};
int swing_caster_effect_3_tableId() const {return 118;};
BnsTables::Shared::TableRef swing_caster_effect_4[6];
__int32 swing_caster_effect_4_Size() const {return 6;};
int swing_caster_effect_4_tableId() const {return 118;};
BnsTables::Shared::TableRef swing_caster_effect_5[6];
__int32 swing_caster_effect_5_Size() const {return 6;};
int swing_caster_effect_5_tableId() const {return 118;};
signed char swing_caster_effect_1_total_count;
signed char swing_caster_effect_2_total_count;
signed char swing_caster_effect_3_total_count;
signed char swing_caster_effect_4_total_count;
signed char swing_caster_effect_5_total_count;
char Pad4[3];
BnsTables::Shared::TableRef exec_caster_effect_1[6];
__int32 exec_caster_effect_1_Size() const {return 6;};
int exec_caster_effect_1_tableId() const {return 118;};
BnsTables::Shared::TableRef exec_caster_effect_2[6];
__int32 exec_caster_effect_2_Size() const {return 6;};
int exec_caster_effect_2_tableId() const {return 118;};
BnsTables::Shared::TableRef exec_caster_effect_3[6];
__int32 exec_caster_effect_3_Size() const {return 6;};
int exec_caster_effect_3_tableId() const {return 118;};
BnsTables::Shared::TableRef exec_caster_effect_4[6];
__int32 exec_caster_effect_4_Size() const {return 6;};
int exec_caster_effect_4_tableId() const {return 118;};
BnsTables::Shared::TableRef exec_caster_effect_5[6];
__int32 exec_caster_effect_5_Size() const {return 6;};
int exec_caster_effect_5_tableId() const {return 118;};
signed char exec_caster_effect_1_total_count;
signed char exec_caster_effect_2_total_count;
signed char exec_caster_effect_3_total_count;
signed char exec_caster_effect_4_total_count;
signed char exec_caster_effect_5_total_count;
signed char exec_caster_effect_skill_result_1[6];
__int32 exec_caster_effect_skill_result_1_Size() const {return 6;};
signed char exec_caster_effect_skill_result_2[6];
__int32 exec_caster_effect_skill_result_2_Size() const {return 6;};
signed char exec_caster_effect_skill_result_3[6];
__int32 exec_caster_effect_skill_result_3_Size() const {return 6;};
signed char exec_caster_effect_skill_result_4[6];
__int32 exec_caster_effect_skill_result_4_Size() const {return 6;};
signed char exec_caster_effect_skill_result_5[6];
__int32 exec_caster_effect_skill_result_5_Size() const {return 6;};
char Pad5[1];
BnsTables::Shared::TableRef effect_tooltip_description[6];
__int32 effect_tooltip_description_Size() const {return 6;};
int effect_tooltip_description_tableId() const {return 434;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 0); }
		static __int16 TableId() { return 351; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_arcane_info_RecordPtr // : DrRecordPtr
	{
		skill_arcane_info_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}