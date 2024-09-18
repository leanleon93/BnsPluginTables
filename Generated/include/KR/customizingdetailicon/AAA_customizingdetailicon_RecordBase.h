/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct customizingdetailicon_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;
__int8 sex;
__int8 param_index;
__int16 order;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 param_value;
char Pad0[3];
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId(){return 182;};
__int16 icon_index;
char Pad1[2];
BnsTables::Shared::TableRef desc;
int desc_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 90; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingdetailicon_RecordPtr // : DrRecordPtr
	{
		customizingdetailicon_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::customizingdetailicon_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}