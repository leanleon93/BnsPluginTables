/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct auto_combat_customized_skill_cast_condition_Record : DrEl
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
wchar_t* name;
Data::TableRef name2;
int name2_tableId(){return 405;};
__int8 sort_id;
__int8 unique_group;
__int8 target_type;
char Pad0[1];
__int16 check_hp_percent;
__int8 check_hp_percent_op;
char Pad1[1];
__int16 check_success_effect_attribute;
__int16 check_success_effect_flag;
__int16 check_fail_effect_attribute;
__int16 check_fail_effect_flag;
__int8 check_npc_grade2;
__int8 check_npc_grade2_op;
__int16 check_target_distance;
__int8 check_target_distance_op;
char Pad2[1];
__int16 check_around_enemy_count;
bool check_around_enemy_targeting;
char Pad3[1];
__int16 check_around_range;
__int8 check_around_op;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 20; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) auto_combat_customized_skill_cast_condition_RecordPtr // : DrRecordPtr
	{
		auto_combat_customized_skill_cast_condition_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::auto_combat_customized_skill_cast_condition_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}