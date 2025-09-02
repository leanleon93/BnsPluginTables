/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct auto_combat_customized_skill_cast_condition_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 434;};
signed char sort_id;
signed char unique_group;
signed char target_type;
char Pad0[1];
__int16 check_hp_percent;
signed char check_hp_percent_op;
char Pad1[1];
__int16 check_success_effect_attribute;
__int16 check_success_effect_flag;
__int16 check_fail_effect_attribute;
__int16 check_fail_effect_flag;
signed char check_npc_grade2;
signed char check_npc_grade2_op;
__int16 check_target_distance;
signed char check_target_distance_op;
char Pad2[1];
__int16 check_around_enemy_count;
bool check_around_enemy_targeting;
char Pad3[1];
__int16 check_around_range;
signed char check_around_op;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 20; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) auto_combat_customized_skill_cast_condition_RecordPtr // : DrRecordPtr
	{
		auto_combat_customized_skill_cast_condition_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}