/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct contentsjournalrecommenditem_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 weapon_recommend_score;
__int32 necklace_recommend_score;
__int32 earring_recommend_score;
__int32 ring_recommend_score;
__int32 bracelet_recommend_score;
__int32 belt_recommend_score;
__int32 gloves_recommend_score;
__int32 soul_1_recommend_score;
__int32 soul_2_recommend_score;
__int32 pet_recommend_score;
__int32 rune_1_recommend_score;
__int32 rune_2_recommend_score;
__int32 nova_recommend_score;
__int32 skill_stone_1_recommend_score;
__int32 skill_stone_2_recommend_score;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 74; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contentsjournalrecommenditem_RecordPtr // : DrRecordPtr
	{
		contentsjournalrecommenditem_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}