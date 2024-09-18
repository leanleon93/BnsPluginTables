/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_by_equipment_Record : BnsTables::Shared::DrEl
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
__int32 skill3_id[4];
__int32 block_skill3_id[4];
__int32 skill_tree_id[4];
BnsTables::Shared::TableRef context_script[4];
int context_script_tableId(){return 75;};
BnsTables::Shared::TableRef tooltip_text[4];
int tooltip_text_tableId(){return 420;};
__int32 skill_attack_power_min_param1_slot[4];
__int32 skill_attack_power_max_param1_slot[4];
__int32 skill_attack_power_min_param2_slot[4];
__int32 skill_attack_power_max_param2_slot[4];
__int32 skill_attack_power_min_param3_slot[4];
__int32 skill_attack_power_max_param3_slot[4];
__int32 skill_attack_power_min_param4_slot[4];
__int32 skill_attack_power_max_param4_slot[4];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 10); }
		static __int16 TableId() { return 343; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_by_equipment_RecordPtr // : DrRecordPtr
	{
		skill_by_equipment_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_by_equipment_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}