/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct contentrestriction_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char code;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 require_level;
char Pad0[2];
__int32 require_grade;
__int16 require_level_post_send;
char Pad1[2];
__int32 require_grade_post_send;
bool market_trade;
bool post_send;
bool account_post_send;
bool post_receive;
bool personal_trade;
bool account_inventory_goods_receive;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 68; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contentrestriction_RecordPtr // : DrRecordPtr
	{
		contentrestriction_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}