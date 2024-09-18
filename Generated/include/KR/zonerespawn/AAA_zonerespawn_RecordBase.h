/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct zonerespawn_Record : BnsTables::Shared::DrEl
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
int area_tableId(){return 456;};
BnsTables::Shared::XYZ center;
BnsTables::Shared::TableRef activated_faction[4];
int activated_faction_tableId(){return 135;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 46); }
		static __int16 TableId() { return 471; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonerespawn_RecordPtr // : DrRecordPtr
	{
		zonerespawn_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonerespawn_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}