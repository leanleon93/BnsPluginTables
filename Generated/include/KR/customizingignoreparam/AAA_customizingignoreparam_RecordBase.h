/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct customizingignoreparam_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char sex;
signed char param_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		
		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 94; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingignoreparam_RecordPtr // : DrRecordPtr
	{
		customizingignoreparam_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}