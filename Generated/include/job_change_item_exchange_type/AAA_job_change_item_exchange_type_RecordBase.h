/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct job_change_item_exchange_type_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 item_exchange_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 condition;
char Pad0[3];
wchar_t* icon;
Data::TableRef name_text;
int name_text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 220; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_item_exchange_type_RecordPtr // : DrRecordPtr
	{
		job_change_item_exchange_type_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_change_item_exchange_type_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}