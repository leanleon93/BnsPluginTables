/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct zonearea_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;
__int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::ExplicitTableRef box;
wchar_t* description;
Data::RGB areacolor;
char Pad0[1];
Data::XYZ pos;
float scale_x;
float scale_y;
float scale_z;

		static TableVersion Version() { return TableVersion(0, 55); }
		static __int16 TableId() { return 438; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonearea_RecordPtr // : DrRecordPtr
	{
		zonearea_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonearea_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}