/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class fielditemdrop_RecordSubType : __int32
    {
		fielditemdrop_record_sub_npc = 0,
		fielditemdrop_record_sub_env = 1,
		fielditemdrop_record_sub_quest = 2,
		fielditemdrop_record_sub_npc_deadbody = 3,
		fielditemdrop_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct fielditemdrop_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef fielditem[3];
__int32 fielditem_Size() const {return 3;};
int fielditem_tableId() const {return 142;};
signed char prob[3];
__int32 prob_Size() const {return 3;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 143; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fielditemdrop_RecordPtr // : DrRecordPtr
	{
		fielditemdrop_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}