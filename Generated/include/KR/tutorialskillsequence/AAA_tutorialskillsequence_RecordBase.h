/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct tutorialskillsequence_Record : BnsTables::Shared::DrEl
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

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 427; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) tutorialskillsequence_RecordPtr // : DrRecordPtr
	{
		tutorialskillsequence_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::tutorialskillsequence_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}