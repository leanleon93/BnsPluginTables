/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class market_category_2_group_RecordSubType : __int32
    {
		market_category_2_group_record_sub_favorite = 0,
		market_category_2_group_record_sub_world_boss = 1,
		market_category_2_group_record_sub_market_category_2 = 2,
		market_category_2_group_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct market_category_2_group_Record : BnsTables::Shared::DrEl
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
		__int32 sort_no;
bool visible;
char Pad0[3];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 427;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 253; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) market_category_2_group_RecordPtr // : DrRecordPtr
	{
		market_category_2_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}