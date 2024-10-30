/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skill_train_by_item_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef origin_skill[6];
__int32 origin_skill_Size() const {return 6;};
int origin_skill_tableId() const {return 337;};
BnsTables::Shared::TableRef change_skill[6];
__int32 change_skill_Size() const {return 6;};
int change_skill_tableId() const {return 337;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::TableRef description;
int description_tableId() const {return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 366; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_by_item_RecordPtr // : DrRecordPtr
	{
		skill_train_by_item_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}