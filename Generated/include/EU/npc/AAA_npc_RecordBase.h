/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct npc_Record : BnsTables::Shared::DrEl
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
		wchar_t* alias;
wchar_t* name;
wchar_t* title;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 434;};
BnsTables::Shared::TableRef title2;
int title2_tableId() const {return 434;};
BnsTables::Shared::TableRef boss_npc;
int boss_npc_tableId() const {return 46;};
bool soul_npc;
signed char boss_type;
bool write_combat_log;
char Pad0[1];
__int16 radius;
__int16 scale;
__int16 walk_speed;
__int16 run_speed;
signed char neutral_hostile;
bool offensive;
signed char immune_skill_attribute[8];
__int32 immune_skill_attribute_Size() const {return 8;};
__int16 immune_effect_attribute[20];
__int32 immune_effect_attribute_Size() const {return 20;};
__int16 immune_breaker_attribute[8];
__int32 immune_breaker_attribute_Size() const {return 8;};
signed char immune_breaker_count;
char Pad1[1];
__int32 immune_breaker_init_duration;
wchar_t* immune_breaker_show[8];
__int32 immune_breaker_show_Size() const {return 8;};
BnsTables::Shared::TableRef store;
int store_tableId() const {return 414;};
BnsTables::Shared::TableRef store_by_item;
int store_by_item_tableId() const {return 413;};
BnsTables::Shared::TableRef store2[6];
__int32 store2_Size() const {return 6;};
int store2_tableId() const {return 412;};
BnsTables::Shared::TableRef teleport;
int teleport_tableId() const {return 430;};
bool repairer;
signed char production;
bool market;
bool post_office;
bool exchange_faction_score;
char Pad2[1];
__int16 exchange_faction_score_max_faction_level;
signed char exchange_faction_score_multiply_value;
bool join_leave_faction;
bool transfer_faction;
bool depot;
bool guild;
char Pad3[3];
__int32 max_faction_score;
bool enable_co_ownership_pouch;
char Pad4[3];
__int32 reward_faction_score;
signed char peaktime_reward_sun_start_hour;
signed char peaktime_reward_sun_end_hour;
signed char peaktime_reward_mon_start_hour;
signed char peaktime_reward_mon_end_hour;
signed char peaktime_reward_tue_start_hour;
signed char peaktime_reward_tue_end_hour;
signed char peaktime_reward_wed_start_hour;
signed char peaktime_reward_wed_end_hour;
signed char peaktime_reward_thu_start_hour;
signed char peaktime_reward_thu_end_hour;
signed char peaktime_reward_fri_start_hour;
signed char peaktime_reward_fri_end_hour;
signed char peaktime_reward_sat_start_hour;
signed char peaktime_reward_sat_end_hour;
char Pad5[2];
BnsTables::Shared::TableRef contribution_reward;
int contribution_reward_tableId() const {return 78;};
BnsTables::Shared::TableRef contribution_day_reward_sun;
int contribution_day_reward_sun_tableId() const {return 78;};
BnsTables::Shared::TableRef contribution_day_reward_mon;
int contribution_day_reward_mon_tableId() const {return 78;};
BnsTables::Shared::TableRef contribution_day_reward_tue;
int contribution_day_reward_tue_tableId() const {return 78;};
BnsTables::Shared::TableRef contribution_day_reward_wed;
int contribution_day_reward_wed_tableId() const {return 78;};
BnsTables::Shared::TableRef contribution_day_reward_thu;
int contribution_day_reward_thu_tableId() const {return 78;};
BnsTables::Shared::TableRef contribution_day_reward_fri;
int contribution_day_reward_fri_tableId() const {return 78;};
BnsTables::Shared::TableRef contribution_day_reward_sat;
int contribution_day_reward_sat_tableId() const {return 78;};
signed char contribution_peaktime_reward_sun_start_hour;
signed char contribution_peaktime_reward_sun_end_hour;
signed char contribution_peaktime_reward_mon_start_hour;
signed char contribution_peaktime_reward_mon_end_hour;
signed char contribution_peaktime_reward_tue_start_hour;
signed char contribution_peaktime_reward_tue_end_hour;
signed char contribution_peaktime_reward_wed_start_hour;
signed char contribution_peaktime_reward_wed_end_hour;
signed char contribution_peaktime_reward_thu_start_hour;
signed char contribution_peaktime_reward_thu_end_hour;
signed char contribution_peaktime_reward_fri_start_hour;
signed char contribution_peaktime_reward_fri_end_hour;
signed char contribution_peaktime_reward_sat_start_hour;
signed char contribution_peaktime_reward_sat_end_hour;
char Pad6[2];
BnsTables::Shared::TableRef personal_dropped_pouch_reward;
int personal_dropped_pouch_reward_tableId() const {return 339;};
BnsTables::Shared::TableRef personal_dropped_pouch_event_reward;
int personal_dropped_pouch_event_reward_tableId() const {return 339;};
BnsTables::Shared::TableRef personal_dropped_pouch_reward_difficulty_type[3];
__int32 personal_dropped_pouch_reward_difficulty_type_Size() const {return 3;};
int personal_dropped_pouch_reward_difficulty_type_tableId() const {return 339;};
BnsTables::Shared::TableRef reward_sealed_dungeon;
int reward_sealed_dungeon_tableId() const {return 280;};
BnsTables::Shared::TableRef dungeon_challenge_reward;
int dungeon_challenge_reward_tableId() const {return 339;};
BnsTables::Shared::TableRef fielditemdrop;
int fielditemdrop_tableId() const {return 147;};
BnsTables::Shared::TableRef deadbody_fielditemdrop;
int deadbody_fielditemdrop_tableId() const {return 147;};
__int32 deadbody_pickup_duration;
bool burrow;
char Pad7[3];
__int32 manipulate_duration;
wchar_t* caster_manipulate_animname;
wchar_t* target_manipulate_animname;
wchar_t* caster_manipulate_show;
wchar_t* target_manipulate_show;
BnsTables::Shared::TableRef action_name;
int action_name_tableId() const {return 434;};
BnsTables::Shared::TableRef action_desc;
int action_desc_tableId() const {return 434;};
BnsTables::Shared::TableRef manipulate_transit_zone;
int manipulate_transit_zone_tableId() const {return 479;};
signed char forwarding_types[120];
__int32 forwarding_types_Size() const {return 120;};
BnsTables::Shared::TableRef quests[120];
__int32 quests_Size() const {return 120;};
int quests_tableId() const {return 306;};
signed char missions[120];
__int32 missions_Size() const {return 120;};
signed char cases[120];
__int32 cases_Size() const {return 120;};
__int16 case_subtypes[120];
__int32 case_subtypes_Size() const {return 120;};
signed char loot_forwarding_types[8];
__int32 loot_forwarding_types_Size() const {return 8;};
BnsTables::Shared::TableRef loot_quests[8];
__int32 loot_quests_Size() const {return 8;};
int loot_quests_tableId() const {return 306;};
signed char loot_missions[8];
__int32 loot_missions_Size() const {return 8;};
signed char loot_cases[8];
__int32 loot_cases_Size() const {return 8;};
BnsTables::Shared::TableRef loot_item[8];
__int32 loot_item_Size() const {return 8;};
int loot_item_tableId() const {return 202;};
signed char finish_blow_forwarding_types[21];
__int32 finish_blow_forwarding_types_Size() const {return 21;};
char Pad8[3];
BnsTables::Shared::TableRef finish_blow_quests[21];
__int32 finish_blow_quests_Size() const {return 21;};
int finish_blow_quests_tableId() const {return 306;};
signed char finish_blow_missions[21];
__int32 finish_blow_missions_Size() const {return 21;};
signed char finish_blow_cases[21];
__int32 finish_blow_cases_Size() const {return 21;};
char Pad9[2];
float walk_ratescale;
float run_ratescale;
BnsTables::Shared::TableRef appearance;
int appearance_tableId() const {return 87;};
wchar_t* animset;
wchar_t* face_animset;
bool talk;
signed char iconindex;
char Pad10[2];
float mesh_scale;
signed char p_radius;
char Pad11[1];
__int16 name_pos_diff;
__int16 name_pos_stand;
__int16 name_pos_sit;
__int16 name_pos_dead;
char Pad12[2];
wchar_t* start_talk_action;
wchar_t* end_talk_action;
wchar_t* spawn_production;
wchar_t* dead_production;
bool four_leg;
char Pad13[3];
wchar_t* despawn_showdata;
signed char race;
signed char sex;
signed char job;
signed char stance;
signed char level;
signed char mastery_level;
char Pad14[2];
BnsTables::Shared::TableRef faction;
int faction_tableId() const {return 139;};
bool attackable;
bool detect_hiding;
char Pad15[2];
BnsTables::Shared::TableRef default_idle;
int default_idle_tableId() const {return 278;};
bool warfare_boss;
char Pad16[3];
__int64 max_hp;
__int16 max_sp;
__int16 modify_cast_speed_percent;
__int64 hp_regen;
__int32 hp_regen_combat;
__int16 attack_hit_base_percent;
__int16 attack_hit_value;
__int16 attack_pierce_base_percent;
__int16 attack_parry_pierce_percent;
__int16 attack_pierce_value;
__int16 attack_concentrate_value;
__int16 attack_critical_base_percent;
__int16 attack_critical_damage_percent;
__int32 attack_critical_value;
__int32 attack_critical_damage_value;
__int16 defend_critical_base_percent;
__int16 defend_critical_damage_percent;
__int32 defend_critical_value;
__int16 defend_bounce_percent;
__int16 defend_dodge_base_percent;
__int16 defend_dodge_value;
__int16 defend_parry_base_percent;
__int16 defend_parry_value;
__int16 defend_parry_reduce_percent;
__int16 defend_parry_reduce_diff;
__int16 defend_perfect_parry_base_percent;
__int16 defend_perfect_parry_reduce_percent;
__int16 defend_counter_reduce_percent;
__int16 defend_immune_base_percent;
char Pad17[2];
__int32 attack_power_creature_min;
__int32 attack_power_creature_max;
__int32 attack_power_equip_min;
__int32 attack_power_equip_max;
__int32 defend_power_creature_value;
__int32 defend_power_equip_value;
__int16 defend_resist_power_creature_value;
__int16 defend_resist_power_equip_value;
__int16 defend_physical_damage_reduce_percent;
__int16 defend_force_damage_reduce_percent;
__int16 attack_damage_modify_percent;
char Pad18[2];
__int32 attack_damage_modify_diff;
__int16 defend_damage_modify_percent;
char Pad19[2];
__int32 defend_damage_modify_diff;
__int16 defend_miss_base_percent;
__int16 attack_stiff_duration_base_percent;
__int16 attack_stiff_duration_value;
__int16 defend_stiff_duration_base_percent;
__int16 defend_stiff_duration_value;
__int16 cast_duration_base_percent;
__int16 cast_duration_value;
char Pad20[2];
__int32 job_ability_1;
__int32 job_ability_2;
__int16 heal_power_base_percent;
__int16 aoe_defend_base_percent;
__int16 aoe_defend_power_value;
__int16 hate_base_percent;
__int16 hate_power_creature_value;
char Pad21[2];
__int32 abnormal_attack_power_value;
__int16 abnormal_attack_base_percent;
__int16 abnormal_defend_power_value;
__int16 abnormal_defend_base_percent;
char Pad22[2];
__int32 abnormal_attack_power_modify;
__int32 abnormal_defend_power_modify;
__int32 hate_power_modify;
__int32 heal_power_modify;
__int32 aoe_defend_power_modify;
__int32 attack_hit_value_modify;
__int32 attack_critical_value_modify;
__int32 defend_critical_value_modify;
__int32 defend_dodge_value_modify;
__int32 defend_parry_value_modify;
__int32 defend_physical_value_modify;
__int32 defend_force_value_modify;
__int32 attack_stiff_duration_value_modify;
__int32 defend_stiff_duration_value_modify;
__int32 cast_duration_value_modify;
__int32 attack_critical_damage_modify;
__int32 defend_critical_damage_modify;
__int32 attack_pierce_modify;
__int32 attack_parry_pierce_modify;
__int32 defend_parry_reduce_modify;
__int32 attack_perfect_parry_damage_modify;
__int32 defend_perfect_parry_reduce_modify;
__int32 attack_counter_damage_modify;
__int32 defend_counter_reduce_modify;
signed char grade2;
char Pad23[3];
wchar_t* grade_imageset;
BnsTables::Shared::TableRef grade_tooltip_text;
int grade_tooltip_text_tableId() const {return 434;};
signed char boss_ui_type;
signed char boss_group_id;
signed char boss_slot;
bool boss_kill_hide_slot;
BnsTables::Shared::TableRef boss_spawn_message;
int boss_spawn_message_tableId() const {return 159;};
BnsTables::Shared::IconRef boss_icon;
BnsTables::Shared::IconRef boss_aggro_icon;
wchar_t* boss_aggro_indicator;
wchar_t* boss_aggro_twin_indicator;
wchar_t* end_talk_sound;
BnsTables::Shared::TableRef end_talk_social;
int end_talk_social_tableId() const {return 396;};
wchar_t* burrow_scaned_mark;
wchar_t* burrow_visual_effect;
bool use_foot_print;
bool use_water_print;
bool default_visible;
signed char move_type;
signed char size_type;
char Pad24[3];
wchar_t* description;
BnsTables::Shared::TableRef description2;
int description2_tableId() const {return 434;};
BnsTables::Shared::TableRef dying_message;
int dying_message_tableId() const {return 434;};
signed char role_type;
char Pad25[3];
BnsTables::Shared::TableRef die_shout;
int die_shout_tableId() const {return 434;};
signed char race_type;
char Pad26[3];
BnsTables::Shared::TableRef indicator;
int indicator_tableId() const {return 191;};
bool neutral_faction_nameplate_enemy;
char Pad27[3];
BnsTables::Shared::TableRef banned_response[2];
__int32 banned_response_Size() const {return 2;};
int banned_response_tableId() const {return 279;};
BnsTables::Shared::TableRef response[7];
__int32 response_Size() const {return 7;};
int response_tableId() const {return 279;};
BnsTables::Shared::TableRef stand_social[3];
__int32 stand_social_Size() const {return 3;};
int stand_social_tableId() const {return 396;};
__int16 stand_social_rate[3];
__int32 stand_social_rate_Size() const {return 3;};
bool die_knockback;
bool invoke_fx_msg;
bool disable_name_spawn;
bool play_additional_die;
char Pad28[2];
BnsTables::Shared::TableRef summoned_beauty_shop;
int summoned_beauty_shop_tableId() const {return 416;};
BnsTables::Shared::TableRef boast;
int boast_tableId() const {return 42;};
bool always_show_hp;
bool use_map_unit_group;
char Pad29[2];
BnsTables::Shared::TableRef map_unit[2];
__int32 map_unit_Size() const {return 2;};
int map_unit_tableId() const {return 258;};
bool use_immediate_load;
signed char ghost_type;
char Pad30[2];
wchar_t* ghostmode_beyond_start_show;
wchar_t* ghostmode_beyond_end_show;
signed char soul_npc_skill_level;
char Pad31[1];
__int16 boss_challenge_attraction_score;
bool is_mysterious_store;
char Pad32[3];
BnsTables::Shared::TableRef newbiecare;
int newbiecare_tableId() const {return 274;};
__int32 attack_attribute_value;
__int16 attack_attribute_base_percent;
char Pad33[2];
__int32 attack_attribute_modify;
bool hide_nameplate;
char Pad34[1];
__int16 nameplate_height_modify;
__int16 defend_critical_damage_value;
__int16 defend_critical_damage_value_equip;
__int32 attack_abnormal_hit_base_percent;
__int32 attack_abnormal_hit_value;
__int32 attack_abnormal_hit_equip_value;
__int32 defend_abnormal_resistance_base_percent;
__int32 defend_abnormal_resistance_value;
__int32 defend_abnormal_resistance_equip_value;
__int32 attack_abnormal_hit_modify;
__int32 defend_abnormal_resistance_modify;
bool job_change_enter_zone;
bool job_change;
signed char race_type2;
signed char attribute_type;
__int32 fatigability_consume_amount;
__int16 release_contents_group;
bool ignore_optimize;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(8, 0); }
		static __int16 TableId() { return 276; }
		static __int32 SubType() { return -1; }
		enum class boss_type {
			none = 0,
			huge_boss = 1,
			world_boss = 2,
		};

		enum class neutral_hostile {
			offensive = 0,
			fightback = 1,
			neutral = 2,
		};

		enum class immune_skill_attribute {
			none = 0,
			maggi = 1,
			bangyeog = 2,
			twinggigi = 3,
			bangeohaengdong = 4,
			daeswi = 5,
			idong = 6,
			hoepi = 7,
			daun = 8,
			neogbaeg = 9,
			gijeor = 10,
			geurogi = 11,
			gongjung = 12,
			haengdongburga = 13,
			idongburga = 14,
			daundaeeung = 15,
			maggijogeon = 16,
			hoepijogeon = 17,
			chimyeongtajogeon = 18,
			yeongyegi = 19,
			seutaenseu = 20,
			hoebog = 21,
			geijihoebog = 22,
			buhwar = 23,
			jiweon = 24,
			jeugsisijeon = 25,
			kaeseuting = 26,
			gadeubeureikeu = 27,
			barsache = 28,
			barsache2 = 29,
			jeab = 30,
			gwanjeorgi = 31,
			jangag = 32,
			biinganjangag = 33,
			heubgong = 34,
			jeabdaeeung = 35,
			jangagdaeeung = 36,
			heubgongdaeeung = 37,
			haeje = 38,
			dog = 39,
			kurtaim = 40,
			bur = 41,
			eoreum = 42,
			jeongi = 43,
			gigong = 44,
			teurigeo = 45,
			weopeu = 46,
			geungeori = 47,
			weongeori = 48,
			gwangyeog = 49,
			idongganeung = 50,
			demijijon = 51,
			sangtaemyeonyeog = 52,
			wichibaggugi = 53,
			eunsa = 54,
			dobar = 55,
		};

		enum class immune_effect_attribute {
			none = 0,
			hoebog = 1,
			jindeugi = 2,
			bur = 3,
			eunsa = 4,
			geomijur = 5,
			dog = 6,
			eunsin = 7,
			tumyeong = 8,
			gwanggi = 9,
			eoreumgamog = 10,
			dognabang = 11,
			gajesdeurab = 12,
			daun = 13,
			neogbaegdaesi = 14,
			bangeoburga = 15,
			dobar = 16,
			domang = 17,
			idongburga = 18,
			daesiburga = 19,
			gamsog = 20,
			gijeor = 21,
			eoreobuteum = 22,
			haengdongburga = 23,
			churhyeor = 24,
			chiyu = 25,
			eoreum = 26,
			maengdog = 27,
			maggi = 28,
			sogbag = 29,
			jeab = 30,
			wichibaggugi = 31,
			jangagyeongye = 32,
			mujeog = 33,
			meonghaejim = 34,
			apchagi = 35,
			honjeor = 36,
			gwangpoghaejim = 37,
			gongjung = 38,
			geurogi = 39,
			nanmu = 40,
			neogbaeg = 41,
			heubgong = 42,
			kweseuteu_1 = 43,
			kweseuteu_2 = 44,
			kweseuteu_3 = 45,
			kweseuteu_4 = 46,
			kweseuteu_5 = 47,
			daesanggongjung = 48,
			boseu_1 = 49,
			boseu_2 = 50,
			boseu_3 = 51,
			boseudaeswi = 52,
			geurimja = 53,
			jungcheobburga1 = 54,
			jungcheobburga2 = 55,
			jogeonmanjog = 56,
			sohwansadog = 57,
			taengkingjangpan = 58,
			geommag = 59,
			biteu = 60,
			hongog = 61,
			nogjuseog = 62,
			boseujeohang_1 = 63,
			boseujeohang_2 = 64,
			boseujeohang_3 = 65,
			boseujeohang_4 = 66,
			boseujeohang_5 = 67,
			naginjeohang_1 = 68,
			naginjeohang_2 = 69,
			naginjeohang_3 = 70,
			naginjeohang_4 = 71,
			maseong_1 = 72,
			maseong_2 = 73,
			maseong_3 = 74,
			maseong_4 = 75,
			jusurche = 76,
			sour = 77,
			bujeog = 78,
			hwanma = 79,
			bansa = 80,
			NPC_1 = 81,
			NPC_2 = 82,
			NPC_3 = 83,
			NPC_4 = 84,
			NPC_5 = 85,
			NPC_6 = 86,
			NPC_7 = 87,
			NPC_8 = 88,
			NPC_9 = 89,
			NPC_10 = 90,
			naginjeohang_5 = 91,
			naginjeohang_6 = 92,
			naginjeohang_7 = 93,
			naginjeohang_8 = 94,
			keurraeseu_1 = 95,
			keurraeseu_2 = 96,
			keurraeseu_3 = 97,
			keurraeseu_4 = 98,
			keurraeseu_5 = 99,
			keurraeseu_6 = 100,
			keurraeseu_7 = 101,
			keurraeseu_8 = 102,
			keurraeseu_9 = 103,
			keurraeseu_10 = 104,
			keurraeseu_11 = 105,
			keurraeseu_12 = 106,
			keurraeseu_13 = 107,
			keurraeseu_14 = 108,
			keurraeseu_15 = 109,
			keurraeseu_16 = 110,
			keurraeseu_17 = 111,
			keurraeseu_18 = 112,
			keurraeseu_19 = 113,
			keurraeseu_20 = 114,
			keurraeseu_21 = 115,
			keurraeseu_22 = 116,
			keurraeseu_23 = 117,
			keurraeseu_24 = 118,
			keurraeseu_25 = 119,
			keurraeseu_26 = 120,
			keurraeseu_27 = 121,
			keurraeseu_28 = 122,
			keurraeseu_29 = 123,
			keurraeseu_30 = 124,
			keurraeseu_31 = 125,
			keurraeseu_32 = 126,
			keurraeseu_33 = 127,
			keurraeseu_34 = 128,
			keurraeseu_35 = 129,
			keurraeseu_36 = 130,
			keurraeseu_37 = 131,
			keurraeseu_38 = 132,
			keurraeseu_39 = 133,
			keurraeseu_40 = 134,
			keurraeseu_41 = 135,
			keurraeseu_42 = 136,
			keurraeseu_43 = 137,
			keurraeseu_44 = 138,
			keurraeseu_45 = 139,
			keurraeseu_46 = 140,
			keurraeseu_47 = 141,
			keurraeseu_48 = 142,
			keurraeseu_49 = 143,
			keurraeseu_50 = 144,
			keurraeseu_51 = 145,
			keurraeseu_52 = 146,
			keurraeseu_53 = 147,
			keurraeseu_54 = 148,
			keurraeseu_55 = 149,
			keurraeseu_56 = 150,
			keurraeseu_57 = 151,
			keurraeseu_58 = 152,
			keurraeseu_59 = 153,
			keurraeseu_60 = 154,
			aitemjogeon_1 = 155,
			eotaeggeurraideu = 156,
			munyang_1 = 157,
			munyang_2 = 158,
			munyang_3 = 159,
			munyang_4 = 160,
			munyang_5 = 161,
			munyang_6 = 162,
			munyang_7 = 163,
			munyang_8 = 164,
			munyang_9 = 165,
			munyang_10 = 166,
			munyang_11 = 167,
			munyang_12 = 168,
			munyang_13 = 169,
			munyang_14 = 170,
			munyang_15 = 171,
			munyang_16 = 172,
			munyang_17 = 173,
			munyang_18 = 174,
			munyang_19 = 175,
			munyang_20 = 176,
			gimig_1 = 177,
			gimig_2 = 178,
			gimig_3 = 179,
			gimig_4 = 180,
			gimig_5 = 181,
			deonjeonboseu_1 = 182,
			gimig_6 = 183,
			gimig_7 = 184,
			gimig_8 = 185,
			gimig_9 = 186,
			gimig_10 = 187,
			jungcheobburga3 = 188,
		};

		enum class production {
			none = 0,
			production_type_1 = 1,
			production_type_2 = 2,
			production_type_3 = 3,
			production_type_4 = 4,
			production_type_5 = 5,
			production_type_6 = 6,
			production_type_7 = 7,
			gathering_type_1 = 8,
			gathering_type_2 = 9,
			gathering_type_3 = 10,
			gathering_type_4 = 11,
			gathering_type_5 = 12,
			gathering_type_6 = 13,
			gathering_type_7 = 14,
		};

		enum class forwarding_types {
			progress_mission = 0,
			acquire_quest = 1,
			skill_target = 2,
			mission_step_rollback = 3,
		};

		enum class race {
			race_none = 0,
			geon = 1,
			gon = 2,
			rin = 3,
			jin = 4,
			nabbeunmob = 5,
			deonabbeunmob = 6,
			museounmob = 7,
			deomuseounmob = 8,
			deodeomuseounmob = 9,
			goyangi = 10,
			gangrimche = 11,
			aggwi = 12,
		};

		enum class sex {
			sex_none = 0,
			nam = 1,
			yeo = 2,
			jung = 3,
		};

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

		enum class stance {
			stance_none = 0,
			npcgibonjase = 1,
			cheongeomse = 2,
			geomryeongse = 3,
			danta = 4,
			yeongye = 5,
			chesur = 6,
			nabdo = 7,
			gyeonggigong = 8,
			yeongigong = 9,
			ganggigong = 10,
			gweonchongmodeu = 11,
			reoncheomodeu = 12,
			pagoe = 13,
			boho = 14,
			cheorbyeog = 15,
			sohwan = 16,
			gyoran = 17,
			eunsin = 18,
			amsar = 19,
			geomsur = 20,
			eogeom = 21,
			bardo = 22,
			npcjase1 = 23,
			npcjase2 = 24,
			npcjase3 = 25,
			sohwansu_follow = 26,
			sohwansu_command_1 = 27,
			sohwansu_flying = 28,
			jusur = 29,
			gangrim = 30,
			yugweon = 31,
			gigong = 32,
			naengjeong = 33,
			gwanggi = 34,
			janggung = 35,
			jeongryeonggung = 36,
			jjireugi = 37,
			begi = 38,
			cheongroe = 39,
			hyeorroe = 40,
			eogeomse = 41,
			jeongsu = 42,
			yeogsu = 43,
			hansonyeogsu = 44,
			ganiyeonju = 45,
			upeo = 46,
			yeonju = 47,
			ssangweor = 48,
			noesin = 49,
			chimsig = 50,
			yeomje = 51,
			npcjusijase1 = 52,
			npcjusijase2 = 53,
			npcjusijase3 = 54,
		};

		enum class grade2 {
			none = 0,
			boss = 1,
			champion = 2,
			normal = 3,
			follower = 4,
			tool = 5,
			weakest = 6,
			weak = 7,
			regular = 8,
			strong = 9,
		};

		enum class boss_ui_type {
			target = 0,
			list = 1,
		};

		enum class boss_slot {
			none = 0,
			boss1 = 1,
			boss2 = 2,
			boss3 = 3,
			boss4 = 4,
		};

		enum class move_type {
			none = 0,
			static_val = 1,
			ground = 2,
			float_val = 3,
		};

		enum class size_type {
			none = 0,
			small_val = 1,
			regular = 2,
			huge = 3,
		};

		enum class role_type {
			none = 0,
			keeper_inn = 1,
			shop_grocery = 2,
			shop_weapon = 3,
			shop_cloth = 4,
			shop_acc = 5,
			shop_by_item = 6,
			shop_achievement = 7,
			keeper_warp = 8,
			guardian = 9,
			distribution = 10,
			gather_digger = 11,
			gather_farmer = 12,
			gather_fisherman = 13,
			gather_hunter = 14,
			gather_miner = 15,
			gather_gemcolletor = 16,
			gather_lumberjack = 17,
			produce_blacksmith = 18,
			produce_shaman = 19,
			produce_gemmaker = 20,
			produce_accmaker = 21,
			produce_potionmaker = 22,
			produce_cook = 23,
			produce_chinamaker = 24,
			coinshop = 25,
			factionshop = 26,
			faction_exchange = 27,
			broker = 28,
			shop_food = 29,
			shop_beauty = 30,
			depot = 31,
			event = 32,
			randomoption_reset = 33,
		};

		enum class race_type {
			etc = 0,
			jin = 1,
			kun = 2,
			gon = 3,
			lyn = 4,
		};

		enum class ghost_type {
			none = 0,
			basic = 1,
			beyond = 2,
			phase = 3,
		};

		enum class race_type2 {
			none = 0,
			race1 = 1,
			race2 = 2,
			race3 = 3,
			race4 = 4,
			race5 = 5,
			race6 = 6,
			race7 = 7,
		};

		enum class attribute_type {
			none = 0,
			attribute1 = 1,
			attribute2 = 2,
			attribute3 = 3,
			attribute4 = 4,
			attribute5 = 5,
			attribute6 = 6,
			attribute7 = 7,
			attribute8 = 8,
			attribute9 = 9,
			attribute10 = 10,
			attribute11 = 11,
			attribute12 = 12,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npc_RecordPtr // : DrRecordPtr
	{
		npc_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}