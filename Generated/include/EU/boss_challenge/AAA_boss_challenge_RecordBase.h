/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct boss_challenge_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 470;};
__int16 require_score;
__int16 last_round;
wchar_t* alias;
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
BnsTables::Shared::TableRef attraction_quest[5];
__int32 attraction_quest_Size() const {return 5;};
int attraction_quest_tableId() const {return 299;};
bool enable_heart_count;
signed char max_instant_heart_count;
signed char required_level;
signed char required_mastery_level;
BnsTables::Shared::TableRef required_preceding_quest[3];
__int32 required_preceding_quest_Size() const {return 3;};
int required_preceding_quest_tableId() const {return 299;};
signed char required_preceding_quest_check;
char Pad0[3];
BnsTables::Shared::TableRef boss_challenge_name2;
int boss_challenge_name2_tableId() const {return 427;};
BnsTables::Shared::TableRef boss_challenge_desc;
int boss_challenge_desc_tableId() const {return 427;};
signed char ui_text_grade;
char Pad1[3];
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
signed char recommand_level_min;
signed char recommand_level_max;
signed char recommand_mastery_level_min;
signed char recommand_mastery_level_max;
__int16 recommend_attack_power;
char Pad2[2];
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId() const {return 198;};
BnsTables::Shared::TableRef display_quests[12];
__int32 display_quests_Size() const {return 12;};
int display_quests_tableId() const {return 299;};
bool enable_infinite_hyper_energy;
char Pad3[3];
BnsTables::Shared::TableRef tactic;
int tactic_tableId() const {return 427;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId() const {return 72;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 10); }
		static __int16 TableId() { return 44; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) boss_challenge_RecordPtr // : DrRecordPtr
	{
		boss_challenge_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}