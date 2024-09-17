/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct ranking2_tier_Record : DrEl
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
__int32 min_rank[20];
Data::TableRef tier_title[20];
int tier_title_tableId(){return 405;};
wchar_t* tier_image[20];
wchar_t* tier_image_small[20];
wchar_t* gauge_color_conditional[5];
wchar_t* gauge_color_fixed[20];
__int32 gauge_percentage_condition[5];

		static TableVersion Version() { return TableVersion(2, 5); }
		static __int16 TableId() { return 303; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_tier_RecordPtr // : DrRecordPtr
	{
		ranking2_tier_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_tier_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}