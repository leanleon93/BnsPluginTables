/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct unlocated_store_Record : BnsTables::Shared::DrEl
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
signed char publisher;
char Pad0[3];
BnsTables::Shared::TableRef store2;
int store2_tableId() const {return 413;};
bool available_only_with_grade_benefit;
signed char unlocated_store_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 445; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) unlocated_store_RecordPtr // : DrRecordPtr
	{
		unlocated_store_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}