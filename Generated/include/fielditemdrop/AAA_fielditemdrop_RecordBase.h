/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct fielditemdrop_Record : DrEl
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
Data::TableRef fielditem[3];
int fielditem_tableId(){return 137;};
__int8 prob[3];

		static TableVersion Version() { return TableVersion(0, 9); }
		static __int16 TableId() { return 138; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fielditemdrop_RecordPtr // : DrRecordPtr
	{
		fielditemdrop_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fielditemdrop_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}