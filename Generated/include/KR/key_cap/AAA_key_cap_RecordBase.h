/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct key_cap_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 key_code;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name;
int name_tableId() const {return 425;};
BnsTables::Shared::TableRef short_name;
int short_name_tableId() const {return 425;};
BnsTables::Shared::TableRef image;
int image_tableId() const {return 425;};
BnsTables::Shared::IconRef icon;
wchar_t* scroll_imageset;
float scroll_imageset_scale;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 13); }
		static __int16 TableId() { return 239; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) key_cap_RecordPtr // : DrRecordPtr
	{
		key_cap_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}