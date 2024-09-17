/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct customizingdesignerpreset_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 index;
__int8 race;
__int8 sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
__int8 param8[92];
char Pad0[2];
Data::TableRef desc;
int desc_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 6); }
		static __int16 TableId() { return 88; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingdesignerpreset_RecordPtr // : DrRecordPtr
	{
		customizingdesignerpreset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::customizingdesignerpreset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}