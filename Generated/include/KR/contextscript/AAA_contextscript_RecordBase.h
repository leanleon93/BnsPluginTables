/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct contextscript_Record : BnsTables::Shared::DrEl
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
__int8 job;
__int8 job_style[2];
__int8 race;
bool context_simple_mode;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 50); }
		static __int16 TableId() { return 75; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contextscript_RecordPtr // : DrRecordPtr
	{
		contextscript_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contextscript_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}