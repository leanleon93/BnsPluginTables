/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct war_field_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef main_zone;
int main_zone_tableId() const {return 478;};
BnsTables::Shared::TableRef battle_zone[10];
__int32 battle_zone_Size() const {return 10;};
int battle_zone_tableId() const {return 478;};
BnsTables::Shared::TableRef field_break_zone[2];
__int32 field_break_zone_Size() const {return 2;};
int field_break_zone_tableId() const {return 478;};
BnsTables::Shared::TableRef field_break_boss_zone;
int field_break_boss_zone_tableId() const {return 478;};
signed char required_level;
signed char required_mastery_level;
char Pad0[2];
BnsTables::Shared::TableRef required_preceding_quest[3];
__int32 required_preceding_quest_Size() const {return 3;};
int required_preceding_quest_tableId() const {return 306;};
signed char required_preceding_quest_check;
char Pad1[3];
BnsTables::Shared::TableRef field_break_zone_imprint_effect;
int field_break_zone_imprint_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef field_break_zone_imprint_env[2];
__int32 field_break_zone_imprint_env_Size() const {return 2;};
int field_break_zone_imprint_env_tableId() const {return 481;};
BnsTables::Shared::TableRef boss_battle_zone_entrance_effect;
int boss_battle_zone_entrance_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
BnsTables::Shared::TableRef finish_pc_respawn;
int finish_pc_respawn_tableId() const {return 487;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 452; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) war_field_RecordPtr // : DrRecordPtr
	{
		war_field_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}