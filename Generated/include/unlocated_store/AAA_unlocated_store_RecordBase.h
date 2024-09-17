/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct unlocated_store_Record : DrEl
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
Data::TableRef store2;
int store2_tableId(){return 383;};
bool available_only_with_grade_benefit;
__int8 unlocated_store_type;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 415; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) unlocated_store_RecordPtr // : DrRecordPtr
	{
		unlocated_store_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::unlocated_store_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}