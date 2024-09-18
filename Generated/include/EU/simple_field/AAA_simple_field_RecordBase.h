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
int zone_tableId(){return 443;};
__int16 max_pc_count;
__int8 required_level;
__int8 required_mastery_level;
BnsTables::Shared::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
char Pad0[3];
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
__int16 recommend_attack_power;
char Pad1[2];
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 189;};
BnsTables::Shared::TableRef simple_field_name2;
int simple_field_name2_tableId(){return 405;};
BnsTables::Shared::TableRef simple_field_desc;
int simple_field_desc_tableId(){return 405;};
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 ui_text_grade;
char Pad2[3];
BnsTables::Shared::TableRef tactic;
int tactic_tableId(){return 405;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};
__int8 recommend_level_min;
__int8 recommend_level_max;
__int8 recommend_mastery_level_min;
__int8 recommend_mastery_level_max;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 61); }
		static __int16 TableId() { return 323; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) simple_field_RecordPtr // : DrRecordPtr
	{
		simple_field_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::simple_field_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}