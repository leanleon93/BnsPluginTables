/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct soul_boost_mission_Record : BnsTables::Shared::DrEl
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
signed char mission_type;
signed char entity_type[10];
__int32 entity_type_Size() const {return 10;};
char Pad0[1];
wchar_t* condition_alias[10];
__int32 condition_alias_Size() const {return 10;};
__int64 condition[10];
__int32 condition_Size() const {return 10;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 0); }
		static __int16 TableId() { return 406; }
		static __int32 SubType() { return -1; }
		enum class mission_type {
			none = 0,
			pc_login = 1,
			complete_challenge_daily = 2,
			complete_challenge_weekly = 3,
			complete_quest = 4,
			play_time = 5,
			play_time_in_zone = 6,
			time_based_play_reward = 7,
			kill_npc = 8,
			join_party_battle = 9,
			kill_pc_in_party_battle = 10,
			account_level = 11,
			try_transform_equip_item = 12,
			transform_item = 13,
			pc_level = 14,
			pc_mastery_level = 15,
			exchange_item_in_zone = 16,
			loot_item_in_zone = 17,
			purchase_item_from_npc = 18,
			use_item = 19,
			process_glyph_fusion = 20,
			equip_glyph = 21,
			join_guild = 22,
			complete_quest_guild = 23,
			manipulate_env = 24,
			repair_item = 25,
			decompose_item = 26,
			improve_item = 27,
			equip_item = 28,
			sealed_dungeon_clear = 29,
			improve_item_set_bonus_total_level = 30,
			decompose_random_box = 31,
			acquire_quest_reward = 32,
			acquire_quest_bonus_reward = 33,
			feeding_equip_gem = 34,
			world_account_combination = 35,
			world_account_card_collection_equip = 36,
			attach_equip_gem_piece = 37,
		};

		enum class entity_type {
			none = 0,
			zone = 1,
			npc = 2,
			item = 3,
			quest = 4,
			party_battle_field_type = 5,
			recipe_category = 6,
			equip_type = 7,
			item_grade = 8,
			glyph_color = 9,
			glyph_grade = 10,
			glyph_reward_type = 11,
			env = 12,
			market_category_2 = 13,
			market_category_3 = 14,
			item_generation = 15,
			stage_number = 16,
			improve_level = 17,
			item_improve_set_bonus = 18,
			dungeon = 19,
			sealed_dungeon_level = 20,
			value = 21,
			world_account_combination = 22,
			world_account_card_collection = 23,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_mission_RecordPtr // : DrRecordPtr
	{
		soul_boost_mission_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}