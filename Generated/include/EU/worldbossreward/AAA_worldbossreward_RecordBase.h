/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct worldbossreward_Record : BnsTables::Shared::DrEl
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
		wchar_t* alias;
__int32 auction_price_contribution_rate[20];
__int32 auction_price_contribution_rate_Size() const {return 20;};
__int32 auction_price_contribution_rank_top[20];
__int32 auction_price_contribution_rank_top_Size() const {return 20;};
__int32 auction_price_contribution_rank_bottom[20];
__int32 auction_price_contribution_rank_bottom_Size() const {return 20;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 3); }
		static __int16 TableId() { return 461; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) worldbossreward_RecordPtr // : DrRecordPtr
	{
		worldbossreward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}