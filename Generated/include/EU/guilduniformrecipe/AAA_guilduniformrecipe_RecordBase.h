/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct guilduniformrecipe_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 recipe_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef required_item[2];
__int32 required_item_Size() const {return 2;};
int required_item_tableId() const {return 197;};
__int32 required_item_count[2];
__int32 required_item_count_Size() const {return 2;};
bool required_item_is_bm[2];
__int32 required_item_is_bm_Size() const {return 2;};
char Pad0[2];
__int32 bank_money;
BnsTables::Shared::TableRef bank_required_item[5];
__int32 bank_required_item_Size() const {return 5;};
int bank_required_item_tableId() const {return 197;};
__int32 bank_required_item_count[5];
__int32 bank_required_item_count_Size() const {return 5;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 178; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformrecipe_RecordPtr // : DrRecordPtr
	{
		guilduniformrecipe_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}