/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct constellation_Record : DrEl
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
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef description;
int description_tableId(){return 405;};
__int8 star_count;
char Pad0[3];
wchar_t* widget_name;

		static TableVersion Version() { return TableVersion(2, 2); }
		static __int16 TableId() { return 63; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) constellation_RecordPtr // : DrRecordPtr
	{
		constellation_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::constellation_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}