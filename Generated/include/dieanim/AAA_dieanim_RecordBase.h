/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct dieanim_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 idle_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* die_anim;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 96; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) dieanim_RecordPtr // : DrRecordPtr
	{
		dieanim_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::dieanim_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}