/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::UnkFlag subject;
Data::UnkFlag target;
Data::UnkFlag subject2;
Data::UnkFlag target2;
Data::TableRef description;
int description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(3, 1); }
		static __int16 TableId() { return 141; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) filter_RecordPtr // : DrRecordPtr
	{
		filter_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::filter_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}