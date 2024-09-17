/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct jackpot_boss_zone_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef zone;
int zone_tableId(){return 443;};
Data::TableRef group;
int group_tableId(){return 16;};
__int16 transfer_jackpot_percent;
char Pad0[2];
__int32 boss_max_faction_score;
__int32 spawn_boss_faction_score;
Data::TableRef boss_npc_faction_1;
int boss_npc_faction_1_tableId(){return 255;};
Data::TableRef boss_npc_faction_2;
int boss_npc_faction_2_tableId(){return 255;};
bool despawn_force_faction_1;
bool respawn_after_despawn_faction_1;
char Pad1[2];
__int32 spawn_delay_faction_1;
bool despawn_force_faction_2;
bool respawn_after_despawn_faction_2;
char Pad2[2];
__int32 spawn_delay_faction_2;
Data::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad3[3];
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
__int8 ui_text_grade;
char Pad4[3];
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 217; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jackpot_boss_zone_RecordPtr // : DrRecordPtr
	{
		jackpot_boss_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::jackpot_boss_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}