/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct faction_level_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 reputation;
BnsTables::Shared::TableRef grade_name[2];
__int32 grade_name_Size() const {return 2;};
int grade_name_tableId() const {return 426;};
__int32 max_faction_score;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 137; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) faction_level_RecordPtr // : DrRecordPtr
	{
		faction_level_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}