/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct zonearea_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::ExplicitTableRef box;
wchar_t* description;
BnsTables::Shared::RGB areacolor;
char Pad0[1];
BnsTables::Shared::XYZ pos;
float scale_x;
float scale_y;
float scale_z;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 55); }
		static __int16 TableId() { return 456; }
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