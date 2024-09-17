/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct raid_dungeon_Record : DrEl
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
Data::TableRef name2;
int name2_tableId(){return 405;};
__int8 dungeon_type;
char Pad0[3];
Data::TableRef group;
int group_tableId(){return 16;};
__int8 max_unbind_count;
char Pad1[3];
__int32 reset_money;
Data::TableRef reset_item[4];
int reset_item_tableId(){return 189;};
__int8 reset_item_count[4];
bool use_personal_binding;
__int8 personal_binding_slot;
__int16 pc_max;
__int8 required_level;
__int8 required_mastery_level;
char Pad2[2];
Data::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
char Pad3[3];
Data::TableRef attraction_quest[10];
int attraction_quest_tableId(){return 283;};
bool enable_heart_count;
__int8 max_instant_heart_count;
char Pad4[2];
Data::TableRef effect[3];
int effect_tableId(){return 111;};
__int8 step_count;
char Pad5[3];
Data::TableRef zone[9];
int zone_tableId(){return 443;};
Data::TableRef boss_npc[9];
int boss_npc_tableId(){return 255;};
__int8 zone_index[9];
char Pad6[3];
Data::TableRef dungeon_tap_name2;
int dungeon_tap_name2_tableId(){return 405;};
Data::TableRef step_name2[9];
int step_name2_tableId(){return 405;};
wchar_t* step_image[9];
wchar_t* arena_minimap;
Data::TableRef raid_dungeon_desc;
int raid_dungeon_desc_tableId(){return 405;};
__int8 ui_text_grade;
char Pad7[3];
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
__int16 recommend_attack_power;
char Pad8[2];
Data::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 189;};
Data::TableRef display_quests[12];
int display_quests_tableId(){return 283;};
Data::TableRef tactic;
int tactic_tableId(){return 405;};
Data::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};
Data::TableRef contents_reset;
int contents_reset_tableId(){return 72;};
Data::TableRef boss_npc_alias[8];
int boss_npc_alias_tableId(){return 255;};
Data::TableRef boss_npc_section[8];
int boss_npc_section_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(6, 12); }
		static __int16 TableId() { return 289; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) raid_dungeon_RecordPtr // : DrRecordPtr
	{
		raid_dungeon_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::raid_dungeon_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}