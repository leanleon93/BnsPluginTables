/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct random_distribution_Record : BnsTables::Shared::DrEl
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
__int16 weight[101];
__int32 weight_Size() const {return 101;};
char Pad0[2];
__int32 total_weight;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 317; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) random_distribution_RecordPtr // : DrRecordPtr
	{
		random_distribution_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}