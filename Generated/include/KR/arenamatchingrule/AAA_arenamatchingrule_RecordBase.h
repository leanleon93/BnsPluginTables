/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct arenamatchingrule_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		
		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 10); }
		static __int16 TableId() { return 12; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) arenamatchingrule_RecordPtr // : DrRecordPtr
	{
		arenamatchingrule_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::arenamatchingrule_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}