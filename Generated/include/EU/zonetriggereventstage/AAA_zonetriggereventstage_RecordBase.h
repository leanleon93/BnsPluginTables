/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class zonetriggereventstage_RecordSubType : __int32
    {
		zonetriggereventstage_record_sub_stage_stand_by_classic_field = 0,
		zonetriggereventstage_record_sub_stage_stand_by_guild_battle_field_entrance = 1,
		zonetriggereventstage_record_sub_stage_stand_by_persistant_zone = 2,
		zonetriggereventstage_record_sub_stage_stand_by_instant_zone = 3,
		zonetriggereventstage_record_sub_stage = 4,
		zonetriggereventstage_record_sub_count = 5,
    };
#pragma pack(push, 1)
	struct zonetriggereventstage_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;
signed char zone_mode_set_id;
signed char zone_mode;
signed char branch_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef next_cond[2];
__int32 next_cond_Size() const {return 2;};
int next_cond_tableId() const {return 475;};
signed char next_cond_branch_id[2];
__int32 next_cond_branch_id_Size() const {return 2;};
signed char broadcast_context;
char Pad0[1];
wchar_t* start_stage_kismet;
wchar_t* end_stage_kismet;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 16); }
		static __int16 TableId() { return 476; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonetriggereventstage_RecordPtr // : DrRecordPtr
	{
		zonetriggereventstage_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}