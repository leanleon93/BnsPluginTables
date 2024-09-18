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
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 rank_type;
char Pad0[3];
__int32 rank_score[10];
BnsTables::Shared::TableRef rank_title[10];
int rank_title_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 1); }
		static __int16 TableId() { return 139; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) feedback_rank_RecordPtr // : DrRecordPtr
	{
		feedback_rank_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::feedback_rank_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}