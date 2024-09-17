/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct ranking2_contents_Record : DrEl
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
__int8 contents_type;
__int8 player_type;
__int8 score_type;
char Pad0[1];
__int32 minimum_score;
wchar_t* contents_banner_img;
Data::TableRef contents_name;
int contents_name_tableId(){return 405;};
__int8 sort_number;

		static TableVersion Version() { return TableVersion(9, 1); }
		static __int16 TableId() { return 296; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_contents_RecordPtr // : DrRecordPtr
	{
		ranking2_contents_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_contents_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}