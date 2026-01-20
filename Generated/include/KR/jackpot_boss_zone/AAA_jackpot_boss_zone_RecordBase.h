/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct jackpot_boss_zone_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 486;};
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
__int16 transfer_jackpot_percent;
char Pad0[2];
__int32 boss_max_faction_score;
__int32 spawn_boss_faction_score;
BnsTables::Shared::TableRef boss_npc_faction_1;
int boss_npc_faction_1_tableId() const {return 280;};
BnsTables::Shared::TableRef boss_npc_faction_2;
int boss_npc_faction_2_tableId() const {return 280;};
bool despawn_force_faction_1;
bool respawn_after_despawn_faction_1;
char Pad1[2];
__int32 spawn_delay_faction_1;
bool despawn_force_faction_2;
bool respawn_after_despawn_faction_2;
char Pad2[2];
__int32 spawn_delay_faction_2;
BnsTables::Shared::TableRef attraction_quest[5];
__int32 attraction_quest_Size() const {return 5;};
int attraction_quest_tableId() const {return 310;};
bool ui_filter_attraction_quest_only;
char Pad3[3];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 441;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 441;};
signed char ui_text_grade;
char Pad4[3];
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 235; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jackpot_boss_zone_RecordPtr // : DrRecordPtr
	{
		jackpot_boss_zone_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}