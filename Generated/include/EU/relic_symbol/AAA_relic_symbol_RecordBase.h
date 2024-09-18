/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct relic_symbol_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* imageset[9];
bool indexes_1[4];
bool indexes_2[4];
bool indexes_3[4];
bool indexes_4[4];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 310; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) relic_symbol_RecordPtr // : DrRecordPtr
	{
		relic_symbol_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::relic_symbol_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}