/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct ui_command_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char command;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
wchar_t* icon;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 62); }
		static __int16 TableId() { return 443; }
		static __int32 SubType() { return -1; }
		enum class command {
			none = 0,
			default_val = 1,
			transform = 2,
			preview = 3,
			search_auction = 4,
			divide = 5,
			decompose = 6,
			powerbook = 7,
			hyperlink = 8,
			equip = 9,
			unequip = 10,
			lock = 11,
			unlock = 12,
			seal = 13,
			use_grocery = 14,
			unseal = 15,
			randombox = 16,
			talk_to_item = 17,
			attach_weapongem = 18,
			detach_weapongem = 19,
			detach_weapon_enchant_gem = 20,
			detach_enchant_gem = 21,
			use_piece = 22,
			trade_register = 23,
			trade_register_divide = 24,
			store_buy = 25,
			store_sell = 26,
			auction_sell_register = 27,
			delivery_send_register = 28,
			move_inventory_to_warehouse = 29,
			move_warehouse_to_inventory = 30,
			move_inventory_to_warehouse2 = 31,
			move_warehouse2_to_inventory = 32,
			move_inventory_to_closet = 33,
			move_closet_to_inventory = 34,
			move_inventory_to_wardrobe = 35,
			move_wardrobe_to_inventory = 36,
			growth_auto_register = 37,
			spirit_auto_register = 38,
			transform_register = 39,
			gemslot_add_preset = 40,
			gemslot_remove_preset = 41,
			production_register = 42,
			chat_whisper = 43,
			character_info = 44,
			add_friend = 45,
			invite_guild = 46,
			set_target_mark = 47,
			add_blacklist = 48,
			delete_blacklist = 49,
			direct_message = 50,
			social_following = 51,
			party_delegate_leader = 52,
			party_banish_member = 53,
			party_agreement_to_banish_member = 54,
			party_withdraw_agreement_to_banish_member = 55,
			party_dedicated_member = 56,
			team_leave = 57,
			team_delegate_leader = 58,
			team_party_leader_promotion = 59,
			dragon_jade_refinement = 60,
			appearance_change_target = 61,
			appearance_change_applying = 62,
			show_inspector = 63,
			remove_inserted_slot = 64,
			enter_interdungeon_lobby = 65,
			enter_duel_lobby = 66,
			show_contents_journal = 67,
			show_wardrobe = 68,
			search_item_graph = 69,
			explore_item_graph = 70,
			set_item_graph_starting_point = 71,
			clear_item_graph_starting_point = 72,
			set_item_graph_destination = 73,
			clear_item_graph_destination = 74,
			show_item_graph_recipe = 75,
			show_item_graph_variation = 76,
			change_item_graph_group = 77,
			receive_delivery = 78,
			unpack_package = 79,
			teleport = 80,
			process = 81,
			cash_store = 82,
			add_appearance_pictorial = 83,
			set_wardrobe_favorite = 84,
			clear_wardrobe_favorite = 85,
			set_wardrobe_appearance_seed = 86,
			personal_customize = 87,
			personal_customize_preview = 88,
			sewing = 89,
			skillskin = 90,
			move_inventory_to_badge_depot = 91,
			move_badge_depot_to_inventory = 92,
			compose_badge = 93,
			item_fusion_feed = 94,
			item_fusion_special_feed = 95,
			move_inventory_to_premium_depot = 96,
			move_premium_depot_to_inventory = 97,
			apply_guild = 98,
			buy_collection_item_by_instant_payment = 99,
			slate = 100,
			search_museum_info = 101,
			search_card_collection_info = 102,
			show_card_painting = 103,
			inventory_to_card_collection = 104,
			card_collection_to_inventory = 105,
			select_collection_card = 106,
			deselect_collection_card = 107,
			batched_use_grocery = 108,
			improve_succession_auto_register = 109,
			open_equipment_guide = 110,
			open_guide_movie = 111,
			inventory_to_card_expedition = 112,
			card_collection_to_expedition = 113,
			move_inventory_to_relics = 114,
			move_relics_to_inventory = 115,
			add_combine_relics = 116,
			add_enhance_relics = 117,
			add_disassemble_relics = 118,
			add_item_bookmark = 119,
			remove_item_bookmark = 120,
			attach_starstone = 121,
			show_item_probability = 122,
			open_worldaccount_cardbook = 123,
			achievement_search = 124,
			register_to_related_ui = 125,
			show_decompose_probability = 126,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ui_command_RecordPtr // : DrRecordPtr
	{
		ui_command_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}