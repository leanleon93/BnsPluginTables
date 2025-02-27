/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct feedback_Record : BnsTables::Shared::DrEl
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
__int32 max_score_except_boss_npc;
signed char boss_npc_kill_count;
char Pad0[3];
BnsTables::Shared::TableRef boss_npc[4];
__int32 boss_npc_Size() const {return 4;};
int boss_npc_tableId() const {return 138;};
bool use_progress_info_ui;
bool use_simple_result_ui;
bool use_combat_signal_ui;
char Pad1[1];
BnsTables::Shared::TableRef attack_damage_rank;
int attack_damage_rank_tableId() const {return 140;};
BnsTables::Shared::TableRef received_damage_rank;
int received_damage_rank_tableId() const {return 140;};
BnsTables::Shared::TableRef attack_response_rank;
int attack_response_rank_tableId() const {return 140;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 5); }
		static __int16 TableId() { return 139; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) feedback_RecordPtr // : DrRecordPtr
	{
		feedback_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}