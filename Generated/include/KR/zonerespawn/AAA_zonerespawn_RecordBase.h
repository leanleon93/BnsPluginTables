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
int area_tableId() const {return 465;};
BnsTables::Shared::XYZ center;
BnsTables::Shared::TableRef activated_faction[4];
__int32 activated_faction_Size() const {return 4;};
int activated_faction_tableId() const {return 136;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 46); }
		static __int16 TableId() { return 481; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonerespawn_RecordPtr // : DrRecordPtr
	{
		zonerespawn_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}