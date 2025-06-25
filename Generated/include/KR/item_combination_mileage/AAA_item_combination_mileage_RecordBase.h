/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_combination_mileage_Record : BnsTables::Shared::DrEl
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
		signed char item_type;
signed char item_grade;
char Pad0[2];
BnsTables::Shared::TableRef grade_name;
int grade_name_tableId() const {return 434;};
__int32 mileage_max;
BnsTables::Shared::TableRef reward_item;
int reward_item_tableId() const {return 202;};
__int32 reward_item_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 201; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_combination_mileage_RecordPtr // : DrRecordPtr
	{
		item_combination_mileage_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}