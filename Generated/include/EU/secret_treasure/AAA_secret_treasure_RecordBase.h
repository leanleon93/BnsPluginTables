/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct secret_treasure_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef item;
int item_tableId(){return 189;};
__int32 usable_duration;
bool do_not_use;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 321; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) secret_treasure_RecordPtr // : DrRecordPtr
	{
		secret_treasure_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::secret_treasure_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}