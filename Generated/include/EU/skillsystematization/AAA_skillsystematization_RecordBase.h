/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skillsystematization_Record : BnsTables::Shared::DrEl
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
		wchar_t* alias;
signed char systematization;
char Pad0[3];
wchar_t* name;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 435;};
signed char sort_no;
char Pad1[3];
BnsTables::Shared::TableRef group;
int group_tableId() const {return 377;};
BnsTables::Shared::TableRef filter_group;
int filter_group_tableId() const {return 376;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 375; }
		static __int32 SubType() { return -1; }
		enum class systematization {
			none = 0,
			kneel = 1,
			stun = 2,
			knockback = 3,
			down = 4,
			catch_val = 5,
			mount = 6,
			inhalation = 7,
			speeddown = 8,
			midair = 9,
			freezing = 10,
			stiff = 11,
			pull = 12,
			internal_injury = 13,
			flash = 14,
			block_move = 15,
			bleeding = 16,
			swoon = 17,
			immune_projectile = 18,
			immune_CC = 19,
			immune_damage = 20,
			party_buff = 21,
			party_protect = 22,
			perfect_parry = 23,
			counter = 24,
			bounce = 25,
			protect = 26,
			sp_heal = 27,
			hp_heal = 28,
			attackdefence_block = 29,
			defence_block = 30,
			dash_block = 31,
			escape = 32,
			speedup = 33,
			hyper = 34,
			tumbling = 35,
			dash = 36,
			soulmask = 37,
			provocation = 38,
			hate = 39,
			passive = 40,
			summoned = 41,
			projectile = 42,
			defence_pierce = 43,
			bounce_pierce = 44,
			defense_crush = 45,
			union_val = 46,
			link = 47,
			defence = 48,
			attackdefence = 49,
			single_target = 50,
			aoe_target = 51,
			team_buff = 52,
			team_protect = 53,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillsystematization_RecordPtr // : DrRecordPtr
	{
		skillsystematization_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}