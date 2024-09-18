/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
		__int8 random_store_type;
char Pad0[3];
BnsTables::Shared::TableRef display_item;
int display_item_tableId(){return 189;};
__int8 draw_group;
__int8 probability_group;
bool new_arrival;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 295; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) random_store_item_display_RecordPtr // : DrRecordPtr
	{
		random_store_item_display_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::random_store_item_display_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}