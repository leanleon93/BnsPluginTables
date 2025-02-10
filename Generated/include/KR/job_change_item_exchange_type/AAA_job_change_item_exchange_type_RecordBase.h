/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct job_change_item_exchange_type_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char item_exchange_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char condition;
char Pad0[3];
wchar_t* icon;
BnsTables::Shared::TableRef name_text;
int name_text_tableId() const {return 425;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 229; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_item_exchange_type_RecordPtr // : DrRecordPtr
	{
		job_change_item_exchange_type_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}