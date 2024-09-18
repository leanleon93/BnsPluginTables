/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct icontexture_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* icon_texture;
__int16 icon_width;
__int16 icon_height;
__int16 texture_width;
__int16 texture_height;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 8); }
		static __int16 TableId() { return 178; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) icontexture_RecordPtr // : DrRecordPtr
	{
		icontexture_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::icontexture_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}