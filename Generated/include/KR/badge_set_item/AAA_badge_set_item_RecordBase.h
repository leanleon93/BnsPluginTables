/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct badge_set_item_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 score;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef effect[2];
__int32 effect_Size() const {return 2;};
int effect_tableId() const {return 115;};
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 427;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 27; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) badge_set_item_RecordPtr // : DrRecordPtr
	{
		badge_set_item_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}