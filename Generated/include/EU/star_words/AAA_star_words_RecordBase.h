/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 420;};
signed char equip_type[10];
__int32 equip_type_Size() const {return 10;};
char Pad0[2];
BnsTables::Shared::TableRef star_stone_slot[8];
__int32 star_stone_slot_Size() const {return 8;};
int star_stone_slot_tableId() const {return 195;};
BnsTables::Shared::TableRef star_words_condition_event[10];
__int32 star_words_condition_event_Size() const {return 10;};
int star_words_condition_event_tableId() const {return 63;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 4); }
		static __int16 TableId() { return 395; }
		static __int32 SubType() { return 0; }
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