/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct simple_field_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 483;};
__int16 max_pc_count;
signed char required_level;
signed char required_mastery_level;
BnsTables::Shared::TableRef required_preceding_quest[3];
__int32 required_preceding_quest_Size() const {return 3;};
int required_preceding_quest_tableId() const {return 309;};
signed char required_preceding_quest_check;
char Pad0[3];
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
__int16 recommend_attack_power;
char Pad1[2];
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId() const {return 203;};
BnsTables::Shared::TableRef simple_field_name2;
int simple_field_name2_tableId() const {return 438;};
BnsTables::Shared::TableRef simple_field_desc;
int simple_field_desc_tableId() const {return 438;};
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
signed char ui_text_grade;
char Pad2[3];
BnsTables::Shared::TableRef tactic;
int tactic_tableId() const {return 438;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId() const {return 74;};
signed char recommend_level_min;
signed char recommend_level_max;
signed char recommend_mastery_level_min;
signed char recommend_mastery_level_max;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 61); }
		static __int16 TableId() { return 352; }
		static __int32 SubType() { return -1; }
		enum class required_preceding_quest_check {
			and_val = 0,
			or_val = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) simple_field_RecordPtr // : DrRecordPtr
	{
		simple_field_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}