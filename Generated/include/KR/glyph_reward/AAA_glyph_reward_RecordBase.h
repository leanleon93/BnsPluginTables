/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct glyph_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef name;
int name_tableId() const {return 425;};
BnsTables::Shared::IconRef shuffle_reward_icon;
BnsTables::Shared::TableRef shuffle_reward_tooltip;
int shuffle_reward_tooltip_tableId() const {return 425;};
signed char upgrade_reward_preview;
bool upgrade_reward_warning_message;
signed char reward_type;
signed char grade;
signed char color;
signed char glyph_type;
char Pad0[2];
__int32 cost_money;
BnsTables::Shared::TableRef cost_item[4];
__int32 cost_item_Size() const {return 4;};
int cost_item_tableId() const {return 197;};
__int16 cost_item_count[4];
__int32 cost_item_count_Size() const {return 4;};
signed char tier_pick_probability;
signed char additional_glyph_pick_probability;
__int16 grade_prob_weight[8];
__int32 grade_prob_weight_Size() const {return 8;};
__int16 grade_prob_weight_total;
__int16 tier_prob_weight[8];
__int32 tier_prob_weight_Size() const {return 8;};
__int16 tier_prob_weight_total;
__int16 result_glyph_prob_weight[30];
__int32 result_glyph_prob_weight_Size() const {return 30;};
__int16 result_glyph_prob_weight_total;
BnsTables::Shared::TableRef result_glyph[30];
__int32 result_glyph_Size() const {return 30;};
int result_glyph_tableId() const {return 158;};
__int16 additional_glyph_prob_weight[10];
__int32 additional_glyph_prob_weight_Size() const {return 10;};
__int16 additional_glyph_prob_weight_total;
char Pad1[2];
BnsTables::Shared::TableRef additional_glyph[10];
__int32 additional_glyph_Size() const {return 10;};
int additional_glyph_tableId() const {return 158;};
__int16 cost_group_id[8];
__int32 cost_group_id_Size() const {return 8;};
__int16 result_group_id[8];
__int32 result_group_id_Size() const {return 8;};
__int16 group_prob_weight[8];
__int32 group_prob_weight_Size() const {return 8;};
__int16 group_prob_weight_total;
char Pad2[2];
__int32 mileage_weight;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 160; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) glyph_reward_RecordPtr // : DrRecordPtr
	{
		glyph_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}