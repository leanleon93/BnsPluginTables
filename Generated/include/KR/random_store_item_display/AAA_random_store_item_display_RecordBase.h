/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct random_store_item_display_Record : BnsTables::Shared::DrEl
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
		signed char random_store_type;
char Pad0[3];
BnsTables::Shared::TableRef display_item;
int display_item_tableId() const {return 202;};
signed char draw_group;
signed char probability_group;
bool new_arrival;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 322; }
		static __int32 SubType() { return -1; }
		enum class random_store_type {
			none = 0,
			paid = 1,
			free = 2,
		};

		enum class draw_group {
			none = 0,
			premium = 1,
			normal = 2,
		};

		enum class probability_group {
			none = 0,
			rare = 1,
			normal = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) random_store_item_display_RecordPtr // : DrRecordPtr
	{
		random_store_item_display_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}