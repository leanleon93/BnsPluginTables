/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_stage_number_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 stage_number;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef stage_number_name;
int stage_number_name_tableId() const {return 427;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 221; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_stage_number_RecordPtr // : DrRecordPtr
	{
		item_stage_number_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}