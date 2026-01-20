/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct item_transform_recipe_world_limit_Record : BnsTables::Shared::DrEl
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
		signed char publisher;
char Pad0[1];
__int16 version;
wchar_t* alias;
signed char count_type;
char Pad1[3];
__int32 limit_count;
__int64 start_time;
__int64 end_time;
BnsTables::Shared::TableRef item_transform_recipe;
int item_transform_recipe_tableId() const {return 227;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 229; }
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

		enum class count_type {
			none = 0,
			success = 1,
			attempt = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_transform_recipe_world_limit_RecordPtr // : DrRecordPtr
	{
		item_transform_recipe_world_limit_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}