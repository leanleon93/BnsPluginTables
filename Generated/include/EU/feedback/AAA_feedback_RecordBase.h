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
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 max_score_except_boss_npc;
__int8 boss_npc_kill_count;
char Pad0[3];
BnsTables::Shared::TableRef boss_npc[4];
int boss_npc_tableId(){return 132;};
bool use_progress_info_ui;
bool use_simple_result_ui;
bool use_combat_signal_ui;
char Pad1[1];
BnsTables::Shared::TableRef attack_damage_rank;
int attack_damage_rank_tableId(){return 134;};
BnsTables::Shared::TableRef received_damage_rank;
int received_damage_rank_tableId(){return 134;};
BnsTables::Shared::TableRef attack_response_rank;
int attack_response_rank_tableId(){return 134;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 4); }
		static __int16 TableId() { return 133; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) feedback_RecordPtr // : DrRecordPtr
	{
		feedback_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::feedback_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}