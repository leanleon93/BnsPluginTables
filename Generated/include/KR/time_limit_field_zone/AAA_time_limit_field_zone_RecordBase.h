/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct time_limit_field_zone_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef time_limit_quota;
int time_limit_quota_tableId() const {return 69;};
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
signed char required_level;
signed char required_mastery_level;
char Pad0[2];
BnsTables::Shared::TableRef required_cost;
int required_cost_tableId() const {return 80;};
BnsTables::Shared::TableRef time_limit_field_zone_name2;
int time_limit_field_zone_name2_tableId() const {return 441;};
BnsTables::Shared::TableRef time_limit_field_zone_desc;
int time_limit_field_zone_desc_tableId() const {return 441;};
BnsTables::Shared::TableRef time_limit_field_zone_desc2;
int time_limit_field_zone_desc2_tableId() const {return 441;};
signed char ui_text_grade;
char Pad1[3];
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
BnsTables::Shared::TableRef field_bonus_effect_desc1;
int field_bonus_effect_desc1_tableId() const {return 441;};
BnsTables::Shared::TableRef field_bonus_effect_desc2;
int field_bonus_effect_desc2_tableId() const {return 441;};
BnsTables::Shared::TableRef field_bonus_effect_desc3;
int field_bonus_effect_desc3_tableId() const {return 441;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId() const {return 74;};
__int16 recommend_attack_power;
signed char entrance_type;
char Pad2[1];
__int32 parent_time_limit_field_zone;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 5); }
		static __int16 TableId() { return 442; }
		static __int32 SubType() { return -1; }
		enum class entrance_type {
			default_val = 0,
			public_raid3 = 1,
			special_entrance_in_world = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) time_limit_field_zone_RecordPtr // : DrRecordPtr
	{
		time_limit_field_zone_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}