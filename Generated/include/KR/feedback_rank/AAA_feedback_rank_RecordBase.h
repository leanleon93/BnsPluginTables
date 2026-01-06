/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct feedback_rank_Record : BnsTables::Shared::DrEl
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
signed char rank_type;
char Pad0[3];
__int32 rank_score[10];
__int32 rank_score_Size() const {return 10;};
BnsTables::Shared::TableRef rank_title[10];
__int32 rank_title_Size() const {return 10;};
int rank_title_tableId() const {return 435;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 143; }
		static __int32 SubType() { return -1; }
		enum class rank_type {
			none = 0,
			attack_damage = 1,
			received_damage = 2,
			attack_response = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) feedback_rank_RecordPtr // : DrRecordPtr
	{
		feedback_rank_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}