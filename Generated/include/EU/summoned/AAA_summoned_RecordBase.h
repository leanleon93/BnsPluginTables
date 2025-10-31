/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct summoned_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 id;
signed char sex;
signed char summoned_type;
signed char brain_type;
char Pad0[1];
__int16 combat_follow_distance;
__int16 far_event_distance;
signed char far_event_action_type;
char Pad1[1];
__int16 radius;
bool trace_master_skill_target;
char Pad2[3];
BnsTables::Shared::TableRef summoned_sequence;
int summoned_sequence_tableId() const {return 424;};
__int32 seq_skill[30];
__int32 seq_skill_Size() const {return 30;};
__int32 spawn_skill_id;
signed char immune_skill_attribute[4];
__int32 immune_skill_attribute_Size() const {return 4;};
__int16 immune_effect_attribute[8];
__int32 immune_effect_attribute_Size() const {return 8;};
signed char stance;
char Pad3[3];
__int32 lifetime_duration;
__int16 max_speed_near_master;
__int16 min_distance_to_lerp_speed;
__int16 max_distance_to_lerp_speed;
__int16 speed;
bool use_customized_appearance;
char Pad4[3];
BnsTables::Shared::TableRef appearance;
int appearance_tableId() const {return 87;};
wchar_t* animset;
BnsTables::Shared::TableRef spawn_social;
int spawn_social_tableId() const {return 396;};
BnsTables::Shared::TableRef respawn_in_social;
int respawn_in_social_tableId() const {return 396;};
BnsTables::Shared::TableRef respawn_out_social;
int respawn_out_social_tableId() const {return 396;};
wchar_t* spawn_show;
wchar_t* despawn_show;
wchar_t* combat_side_player_continuance_show;
wchar_t* combat_side_friend_continuance_show;
wchar_t* combat_side_enemy_continuance_show;
BnsTables::Shared::IconRef icon;
bool ui_show_buff_list;
bool ui_show_nameplate;
bool ui_show_summoned_stat;
bool ui_enable_pc_tooltip;
float mapunit_width;
float mapunit_height;
wchar_t* mapunit_imageset;
float mapunit_outsight_width;
float mapunit_outsight_height;
wchar_t* mapunit_outsight_imageset;
BnsTables::Shared::TableRef fixed_name;
int fixed_name_tableId() const {return 434;};
BnsTables::Shared::TableRef nameplate_title_state_normal;
int nameplate_title_state_normal_tableId() const {return 434;};
BnsTables::Shared::TableRef nameplate_title_state_duel_other_team;
int nameplate_title_state_duel_other_team_tableId() const {return 434;};
BnsTables::Shared::TableRef nameplate_name_state_anonymity;
int nameplate_name_state_anonymity_tableId() const {return 434;};
BnsTables::Shared::TableRef nameplate_name_state_duel_other_team;
int nameplate_name_state_duel_other_team_tableId() const {return 434;};
float term_sequence_range_sim_check;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 417; }
		static __int32 SubType() { return -1; }
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

		enum class sex {
			sex_none = 0,
			nam = 1,
			yeo = 2,
			jung = 3,
		};

		enum class summoned_type {
			normal = 0,
			ethereal = 1,
		};

		enum class brain_type {
			normal = 0,
			combat_follow = 1,
			fixed = 2,
		};

		enum class far_event_action_type {
			none = 0,
			recall = 1,
			despawn = 2,
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summoned_RecordPtr // : DrRecordPtr
	{
		summoned_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}