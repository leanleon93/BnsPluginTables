/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct achievement_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
__int16 step;
__int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool deprecated;
bool complete_from_client;
char Pad0[2];
Data::TableRef register_ref[5];
int register_ref_tableId(){return 7;};
__int8 register_type[5];
char Pad1[3];
__int32 register_value[5];
bool progress_show;
char Pad2[3];
Data::TableRef step_complete_reward_item[5];
int step_complete_reward_item_tableId(){return 189;};
__int16 step_complete_reward_item_count[5];
char Pad3[2];
__int64 step_complete_reward_game_cash;
__int16 step_complete_reward_skill_build_up_point;
__int8 step_complete_reward_type;
char Pad4[1];
Data::TableRef step_complete_reward_final_item[5];
int step_complete_reward_final_item_tableId(){return 189;};
__int16 step_complete_reward_final_item_count[5];
__int16 current_step_score;
__int8 ability;
char Pad5[1];
__int16 ability_value;
Data::TableRef completed_effect;
int completed_effect_tableId(){return 111;};
__int8 completed_effect_category;
char Pad6[1];
__int16 completed_effect_order;
wchar_t* title_fontset;
wchar_t* title_background_image;
float title_background_image_pos_x;
float title_background_image_pos_y;
__int8 category_1;
__int8 category_2;
char Pad7[2];
Data::TableRef map_group_1;
int map_group_1_tableId(){return 237;};
Data::IconRef icon;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef description2;
int description2_tableId(){return 405;};
Data::TableRef title_name;
int title_name_tableId(){return 405;};
Data::TableRef title_image_text;
int title_image_text_tableId(){return 405;};
Data::TableRef title_thumbnail_icon_text;
int title_thumbnail_icon_text_tableId(){return 405;};
__int16 sort_no;
char Pad8[2];
Data::TableRef completed_game_message;
int completed_game_message_tableId(){return 151;};
Data::TableRef talk_social;
int talk_social_tableId(){return 399;};
Data::IconRef title_chat_ui_icon;
wchar_t* title_thumbnail_frame_fx;
__int8 title_grade;

		static TableVersion Version() { return TableVersion(1, 2); }
		static __int16 TableId() { return 6; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) achievement_RecordPtr // : DrRecordPtr
	{
		achievement_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::achievement_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}