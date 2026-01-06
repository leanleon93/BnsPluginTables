/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct auto_combat_skill_cast_condition_Record : BnsTables::Shared::DrEl
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
signed char check_hp_percent_target_type;
char Pad0[1];
__int16 check_hp_percent;
signed char check_hp_percent_op;
char Pad1[1];
__int16 check_caster_success_effect_flag[4];
__int32 check_caster_success_effect_flag_Size() const {return 4;};
signed char check_caster_success_effect_flag_op;
char Pad2[1];
__int16 check_caster_fail_effect_flag[4];
__int32 check_caster_fail_effect_flag_Size() const {return 4;};
signed char check_caster_fail_effect_flag_op;
char Pad3[1];
__int16 check_caster_success_effect_attribute[4];
__int32 check_caster_success_effect_attribute_Size() const {return 4;};
signed char check_caster_success_effect_attribute_op;
char Pad4[1];
__int16 check_caster_fail_effect_attribute[4];
__int32 check_caster_fail_effect_attribute_Size() const {return 4;};
signed char check_caster_fail_effect_attribute_op;
char Pad5[1];
__int16 check_target_success_effect_flag[4];
__int32 check_target_success_effect_flag_Size() const {return 4;};
signed char check_target_success_effect_flag_op;
char Pad6[1];
__int16 check_target_fail_effect_flag[4];
__int32 check_target_fail_effect_flag_Size() const {return 4;};
signed char check_target_fail_effect_flag_op;
char Pad7[1];
__int16 check_target_success_effect_attribute[4];
__int32 check_target_success_effect_attribute_Size() const {return 4;};
signed char check_target_success_effect_attribute_op;
char Pad8[1];
__int16 check_target_fail_effect_attribute[4];
__int32 check_target_fail_effect_attribute_Size() const {return 4;};
signed char check_target_fail_effect_attribute_op;
char Pad9[1];
__int16 check_summoned_success_effect_flag[4];
__int32 check_summoned_success_effect_flag_Size() const {return 4;};
signed char check_summoned_success_effect_flag_op;
char Pad10[1];
__int16 check_summoned_fail_effect_flag[4];
__int32 check_summoned_fail_effect_flag_Size() const {return 4;};
signed char check_summoned_fail_effect_flag_op;
char Pad11[1];
__int16 check_summoned_success_effect_attribute[4];
__int32 check_summoned_success_effect_attribute_Size() const {return 4;};
signed char check_summoned_success_effect_attribute_op;
char Pad12[1];
__int16 check_summoned_fail_effect_attribute[4];
__int32 check_summoned_fail_effect_attribute_Size() const {return 4;};
signed char check_summoned_fail_effect_attribute_op;
char Pad13[3];
__int32 check_caster_recycle_skill_id[4];
__int32 check_caster_recycle_skill_id_Size() const {return 4;};
signed char check_caster_recycle_skill_variation_id[4];
__int32 check_caster_recycle_skill_variation_id_Size() const {return 4;};
signed char check_caster_recycle_skill_op;
signed char check_target_npc_grade2;
signed char check_target_npc_grade2_op;
signed char check_target_distance_target_type;
__int16 check_target_distance;
signed char check_target_distance_op;
signed char check_around_target_type;
__int16 check_around_enemy_count;
bool check_around_enemy_targeting;
char Pad14[1];
__int16 check_around_range;
signed char check_around_op;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 22; }
		static __int32 SubType() { return -1; }
		enum class check_around_target_type {
			caster = 0,
			target = 1,
			summoned = 2,
		};

		enum class check_around_op {
			eq = 0,
			neq = 1,
			gt = 2,
			ge = 3,
			lt = 4,
			le = 5,
		};

		enum class check_caster_fail_effect_flag {
			none = 0,
			stun = 1,
			airdash = 2,
			knockback = 3,
			bind_phantom = 4,
			link = 5,
			detection = 6,
			internal_injury = 7,
			immediately_exec = 8,
			concentration = 9,
			infinity_shot = 10,
			down = 11,
			swoon = 12,
			defence = 13,
			kneel = 14,
			provocation = 15,
			midair_1 = 16,
			midair_2 = 17,
			midair_3 = 18,
			frostbite = 19,
			magnetic_seal = 20,
			fast_freezing = 21,
			rupture = 22,
			impregnability = 23,
			prickblood = 24,
			wildfire_1 = 25,
			wildfire_2 = 26,
			wildfire_3 = 27,
			hide = 28,
			burrow = 29,
			smokescreen = 30,
			embers = 31,
			poison = 32,
			applied_poison = 33,
			spider_web = 34,
			time_bomb = 35,
			defence_block = 36,
			dash_block = 37,
			dexterity = 38,
			soulblade_1 = 39,
			soulblade_2 = 40,
			soulblade_3 = 41,
			joint = 42,
			flydragon = 43,
			landdragon = 44,
			silverweb_1 = 45,
			silverweb_2 = 46,
			justguard = 47,
			force_flag_1 = 48,
			force_flag_2 = 49,
			force_flag_3 = 50,
			catchshield = 51,
			poundshort = 52,
			axechopshort = 53,
			swingstrikeshort = 54,
			chilblain = 55,
			frontdown = 56,
			bleeding = 57,
			npc_state_1 = 58,
			npc_state_2 = 59,
			npc_state_3 = 60,
			npc_state_4 = 61,
			npc_state_5 = 62,
			npc_state_6 = 63,
			npc_state_7 = 64,
			npc_state_8 = 65,
			hardwall_break = 66,
			react_link = 67,
			counter = 68,
			Shadow = 69,
			Shuriken = 70,
			Instantkick = 71,
			Hyperkick = 72,
			Saver = 73,
			HeartStab = 74,
			LeafDodge = 75,
			DragonKick = 76,
			BurstBlow = 77,
			Blood = 78,
			BloodFullStack = 79,
			Poison2 = 80,
			Poison2FullStack = 81,
			TankingDrain = 82,
			EmberFullStack = 83,
			PoisonFullStack = 84,
			FireBit = 85,
			FireBitFullStack = 86,
			IceBit = 87,
			Hole = 88,
			HoleFullStack = 89,
			Bubble = 90,
			Swallow = 91,
			FireBit2 = 92,
			IceBit2 = 93,
			IceBitFullStack = 94,
			FireWall1 = 95,
			FireWall2 = 96,
			FireWall3 = 97,
			FireWall4 = 98,
			HighKick = 99,
			Abdomen = 100,
			ShortBurst = 101,
			MartialFullHit = 102,
			Smash = 103,
			Hole1 = 104,
			Hole2 = 105,
			Hole3 = 106,
			TargetHole1 = 107,
			TargetHole2 = 108,
			TargetHole3 = 109,
			Hornet = 110,
			MorningGlory = 111,
			cannot_resurrect = 112,
			enable_guild_battle_field = 113,
			Immune_link = 114,
			GhostX0 = 115,
			GhostX1 = 116,
			GhostX2 = 117,
			GhostX3 = 118,
			Thornbus = 119,
			BloodBurst = 120,
			AdventMark1 = 121,
			AdventMark2 = 122,
			HyperMove = 123,
			Talisman = 124,
			Spector01 = 125,
			Spector02 = 126,
			Spector03 = 127,
			Phantomsoul = 128,
			BlueSky = 129,
			EgoAutoParry = 130,
			Pierce = 131,
			burn = 132,
			AttackGlide = 133,
			SecondGaugeStopped = 134,
			BigBossJump = 135,
			BigBossState_1 = 136,
			JobSkillFlag_1 = 137,
			JobSkillFlag_2 = 138,
			JobSkillFlag_3 = 139,
			JobSkillFlag_4 = 140,
			JobSkillFlag_5 = 141,
			JobSkillFlag_6 = 142,
			JobSkillFlag_7 = 143,
			JobSkillFlag_8 = 144,
			JobSkillFlag_9 = 145,
			JobSkillFlag_10 = 146,
			JobSkillFlag_11 = 147,
			JobSkillFlag_12 = 148,
			JobSkillFlag_13 = 149,
			JobSkillFlag_14 = 150,
			JobSkillFlag_15 = 151,
			JobSkillFlag_16 = 152,
			JobSkillFlag_17 = 153,
			JobSkillFlag_18 = 154,
			JobSkillFlag_19 = 155,
			JobSkillFlag_20 = 156,
			JobSkillFlag_21 = 157,
			JobSkillFlag_22 = 158,
			JobSkillFlag_23 = 159,
			JobSkillFlag_24 = 160,
			JobSkillFlag_25 = 161,
			JobSkillFlag_26 = 162,
			JobSkillFlag_27 = 163,
			JobSkillFlag_28 = 164,
			JobSkillFlag_29 = 165,
			JobSkillFlag_30 = 166,
			JobSkillFlag_31 = 167,
			JobSkillFlag_32 = 168,
			JobSkillFlag_33 = 169,
			JobSkillFlag_34 = 170,
			JobSkillFlag_35 = 171,
			JobSkillFlag_36 = 172,
			JobSkillFlag_37 = 173,
			JobSkillFlag_38 = 174,
			JobSkillFlag_39 = 175,
			JobSkillFlag_40 = 176,
			JobSkillFlag_41 = 177,
			JobSkillFlag_42 = 178,
			JobSkillFlag_43 = 179,
			JobSkillFlag_44 = 180,
			JobSkillFlag_45 = 181,
			JobSkillFlag_46 = 182,
			JobSkillFlag_47 = 183,
			JobSkillFlag_48 = 184,
			JobSkillFlag_49 = 185,
			JobSkillFlag_50 = 186,
			JobSkillFlag_51 = 187,
			JobSkillFlag_52 = 188,
			JobSkillFlag_53 = 189,
			JobSkillFlag_54 = 190,
			JobSkillFlag_55 = 191,
			JobSkillFlag_56 = 192,
			npc_skill_1 = 193,
			npc_skill_2 = 194,
			npc_skill_3 = 195,
			npc_skill_4 = 196,
			npc_skill_5 = 197,
			npc_skill_6 = 198,
			npc_skill_7 = 199,
			npc_skill_8 = 200,
			npc_skill_9 = 201,
			npc_skill_10 = 202,
			npc_skill_11 = 203,
			npc_skill_12 = 204,
			stun_miss = 205,
			down_miss = 206,
			Struggle = 207,
			boutiquefree = 208,
			tumbling_block = 209,
			PeaceArea = 210,
			perfect_dodged = 211,
			kneel_miss = 212,
			glyph_1 = 213,
			glyph_2 = 214,
			glyph_3 = 215,
			glyph_4 = 216,
			glyph_5 = 217,
			glyph_6 = 218,
			glyph_7 = 219,
			glyph_8 = 220,
			glyph_9 = 221,
			glyph_10 = 222,
			glyph_11 = 223,
			glyph_12 = 224,
			glyph_13 = 225,
			glyph_14 = 226,
			glyph_15 = 227,
			glyph_16 = 228,
			glyph_17 = 229,
			glyph_18 = 230,
			glyph_19 = 231,
			glyph_20 = 232,
			Break_1 = 233,
			Break_2 = 234,
			Break_3 = 235,
			condition_event_1 = 236,
			condition_event_2 = 237,
			condition_event_3 = 238,
			condition_event_4 = 239,
			condition_event_5 = 240,
			condition_event_6 = 241,
			condition_event_7 = 242,
			condition_event_8 = 243,
			condition_event_9 = 244,
			condition_event_10 = 245,
			linked = 246,
		};

		enum class check_caster_recycle_skill_op {
			or_val = 0,
			and_val = 1,
		};

		enum class check_caster_fail_effect_attribute {
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

		enum class check_target_npc_grade2 {
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) auto_combat_skill_cast_condition_RecordPtr // : DrRecordPtr
	{
		auto_combat_skill_cast_condition_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}