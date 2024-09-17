/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct moveanimtransit_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 before_idle;
__int8 after_idle;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* transit_anim_seq;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 252; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) moveanimtransit_RecordPtr // : DrRecordPtr
	{
		moveanimtransit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::moveanimtransit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}