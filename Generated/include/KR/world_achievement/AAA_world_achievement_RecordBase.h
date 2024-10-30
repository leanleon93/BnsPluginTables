/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct world_achievement_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
__int16 grade;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* open_date;
__int32 require_contribution;
BnsTables::Shared::TableRef reward_item[4];
__int32 reward_item_Size() const {return 4;};
int reward_item_tableId() const {return 195;};
__int32 reward_item_count[4];
__int32 reward_item_count_Size() const {return 4;};
__int32 accumulate_game_cash;
BnsTables::Shared::TableRef name;
int name_tableId() const {return 420;};
wchar_t* grade_image;
bool is_max_grade;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 452; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_achievement_RecordPtr // : DrRecordPtr
	{
		world_achievement_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}