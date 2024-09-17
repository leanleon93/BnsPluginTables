/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct zonetriggereventstage_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;
__int8 zone_mode_set_id;
__int8 zone_mode;
__int8 branch_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef next_cond[2];
int next_cond_tableId(){return 457;};
__int8 next_cond_branch_id[2];
__int8 broadcast_context;
char Pad0[1];
wchar_t* start_stage_kismet;
wchar_t* end_stage_kismet;

		static TableVersion Version() { return TableVersion(0, 16); }
		static __int16 TableId() { return 458; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonetriggereventstage_RecordPtr // : DrRecordPtr
	{
		zonetriggereventstage_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonetriggereventstage_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}