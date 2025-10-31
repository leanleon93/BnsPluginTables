/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct raid_dungeon_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 434;};
signed char dungeon_type;
char Pad0[3];
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
signed char max_unbind_count;
char Pad1[3];
__int32 reset_money;
BnsTables::Shared::TableRef reset_item[4];
__int32 reset_item_Size() const {return 4;};
int reset_item_tableId() const {return 202;};
signed char reset_item_count[4];
__int32 reset_item_count_Size() const {return 4;};
bool use_personal_binding;
signed char personal_binding_slot;
__int16 pc_max;
signed char required_level;
signed char required_mastery_level;
char Pad2[2];
BnsTables::Shared::TableRef required_preceding_quest[3];
__int32 required_preceding_quest_Size() const {return 3;};
int required_preceding_quest_tableId() const {return 306;};
signed char required_preceding_quest_check;
char Pad3[3];
BnsTables::Shared::TableRef attraction_quest[10];
__int32 attraction_quest_Size() const {return 10;};
int attraction_quest_tableId() const {return 306;};
bool enable_heart_count;
signed char max_instant_heart_count;
char Pad4[2];
BnsTables::Shared::TableRef effect[3];
__int32 effect_Size() const {return 3;};
int effect_tableId() const {return 118;};
signed char step_count;
char Pad5[3];
BnsTables::Shared::TableRef zone[9];
__int32 zone_Size() const {return 9;};
int zone_tableId() const {return 479;};
BnsTables::Shared::TableRef boss_npc[9];
__int32 boss_npc_Size() const {return 9;};
int boss_npc_tableId() const {return 276;};
signed char zone_index[9];
__int32 zone_index_Size() const {return 9;};
char Pad6[3];
BnsTables::Shared::TableRef dungeon_tap_name2;
int dungeon_tap_name2_tableId() const {return 434;};
BnsTables::Shared::TableRef step_name2[9];
__int32 step_name2_Size() const {return 9;};
int step_name2_tableId() const {return 434;};
wchar_t* step_image[9];
__int32 step_image_Size() const {return 9;};
wchar_t* arena_minimap;
BnsTables::Shared::TableRef raid_dungeon_desc;
int raid_dungeon_desc_tableId() const {return 434;};
signed char ui_text_grade;
char Pad7[3];
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
signed char recommand_level_min;
signed char recommand_level_max;
signed char recommand_mastery_level_min;
signed char recommand_mastery_level_max;
__int16 recommend_attack_power;
char Pad8[2];
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId() const {return 202;};
BnsTables::Shared::TableRef display_quests[12];
__int32 display_quests_Size() const {return 12;};
int display_quests_tableId() const {return 306;};
BnsTables::Shared::TableRef tactic;
int tactic_tableId() const {return 434;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId() const {return 74;};
BnsTables::Shared::TableRef contents_reset;
int contents_reset_tableId() const {return 75;};
BnsTables::Shared::TableRef boss_npc_alias[8];
__int32 boss_npc_alias_Size() const {return 8;};
int boss_npc_alias_tableId() const {return 276;};
BnsTables::Shared::TableRef boss_npc_section[8];
__int32 boss_npc_section_Size() const {return 8;};
int boss_npc_section_tableId() const {return 434;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 12); }
		static __int16 TableId() { return 315; }
		static __int32 SubType() { return -1; }
		enum class dungeon_type {
			unbind = 0,
			bind = 1,
		};

		enum class personal_binding_slot {
			none = 0,
			slot_1 = 1,
			slot_2 = 2,
			slot_3 = 3,
		};

		enum class required_preceding_quest_check {
			and_val = 0,
			or_val = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) raid_dungeon_RecordPtr // : DrRecordPtr
	{
		raid_dungeon_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}