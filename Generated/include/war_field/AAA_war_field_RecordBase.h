/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct war_field_Record : DrEl
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
Data::TableRef main_zone;
int main_zone_tableId(){return 443;};
Data::TableRef battle_zone[10];
int battle_zone_tableId(){return 443;};
Data::TableRef field_break_zone[2];
int field_break_zone_tableId(){return 443;};
Data::TableRef field_break_boss_zone;
int field_break_boss_zone_tableId(){return 443;};
__int8 required_level;
__int8 required_mastery_level;
char Pad0[2];
Data::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
char Pad1[3];
Data::TableRef field_break_zone_imprint_effect;
int field_break_zone_imprint_effect_tableId(){return 111;};
Data::TableRef field_break_zone_imprint_env[2];
int field_break_zone_imprint_env_tableId(){return 446;};
Data::TableRef boss_battle_zone_entrance_effect;
int boss_battle_zone_entrance_effect_tableId(){return 111;};
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef finish_pc_respawn;
int finish_pc_respawn_tableId(){return 452;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 423; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) war_field_RecordPtr // : DrRecordPtr
	{
		war_field_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::war_field_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}