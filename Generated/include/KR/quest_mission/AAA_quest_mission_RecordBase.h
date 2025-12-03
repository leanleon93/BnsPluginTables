/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct quest_mission_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		signed char id;
char Pad0[3];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 438;};
__int16 required_register_value;
signed char step;
bool show_kill_mapunit;
BnsTables::Shared::TableRef reward[3];
__int32 reward_Size() const {return 3;};
int reward_tableId() const {return 310;};
bool reset_teleport_recycle_time;
char Pad1[3];
BnsTables::Shared::ExplicitTableRef required_attraction;
signed char tendency_id;
signed char simple_quest_play_section;
signed char variation_count;
signed char variation_required_condition_type;
__int32 variation_required_condition_value[8];
__int32 variation_required_condition_value_Size() const {return 8;};
__int32 variation_required_field_play_point[8];
__int32 variation_required_field_play_point_Size() const {return 8;};
__int16 variation_required_register_value[8];
__int32 variation_required_register_value_Size() const {return 8;};
__int32 variation_reward_field_play_point[8];
__int32 variation_reward_field_play_point_Size() const {return 8;};
__int16 variation_reward_faction_score[8];
__int32 variation_reward_faction_score_Size() const {return 8;};
__int32 variation_reward_account_exp[8];
__int32 variation_reward_account_exp_Size() const {return 8;};
__int32 variation_reward_tendency_score[8];
__int32 variation_reward_tendency_score_Size() const {return 8;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 0; }
		static __int32 SubType() { return -1; }
		enum class simple_quest_play_section {
			none = 0,
			our = 1,
			enemy = 2,
		};

		enum class variation_required_condition_type {
			none = 0,
			field_play_point = 1,
			faction_score = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_mission_RecordPtr // : DrRecordPtr
	{
		quest_mission_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}