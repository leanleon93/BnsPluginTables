/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct customizingpreview_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 preview_type;
__int8 preview_value;
__int8 race;
__int8 sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		
		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 93; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingpreview_RecordPtr // : DrRecordPtr
	{
		customizingpreview_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::customizingpreview_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}