/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct fishing_paste_Record : DrEl
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
Data::TableRef item;
int item_tableId(){return 189;};
bool use_auto_fishing;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 146; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishing_paste_RecordPtr // : DrRecordPtr
	{
		fishing_paste_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fishing_paste_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}