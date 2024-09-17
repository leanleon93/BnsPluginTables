/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct key_cap_Record : DrEl
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
		Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef short_name;
int short_name_tableId(){return 405;};
Data::TableRef image;
int image_tableId(){return 405;};
Data::IconRef icon;
wchar_t* scroll_imageset;
float scroll_imageset_scale;

		static TableVersion Version() { return TableVersion(0, 13); }
		static __int16 TableId() { return 230; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) key_cap_RecordPtr // : DrRecordPtr
	{
		key_cap_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::key_cap_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}