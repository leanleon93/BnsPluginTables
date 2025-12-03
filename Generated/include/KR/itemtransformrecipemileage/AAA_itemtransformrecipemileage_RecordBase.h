/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itemtransformrecipemileage_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char slot;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
char Pad0[1];
__int16 version;
signed char acquire_mileage_type;
signed char save_point;
char Pad1[2];
BnsTables::Shared::TableRef check_success_item;
int check_success_item_tableId() const {return 203;};
BnsTables::Shared::TableRef success_reward_item;
int success_reward_item_tableId() const {return 203;};
signed char success_reward_item_count;
signed char reward_max;
char Pad2[2];
BnsTables::Shared::TableRef item_transform_recipe;
int item_transform_recipe_tableId() const {return 227;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 228; }
		static __int32 SubType() { return -1; }
		enum class publisher {
			NONE = 0,
			NCK = 1,
			NCA = 2,
			NCJ = 3,
			NCT = 4,
			INV = 5,
			TX = 6,
			NCK_NEO_GOLD = 7,
		};

		enum class acquire_mileage_type {
			none = 0,
			transform_success = 1,
			transform_fail = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemtransformrecipemileage_RecordPtr // : DrRecordPtr
	{
		itemtransformrecipemileage_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}