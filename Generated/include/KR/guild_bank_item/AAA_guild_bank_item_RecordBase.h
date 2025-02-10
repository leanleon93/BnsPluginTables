/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct guild_bank_item_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char bank_item_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef bank_item;
int bank_item_tableId() const {return 197;};
__int16 bank_item_round_lot;
char Pad0[2];
__int64 bank_item_max_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 165; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_bank_item_RecordPtr // : DrRecordPtr
	{
		guild_bank_item_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}