/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class item_graph_RecordSubType : __int32
    {
		item_graph_record_sub_seed = 0,
		item_graph_record_sub_edge = 1,
		item_graph_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct item_graph_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		
		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 16); }
		static __int16 TableId() { return 207; }
		static __int32 SubType() { return -1; }
		enum class seed_item_sub_group {
			sub_group_1 = 0,
			sub_group_2 = 1,
		};

		enum class node_type {
			seed_normal = 0,
			seed_black_sky = 1,
		};

		enum class attribute_group {
			none = 0,
			attribute_group_1 = 1,
			attribute_group_2 = 2,
		};

		enum class item_equip_type {
			none = 0,
			weapon = 1,
			costume = 2,
			earring = 3,
			eyeglass = 4,
			hat = 5,
			ring = 6,
			necklace = 7,
			gem_1 = 8,
			gem_2 = 9,
			gem_3 = 10,
			gem_4 = 11,
			gem_5 = 12,
			gem_6 = 13,
			gem_7 = 14,
			gem_8 = 15,
			attach = 16,
			belt = 17,
			bracelet = 18,
			soul = 19,
			soul_2 = 20,
			gloves = 21,
			pet_1 = 22,
			pet_2 = 23,
			rune_1 = 24,
			rune_2 = 25,
			nova = 26,
			badge_1_premium = 27,
			badge_2_premium = 28,
			badge_3_premium = 29,
			badge_1_normal = 30,
			badge_2_normal = 31,
			badge_3_normal = 32,
			badge_appearance = 33,
			vehicle = 34,
			normal_state_appearance = 35,
			idle_state_appearance = 36,
			chatting_symbol = 37,
			portrait_appearance = 38,
			hypermove_appearance = 39,
			name_plate_appearance = 40,
			speech_bubble_appearance = 41,
			talk_social = 42,
			armlet_1 = 43,
			armlet_2 = 44,
		};

		enum class growth_category {
			none = 0,
			dungeon = 1,
			raid = 2,
			pvp = 3,
			attribute = 4,
			etc1 = 5,
			etc2 = 6,
		};

		enum class edge_type {
			growth = 0,
			awaken = 1,
			transform = 2,
			jump_transform = 3,
			purification = 4,
		};

		enum class end_orientation {
			horizontal = 0,
			vertical = 1,
		};

		enum class success_probability {
			definite = 0,
			stochastic = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_graph_RecordPtr // : DrRecordPtr
	{
		item_graph_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}