/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct acquire_route_Record : DrEl
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
__int8 category;
char Pad0[3];
Data::TableRef route_text[5];
int route_text_tableId(){return 405;};
Data::ExplicitTableRef route_ref[5];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 8; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) acquire_route_RecordPtr // : DrRecordPtr
	{
		acquire_route_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::acquire_route_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}