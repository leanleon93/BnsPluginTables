/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct battlemessage_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char object_type;
signed char skill_result_type;
signed char effect_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef game_message;
int game_message_tableId() const {return 160;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 31; }
		static __int32 SubType() { return -1; }
		enum class object_type {
			player_attack = 0,
			player_attacked = 1,
			other = 2,
			none_caster = 3,
		};

		enum class skill_result_type {
			hit = 0,
			cri = 1,
			parry = 2,
			pparry = 3,
			counter = 4,
			miss = 5,
			dodge = 6,
			bounce = 7,
			none_skill = 8,
		};

		enum class effect_type {
			none_effect = 0,
			instant_damage = 1,
			attach_damage = 2,
			interval_damage = 3,
			attach_fail_damage = 4,
			detach_damage = 5,
			wall_damage = 6,
			instant_hp = 7,
			interval_hp = 8,
			instant_sp = 9,
			interval_sp = 10,
			instant_sp_damage = 11,
			interval_sp_damage = 12,
			instant_hp_drain = 13,
			instant_sp_drain = 14,
			instant_hp_sp_drain = 15,
			attach = 16,
			attach_fail = 17,
			interval = 18,
			detach = 19,
			exhaustion = 20,
			dead = 21,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battlemessage_RecordPtr // : DrRecordPtr
	{
		battlemessage_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}