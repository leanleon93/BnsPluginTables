/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_training_sequence_step_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		signed char sequence_step_type;
char Pad0[3];
__int32 skill[8];
__int32 skill_Size() const {return 8;};
signed char variation_id[8];
__int32 variation_id_Size() const {return 8;};
bool include_inheritance_skill;
bool check_only_cast_skill;
char Pad1[2];
__int32 next_step_interval;
__int32 command_action_input_offset;
BnsTables::Shared::TableRef effect;
int effect_tableId() const {return 118;};
signed char result[2];
__int32 result_Size() const {return 2;};
signed char result_event_type[2];
__int32 result_event_type_Size() const {return 2;};
signed char result_count;
char Pad2[1];
__int16 caster_pass_state;
BnsTables::Shared::TableRef caster_pass_effect;
int caster_pass_effect_tableId() const {return 118;};
__int16 target_pass_state;
signed char target_pass_state_count;
char Pad3[1];
BnsTables::Shared::TableRef target_pass_effect;
int target_pass_effect_tableId() const {return 118;};
signed char target_pass_effect_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 0; }
		static __int32 SubType() { return -1; }
		enum class sequence_step_type {
			skill = 0,
			effect = 1,
		};

		enum class result {
			none = 0,
			hit = 1,
			miss = 2,
			dodge = 3,
			parry = 4,
			perfect_parry = 5,
			bounce = 6,
			counter = 7,
			critical_hit = 8,
			hit_critical_hit = 9,
			back_hit_critical_hit = 10,
			not_hit = 11,
			all = 12,
			hit_critical_hit_parry = 13,
			parry_perfect_parry = 14,
			front_hit_critical_hit = 15,
			parry_perfect_parry_counter = 16,
			parry_perfect_parry_dodge = 17,
			parry_dodge = 18,
		};

		enum class result_event_type {
			none = 0,
			attack = 1,
			attacked = 2,
		};

		enum class caster_pass_state {
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_training_sequence_step_RecordPtr // : DrRecordPtr
	{
		skill_training_sequence_step_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}