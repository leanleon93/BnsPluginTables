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
int step_complete_reward_item_tableId() const {return 202;};
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
int step_complete_reward_final_item_tableId() const {return 202;};
__int16 step_complete_reward_final_item_count[5];
__int32 step_complete_reward_final_item_count_Size() const {return 5;};
__int16 current_step_score;
signed char ability;
char Pad6[1];
__int16 ability_value;
BnsTables::Shared::TableRef completed_effect;
int completed_effect_tableId() const {return 118;};
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
int map_group_1_tableId() const {return 253;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 434;};
BnsTables::Shared::TableRef description2;
int description2_tableId() const {return 434;};
BnsTables::Shared::TableRef title_name;
int title_name_tableId() const {return 434;};
BnsTables::Shared::TableRef title_image_text;
int title_image_text_tableId() const {return 434;};
BnsTables::Shared::TableRef title_thumbnail_icon_text;
int title_thumbnail_icon_text_tableId() const {return 434;};
__int16 sort_no;
char Pad9[2];
BnsTables::Shared::TableRef completed_game_message;
int completed_game_message_tableId() const {return 159;};
BnsTables::Shared::TableRef talk_social;
int talk_social_tableId() const {return 428;};
BnsTables::Shared::IconRef title_chat_ui_icon;
wchar_t* title_thumbnail_frame_fx;
signed char title_grade;
signed char title_infield_ui_border_effect;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 3); }
		static __int16 TableId() { return 6; }
		static __int32 SubType() { return -1; }
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