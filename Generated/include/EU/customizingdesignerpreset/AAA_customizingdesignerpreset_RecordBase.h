/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct customizingdesignerpreset_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 index;
signed char race;
signed char sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 184;};
__int16 icon_index;
signed char param8[96];
__int32 param8_Size() const {return 96;};
char Pad0[2];
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 427;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 89; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingdesignerpreset_RecordPtr // : DrRecordPtr
	{
		customizingdesignerpreset_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}