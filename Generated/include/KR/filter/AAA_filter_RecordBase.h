/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class filter_RecordSubType : __int32
    {
		filter_record_sub_race = 0,
		filter_record_sub_sex = 1,
		filter_record_sub_job = 2,
		filter_record_sub_job_style = 3,
		filter_record_sub_stance = 4,
		filter_record_sub_prop = 5,
		filter_record_sub_prop_percent = 6,
		filter_record_sub_prop_flag = 7,
		filter_record_sub_effect_flag = 8,
		filter_record_sub_faction = 9,
		filter_record_sub_active_faction = 10,
		filter_record_sub_deactivated_faction = 11,
		filter_record_sub_faction_reputation = 12,
		filter_record_sub_faction_level = 13,
		filter_record_sub_effect_attribute = 14,
		filter_record_sub_pc = 15,
		filter_record_sub_weapon_type = 16,
		filter_record_sub_party_leader = 17,
		filter_record_sub_party_member = 18,
		filter_record_sub_inventory = 19,
		filter_record_sub_field_item = 20,
		filter_record_sub_npc = 21,
		filter_record_sub_not_npc = 22,
		filter_record_sub_npc_id = 23,
		filter_record_sub_npc_convoy = 24,
		filter_record_sub_env = 25,
		filter_record_sub_env_id = 26,
		filter_record_sub_env_state = 27,
		filter_record_sub_env_prestate = 28,
		filter_record_sub_env_hp_percent = 29,
		filter_record_sub_skill = 30,
		filter_record_sub_skill_id = 31,
		filter_record_sub_skill3 = 32,
		filter_record_sub_skill3_id = 33,
		filter_record_sub_effect_id = 34,
		filter_record_sub_effect_stack_count = 35,
		filter_record_sub_quest_complete = 36,
		filter_record_sub_quest_not_complete = 37,
		filter_record_sub_act_sequence = 38,
		filter_record_sub_summoned = 39,
		filter_record_sub_not_summoned = 40,
		filter_record_sub_link_laser_terminate_reason = 41,
		filter_record_sub_content_quota_charge = 42,
		filter_record_sub_cinematic = 43,
		filter_record_sub_dungeon = 44,
		filter_record_sub_count = 45,
    };
#pragma pack(push, 1)
	struct filter_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::UnkFlag subject;
BnsTables::Shared::UnkFlag target;
BnsTables::Shared::UnkFlag subject2;
BnsTables::Shared::UnkFlag target2;
BnsTables::Shared::TableRef description;
int description_tableId() const {return 434;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 1); }
		static __int16 TableId() { return 150; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) filter_RecordPtr // : DrRecordPtr
	{
		filter_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}