/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct acquire_route_list_Record : DrEl
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
Data::TableRef acquire_route[10];
int acquire_route_tableId(){return 8;};
Data::TableRef acquire_route_full[100];
int acquire_route_full_tableId(){return 8;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 9; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) acquire_route_list_RecordPtr // : DrRecordPtr
	{
		acquire_route_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::acquire_route_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}