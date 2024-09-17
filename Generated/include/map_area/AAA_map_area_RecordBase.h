/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct map_area_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name2;
int name2_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 236; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) map_area_RecordPtr // : DrRecordPtr
	{
		map_area_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::map_area_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}