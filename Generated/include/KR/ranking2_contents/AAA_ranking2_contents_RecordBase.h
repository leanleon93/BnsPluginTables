/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct ranking2_contents_Record : BnsTables::Shared::DrEl
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
signed char contents_type;
signed char player_type;
signed char score_type;
char Pad0[1];
__int32 minimum_score;
wchar_t* contents_banner_img;
BnsTables::Shared::TableRef contents_name;
int contents_name_tableId() const {return 420;};
signed char sort_number;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(10, 0); }
		static __int16 TableId() { return 309; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_contents_RecordPtr // : DrRecordPtr
	{
		ranking2_contents_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}