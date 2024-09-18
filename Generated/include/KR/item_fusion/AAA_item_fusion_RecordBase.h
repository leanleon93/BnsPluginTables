/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_fusion_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 category;
__int32 score;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef cost_group;
int cost_group_tableId(){return 77;};
BnsTables::Shared::TableRef result_item[80];
int result_item_tableId(){return 195;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 198; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_fusion_RecordPtr // : DrRecordPtr
	{
		item_fusion_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_fusion_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}