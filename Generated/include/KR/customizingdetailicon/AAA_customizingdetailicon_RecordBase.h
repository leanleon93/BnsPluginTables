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
                signed char race;
signed char sex;
signed char param_index;
char Pad_key_0[1];
__int16 order;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char param_value;
char Pad0[3];
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 188;};
__int16 icon_index;
char Pad1[2];
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 435;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 92; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingdetailicon_RecordPtr // : DrRecordPtr
	{
		customizingdetailicon_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}