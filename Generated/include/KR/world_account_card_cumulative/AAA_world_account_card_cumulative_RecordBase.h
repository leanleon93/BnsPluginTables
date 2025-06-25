/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct world_account_card_cumulative_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 cumulative_step;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 cumulative_count;
signed char ability[7];
__int32 ability_Size() const {return 7;};
char Pad0[3];
__int32 ability_base_value[7];
__int32 ability_base_value_Size() const {return 7;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 462; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_account_card_cumulative_RecordPtr // : DrRecordPtr
	{
		world_account_card_cumulative_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}