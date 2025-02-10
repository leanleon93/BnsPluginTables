/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct star_words_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef star_stone_slot[8];
__int32 star_stone_slot_Size() const {return 8;};
int star_stone_slot_tableId() const {return 197;};
BnsTables::Shared::TableRef name2[10];
__int32 name2_Size() const {return 10;};
int name2_tableId() const {return 425;};
BnsTables::Shared::TableRef star_words_desc[10];
__int32 star_words_desc_Size() const {return 10;};
int star_words_desc_tableId() const {return 425;};
BnsTables::Shared::TableRef star_words_condition_event[60];
__int32 star_words_condition_event_Size() const {return 60;};
int star_words_condition_event_tableId() const {return 63;};
__int16 star_words_condition_event_weight[60];
__int32 star_words_condition_event_weight_Size() const {return 60;};
__int32 star_words_condition_event_weight_total;
wchar_t* star_words_condition_event_desc[20];
__int32 star_words_condition_event_desc_Size() const {return 20;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 2); }
		static __int16 TableId() { return 400; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) star_words_RecordPtr // : DrRecordPtr
	{
		star_words_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}