/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct sealed_dungeon_modify_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
signed char sealed_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 modify_npc_exp_percent;
__int16 modify_npc_sealed_dungeon_exp_percent;
__int32 modify_clear_sealed_dungeon_exp_percent;
signed char modify_npc_immune_breaker_count;
char Pad0[3];
__int32 modify_npc_immune_breaker_init_duration;
__int16 modify_skill_duration;
char Pad1[2];
BnsTables::Shared::TableRef gimmick_option_fixed[5];
__int32 gimmick_option_fixed_Size() const {return 5;};
int gimmick_option_fixed_tableId() const {return 332;};
BnsTables::Shared::TableRef gimmick_option_week_1[2];
__int32 gimmick_option_week_1_Size() const {return 2;};
int gimmick_option_week_1_tableId() const {return 332;};
BnsTables::Shared::TableRef gimmick_option_week_2[2];
__int32 gimmick_option_week_2_Size() const {return 2;};
int gimmick_option_week_2_tableId() const {return 332;};
BnsTables::Shared::TableRef gimmick_option_week_3[2];
__int32 gimmick_option_week_3_Size() const {return 2;};
int gimmick_option_week_3_tableId() const {return 332;};
BnsTables::Shared::TableRef gimmick_option_week_4[2];
__int32 gimmick_option_week_4_Size() const {return 2;};
int gimmick_option_week_4_tableId() const {return 332;};
BnsTables::Shared::TableRef gimmick_option_week_5[2];
__int32 gimmick_option_week_5_Size() const {return 2;};
int gimmick_option_week_5_tableId() const {return 332;};
BnsTables::Shared::TableRef target_boss_npc[3];
__int32 target_boss_npc_Size() const {return 3;};
int target_boss_npc_tableId() const {return 269;};
BnsTables::Shared::TableRef boss_npc_effect_week_1[5];
__int32 boss_npc_effect_week_1_Size() const {return 5;};
int boss_npc_effect_week_1_tableId() const {return 115;};
BnsTables::Shared::TableRef boss_npc_effect_week_2[5];
__int32 boss_npc_effect_week_2_Size() const {return 5;};
int boss_npc_effect_week_2_tableId() const {return 115;};
BnsTables::Shared::TableRef boss_npc_effect_week_3[5];
__int32 boss_npc_effect_week_3_Size() const {return 5;};
int boss_npc_effect_week_3_tableId() const {return 115;};
BnsTables::Shared::TableRef boss_npc_effect_week_4[5];
__int32 boss_npc_effect_week_4_Size() const {return 5;};
int boss_npc_effect_week_4_tableId() const {return 115;};
BnsTables::Shared::TableRef boss_npc_effect_week_5[5];
__int32 boss_npc_effect_week_5_Size() const {return 5;};
int boss_npc_effect_week_5_tableId() const {return 115;};
wchar_t* boss_npc_effect_tooltip_week_1;
wchar_t* boss_npc_effect_tooltip_week_2;
wchar_t* boss_npc_effect_tooltip_week_3;
wchar_t* boss_npc_effect_tooltip_week_4;
wchar_t* boss_npc_effect_tooltip_week_5;
BnsTables::Shared::TableRef boss_npc_effect_icon_week_1;
int boss_npc_effect_icon_week_1_tableId() const {return 183;};
BnsTables::Shared::TableRef boss_npc_effect_icon_week_2;
int boss_npc_effect_icon_week_2_tableId() const {return 183;};
BnsTables::Shared::TableRef boss_npc_effect_icon_week_3;
int boss_npc_effect_icon_week_3_tableId() const {return 183;};
BnsTables::Shared::TableRef boss_npc_effect_icon_week_4;
int boss_npc_effect_icon_week_4_tableId() const {return 183;};
BnsTables::Shared::TableRef boss_npc_effect_icon_week_5;
int boss_npc_effect_icon_week_5_tableId() const {return 183;};
__int16 boss_npc_effect_icon_index_week_1;
__int16 boss_npc_effect_icon_index_week_2;
__int16 boss_npc_effect_icon_index_week_3;
__int16 boss_npc_effect_icon_index_week_4;
__int16 boss_npc_effect_icon_index_week_5;
char Pad2[2];
BnsTables::Shared::TableRef contents_reset;
int contents_reset_tableId() const {return 73;};
bool use_level_first_clear;
signed char use_level_first_clear_next_level;
char Pad3[2];
BnsTables::Shared::TableRef dungeon_id;
int dungeon_id_tableId() const {return 114;};
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
wchar_t* scroll_boss_imageset;
wchar_t* scroll_boss_back_imageset;
__int16 recommend_attack_power_sealed_dungeon;
char Pad4[2];
BnsTables::Shared::TableRef recommend_alias_sealed_dungeon;
int recommend_alias_sealed_dungeon_tableId() const {return 72;};
bool hide_skill_decal;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 4); }
		static __int16 TableId() { return 334; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) sealed_dungeon_modify_RecordPtr // : DrRecordPtr
	{
		sealed_dungeon_modify_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}