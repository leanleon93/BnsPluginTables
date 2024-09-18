/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct zonecellattribute_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef zone;
int zone_tableId(){return 461;};
__int8 pos_count;
char Pad0[3];
__int32 pos_x[20];
__int32 pos_y[20];
__int32 pos_z_start;
__int32 pos_z_end;
__int8 cell_attribute;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 459; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonecellattribute_RecordPtr // : DrRecordPtr
	{
		zonecellattribute_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonecellattribute_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}