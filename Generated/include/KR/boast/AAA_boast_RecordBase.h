/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class boast_RecordSubType : __int32
    {
		boast_record_sub_npc_kill = 0,
		boast_record_sub_duel = 1,
		boast_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct boast_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
float result_show_delay_time;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 3); }
		static __int16 TableId() { return 42; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) boast_RecordPtr // : DrRecordPtr
	{
		boast_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}