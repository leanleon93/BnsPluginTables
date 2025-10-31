/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct expand_inventory_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char inventory_type;
char Pad_key_0[1];
__int16 inventory_size;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char level;
signed char desirable_expand_level;
char Pad0[2];
__int32 money;
signed char charge_type;
signed char expand_size;
char Pad1[2];
BnsTables::Shared::TableRef required_item;
int required_item_tableId() const {return 202;};
signed char required_item_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 132; }
		static __int32 SubType() { return -1; }
		enum class inventory_type {
			inventory = 0,
			depository = 1,
			depository_2 = 2,
			wardrobe = 3,
			premium_depository = 4,
		};

		enum class charge_type {
			item = 0,
			money = 1,
			item_or_money = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) expand_inventory_RecordPtr // : DrRecordPtr
	{
		expand_inventory_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}