/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct sealed_dungeon_modify_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
__int8 sealed_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 modify_npc_exp_percent;
__int16 modify_npc_sealed_dungeon_exp_percent;
__int32 modify_clear_sealed_dungeon_exp_percent;
__int8 modify_npc_immune_breaker_count;
char Pad0[3];
__int32 modify_npc_immune_breaker_init_duration;
__int16 modify_skill_duration;
char Pad1[2];
Data::TableRef gimmick_option_fixed[5];
int gimmick_option_fixed_tableId(){return 314;};
Data::TableRef gimmick_option_week_1[2];
int gimmick_option_week_1_tableId(){return 314;};
Data::TableRef gimmick_option_week_2[2];
int gimmick_option_week_2_tableId(){return 314;};
Data::TableRef gimmick_option_week_3[2];
int gimmick_option_week_3_tableId(){return 314;};
Data::TableRef gimmick_option_week_4[2];
int gimmick_option_week_4_tableId(){return 314;};
Data::TableRef gimmick_option_week_5[2];
int gimmick_option_week_5_tableId(){return 314;};
Data::TableRef target_boss_npc[3];
int target_boss_npc_tableId(){return 255;};
Data::TableRef boss_npc_effect_week_1[5];
int boss_npc_effect_week_1_tableId(){return 111;};
Data::TableRef boss_npc_effect_week_2[5];
int boss_npc_effect_week_2_tableId(){return 111;};
Data::TableRef boss_npc_effect_week_3[5];
int boss_npc_effect_week_3_tableId(){return 111;};
Data::TableRef boss_npc_effect_week_4[5];
int boss_npc_effect_week_4_tableId(){return 111;};
Data::TableRef boss_npc_effect_week_5[5];
int boss_npc_effect_week_5_tableId(){return 111;};
wchar_t* boss_npc_effect_tooltip_week_1;
wchar_t* boss_npc_effect_tooltip_week_2;
wchar_t* boss_npc_effect_tooltip_week_3;
wchar_t* boss_npc_effect_tooltip_week_4;
wchar_t* boss_npc_effect_tooltip_week_5;
Data::TableRef boss_npc_effect_icon_week_1;
int boss_npc_effect_icon_week_1_tableId(){return 178;};
Data::TableRef boss_npc_effect_icon_week_2;
int boss_npc_effect_icon_week_2_tableId(){return 178;};
Data::TableRef boss_npc_effect_icon_week_3;
int boss_npc_effect_icon_week_3_tableId(){return 178;};
Data::TableRef boss_npc_effect_icon_week_4;
int boss_npc_effect_icon_week_4_tableId(){return 178;};
Data::TableRef boss_npc_effect_icon_week_5;
int boss_npc_effect_icon_week_5_tableId(){return 178;};
__int16 boss_npc_effect_icon_index_week_1;
__int16 boss_npc_effect_icon_index_week_2;
__int16 boss_npc_effect_icon_index_week_3;
__int16 boss_npc_effect_icon_index_week_4;
__int16 boss_npc_effect_icon_index_week_5;
char Pad2[2];
Data::TableRef contents_reset;
int contents_reset_tableId(){return 72;};
bool use_level_first_clear;
__int8 use_level_first_clear_next_level;
char Pad3[2];
Data::TableRef dungeon_id;
int dungeon_id_tableId(){return 110;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
wchar_t* scroll_boss_imageset;
wchar_t* scroll_boss_back_imageset;
__int16 recommend_attack_power_sealed_dungeon;
char Pad4[2];
Data::TableRef recommend_alias_sealed_dungeon;
int recommend_alias_sealed_dungeon_tableId(){return 71;};

		static TableVersion Version() { return TableVersion(6, 3); }
		static __int16 TableId() { return 316; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) sealed_dungeon_modify_RecordPtr // : DrRecordPtr
	{
		sealed_dungeon_modify_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::sealed_dungeon_modify_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}