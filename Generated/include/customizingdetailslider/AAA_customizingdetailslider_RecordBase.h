/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct customizingdetailslider_Record : DrEl
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
		__int8 min_value;
__int8 max_value;
__int8 step;
__int8 desc_type;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 90; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingdetailslider_RecordPtr // : DrRecordPtr
	{
		customizingdetailslider_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::customizingdetailslider_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}