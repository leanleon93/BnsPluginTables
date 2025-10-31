/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct equip_item_guide_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef item_group;
int item_group_tableId() const {return 127;};
signed char item_equip_type;
signed char item_equip_job;
char Pad0[2];
__int32 item_score;
BnsTables::Shared::TableRef representative_item;
int representative_item_tableId() const {return 202;};
BnsTables::Shared::TableRef next_item_guide_list[3];
__int32 next_item_guide_list_Size() const {return 3;};
int next_item_guide_list_tableId() const {return 128;};
BnsTables::Shared::TableRef improve_main_feed_list[15];
__int32 improve_main_feed_list_Size() const {return 15;};
int improve_main_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef improve_sub_feed_list[15];
__int32 improve_sub_feed_list_Size() const {return 15;};
int improve_sub_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef transform_main_feed_list[15];
__int32 transform_main_feed_list_Size() const {return 15;};
int transform_main_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef transform_sub_feed_list[15];
__int32 transform_sub_feed_list_Size() const {return 15;};
int transform_sub_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef growth_main_feed_list[15];
__int32 growth_main_feed_list_Size() const {return 15;};
int growth_main_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef growth_sub_feed_list[15];
__int32 growth_sub_feed_list_Size() const {return 15;};
int growth_sub_feed_list_tableId() const {return 202;};
BnsTables::Shared::TableRef improve_set_list[4];
__int32 improve_set_list_Size() const {return 4;};
int improve_set_list_tableId() const {return 214;};
signed char improve_option_acquire_level_list[5];
__int32 improve_option_acquire_level_list_Size() const {return 5;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 2); }
		static __int16 TableId() { return 128; }
		static __int32 SubType() { return -1; }
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

		enum class item_equip_job {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) equip_item_guide_RecordPtr // : DrRecordPtr
	{
		equip_item_guide_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}