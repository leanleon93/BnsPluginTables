/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct extract_skill_train_by_item_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef skill_train_by_item;
int skill_train_by_item_tableId() const {return 387;};
BnsTables::Shared::TableRef skill_train_by_item_extract_cost_group[8];
__int32 skill_train_by_item_extract_cost_group_Size() const {return 8;};
int skill_train_by_item_extract_cost_group_tableId() const {return 80;};
BnsTables::Shared::TableRef extract_skill_train_by_item;
int extract_skill_train_by_item_tableId() const {return 204;};
bool is_default_extact_skill_train_by_item;
bool disable_seal_transmitted_equipment;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 138; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) extract_skill_train_by_item_RecordPtr // : DrRecordPtr
	{
		extract_skill_train_by_item_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}