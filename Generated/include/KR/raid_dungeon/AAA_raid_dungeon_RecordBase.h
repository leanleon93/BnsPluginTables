/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

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
int name2_tableId(){return 420;};
__int8 dungeon_type;
char Pad0[3];
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
__int8 max_unbind_count;
char Pad1[3];
__int32 reset_money;
BnsTables::Shared::TableRef reset_item[4];
int reset_item_tableId(){return 195;};
__int8 reset_item_count[4];
bool use_personal_binding;
__int8 personal_binding_slot;
__int16 pc_max;
__int8 required_level;
__int8 required_mastery_level;
char Pad2[2];
BnsTables::Shared::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 294;};
__int8 required_preceding_quest_check;
char Pad3[3];
BnsTables::Shared::TableRef attraction_quest[10];
int attraction_quest_tableId(){return 294;};
bool enable_heart_count;
__int8 max_instant_heart_count;
char Pad4[2];
BnsTables::Shared::TableRef effect[3];
int effect_tableId(){return 115;};
__int8 step_count;
char Pad5[3];
BnsTables::Shared::TableRef zone[9];
int zone_tableId(){return 461;};
BnsTables::Shared::TableRef boss_npc[9];
int boss_npc_tableId(){return 265;};
__int8 zone_index[9];
char Pad6[3];
BnsTables::Shared::TableRef dungeon_tap_name2;
int dungeon_tap_name2_tableId(){return 420;};
BnsTables::Shared::TableRef step_name2[9];
int step_name2_tableId(){return 420;};
wchar_t* step_image[9];
wchar_t* arena_minimap;
BnsTables::Shared::TableRef raid_dungeon_desc;
int raid_dungeon_desc_tableId(){return 420;};
__int8 ui_text_grade;
char Pad7[3];
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
__int16 recommend_attack_power;
char Pad8[2];
BnsTables::Shared::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 195;};
BnsTables::Shared::TableRef display_quests[12];
int display_quests_tableId(){return 294;};
BnsTables::Shared::TableRef tactic;
int tactic_tableId(){return 420;};
BnsTables::Shared::TableRef recommend_alias;
int recommend_alias_tableId(){return 72;};
BnsTables::Shared::TableRef contents_reset;
int contents_reset_tableId(){return 73;};
BnsTables::Shared::TableRef boss_npc_alias[8];
int boss_npc_alias_tableId(){return 265;};
BnsTables::Shared::TableRef boss_npc_section[8];
int boss_npc_section_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 12); }
		static __int16 TableId() { return 302; }
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