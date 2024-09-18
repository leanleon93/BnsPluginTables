/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct summoneddesignerpreset_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 index;
__int8 race;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId(){return 182;};
__int16 icon_index;
__int8 face;
__int8 body;
__int8 eye_color;
__int8 eye;
__int8 body_color;
__int8 body_shape;
__int8 decal;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 404; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summoneddesignerpreset_RecordPtr // : DrRecordPtr
	{
		summoneddesignerpreset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summoneddesignerpreset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}