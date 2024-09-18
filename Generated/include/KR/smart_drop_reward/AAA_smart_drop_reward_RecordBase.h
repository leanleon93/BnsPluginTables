/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct smart_drop_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef item[50];
int item_tableId(){return 195;};
__int8 item_total_count;
char Pad0[1];
__int16 common_pouch_drop_rate;
__int16 personal_pouch_drop_rate;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 2); }
		static __int16 TableId() { return 381; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) smart_drop_reward_RecordPtr // : DrRecordPtr
	{
		smart_drop_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::smart_drop_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}