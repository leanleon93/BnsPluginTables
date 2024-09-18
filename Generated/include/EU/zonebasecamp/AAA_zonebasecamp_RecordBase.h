/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct zonebasecamp_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef area;
int area_tableId(){return 438;};
BnsTables::Shared::XYZ center;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 439; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonebasecamp_RecordPtr // : DrRecordPtr
	{
		zonebasecamp_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonebasecamp_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}