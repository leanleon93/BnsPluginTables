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
                __int8 race;
__int8 sex;
__int8 param_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		
		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 92; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingignoreparam_RecordPtr // : DrRecordPtr
	{
		customizingignoreparam_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::customizingignoreparam_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}