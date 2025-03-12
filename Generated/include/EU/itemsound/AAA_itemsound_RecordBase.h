/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct itemsound_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 item_id;
wchar_t* name;
signed char item_type;
char Pad0[3];
wchar_t* item_drop_sound;
wchar_t* item_move_sound;
wchar_t* item_equip_sound;
wchar_t* item_use_sound;
wchar_t* item_get_sound;
wchar_t* fielditem_drop_sound;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 219; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemsound_RecordPtr // : DrRecordPtr
	{
		itemsound_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}