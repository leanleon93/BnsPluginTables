/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct petition_faq_list_Record : DrEl
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
		wchar_t* title;
Data::TextRef contents;
bool new_faq;
bool hot_faq;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 276; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) petition_faq_list_RecordPtr // : DrRecordPtr
	{
		petition_faq_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::petition_faq_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}