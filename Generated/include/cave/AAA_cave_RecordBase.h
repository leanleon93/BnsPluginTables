/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct cave_Record : DrEl
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
Data::TableRef zone[40];
int zone_tableId(){return 443;};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 50; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) cave_RecordPtr // : DrRecordPtr
	{
		cave_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::cave_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}