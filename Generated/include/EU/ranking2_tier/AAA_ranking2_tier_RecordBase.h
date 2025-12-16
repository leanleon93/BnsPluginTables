/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct ranking2_tier_Record : BnsTables::Shared::DrEl
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
__int32 min_score[20];
__int32 min_score_Size() const {return 20;};
__int32 min_rank[20];
__int32 min_rank_Size() const {return 20;};
BnsTables::Shared::TableRef tier_title[20];
__int32 tier_title_Size() const {return 20;};
int tier_title_tableId() const {return 435;};
wchar_t* tier_image[20];
__int32 tier_image_Size() const {return 20;};
wchar_t* tier_image_small[20];
__int32 tier_image_small_Size() const {return 20;};
wchar_t* gauge_color_conditional[5];
__int32 gauge_color_conditional_Size() const {return 5;};
wchar_t* gauge_color_fixed[20];
__int32 gauge_color_fixed_Size() const {return 20;};
__int32 gauge_percentage_condition[5];
__int32 gauge_percentage_condition_Size() const {return 5;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 5); }
		static __int16 TableId() { return 330; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_tier_RecordPtr // : DrRecordPtr
	{
		ranking2_tier_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}