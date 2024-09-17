/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct customizingdetailicon_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;
__int8 sex;
__int8 param_index;
__int8 order;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 param_value;
char Pad0[3];
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad1[2];
Data::TableRef desc;
int desc_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 6); }
		static __int16 TableId() { return 89; }
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