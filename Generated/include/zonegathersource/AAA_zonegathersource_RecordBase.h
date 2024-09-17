/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct zonegathersource_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;
__int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::XYZ pos;
Data::TableRef gather_source;
int gather_source_tableId(){return 152;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 450; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonegathersource_RecordPtr // : DrRecordPtr
	{
		zonegathersource_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonegathersource_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}