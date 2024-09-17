/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct commonanim_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 anim_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* anim_name;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 61; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) commonanim_RecordPtr // : DrRecordPtr
	{
		commonanim_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::commonanim_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}