/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class collecting_RecordSubType : __int32
    {
		collecting_record_sub_closet = 0,
		collecting_record_sub_count = 1,
    };
#pragma pack(push, 1)
	struct collecting_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef name;
int name_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 61; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) collecting_RecordPtr // : DrRecordPtr
	{
		collecting_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::collecting_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}