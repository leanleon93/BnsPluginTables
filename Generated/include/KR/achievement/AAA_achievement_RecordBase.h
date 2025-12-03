/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct achievement_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
__int16 step;
signed char job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool deprecated;
bool gold_server_deprecated;
bool complete_from_client;
char Pad0[1];
BnsTables::Shared::TableRef register_ref[5];
__int32 register_ref_Size() const {return 5;};
int register_ref_tableId() const {return 7;};
signed char register_type[5];
__int32 register_type_Size() const {return 5;};
char Pad1[3];
__int32 register_value[5];
__int32 register_value_Size() const {return 5;};
bool progress_show;
char Pad2[3];
BnsTables::Shared::TableRef step_complete_reward_item[5];
__int32 step_complete_reward_item_Size() const {return 5;};
int step_complete_reward_item_tableId() const {return 203;};
__int16 step_complete_reward_item_count[5];
__int32 step_complete_reward_item_count_Size() const {return 5;};
char Pad3[2];
__int64 step_complete_reward_game_cash;
signed char step_complete_reward_game_cash_type;
char Pad4[1];
__int16 step_complete_reward_skill_build_up_point;
signed char step_complete_reward_type;
char Pad5[3];
BnsTables::Shared::TableRef step_complete_reward_final_item[5];
__int32 step_complete_reward_final_item_Size() const {return 5;};
int step_complete_reward_final_item_tableId() const {return 203;};
__int16 step_complete_reward_final_item_count[5];
__int32 step_complete_reward_final_item_count_Size() const {return 5;};
__int16 current_step_score;
signed char ability;
char Pad6[1];
__int16 ability_value;
BnsTables::Shared::TableRef completed_effect;
int completed_effect_tableId() const {return 119;};
signed char completed_effect_category;
char Pad7[1];
__int16 completed_effect_order;
wchar_t* title_fontset;
wchar_t* title_background_image;
float title_background_image_pos_x;
float title_background_image_pos_y;
signed char category_1;
signed char category_2;
char Pad8[2];
BnsTables::Shared::TableRef map_group_1;
int map_group_1_tableId() const {return 256;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 438;};
BnsTables::Shared::TableRef description2;
int description2_tableId() const {return 438;};
BnsTables::Shared::TableRef title_name;
int title_name_tableId() const {return 438;};
BnsTables::Shared::TableRef title_image_text;
int title_image_text_tableId() const {return 438;};
BnsTables::Shared::TableRef title_thumbnail_icon_text;
int title_thumbnail_icon_text_tableId() const {return 438;};
__int16 sort_no;
char Pad9[2];
BnsTables::Shared::TableRef completed_game_message;
int completed_game_message_tableId() const {return 160;};
BnsTables::Shared::TableRef talk_social;
int talk_social_tableId() const {return 432;};
BnsTables::Shared::IconRef title_chat_ui_icon;
wchar_t* title_thumbnail_frame_fx;
signed char title_grade;
signed char title_infield_ui_border_effect;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 3); }
		static __int16 TableId() { return 6; }
		static __int32 SubType() { return -1; }
		enum class job {
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

		enum class register_type {
			none = 0,
			above = 1,
			below = 2,
			bits_on = 3,
		};

		enum class step_complete_reward_game_cash_type {
			game_cash = 0,
			blue = 1,
			red = 2,
		};

		enum class step_complete_reward_type {
			invalid = 0,
			item = 1,
			game_cash = 2,
			skill_build_up_point = 3,
		};

		enum class ability {
			none = 0,
			attack_power_creature_min_max = 1,
			attack_hit_value = 2,
			attack_pierce_value = 3,
			attack_damage_modify_diff = 4,
			max_hp = 5,
			defend_power_creature_value = 6,
			defend_dodge_value = 7,
			defend_parry_value = 8,
			defend_damage_modify_diff = 9,
		};

		enum class completed_effect_category {
			value_0 = 0,
			value_1 = 1,
			value_2 = 2,
			value_3 = 3,
			value_4 = 4,
			value_5 = 5,
			value_6 = 6,
		};

		enum class category_1 {
			none = 0,
			growth = 1,
			item = 2,
			combat = 3,
			economy = 4,
			community = 5,
		};

		enum class category_2 {
			none = 0,
			level_up = 1,
			quest = 2,
			acquire_skill = 3,
			consumable = 4,
			collect = 5,
			growth = 6,
			decompose = 7,
			repair = 8,
			equip_gem = 9,
			attach_gem = 10,
			dungeon = 11,
			faction = 12,
			etc = 13,
			auction = 14,
			production = 15,
			social_action = 16,
			picture = 17,
			event = 18,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) achievement_RecordPtr // : DrRecordPtr
	{
		achievement_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}