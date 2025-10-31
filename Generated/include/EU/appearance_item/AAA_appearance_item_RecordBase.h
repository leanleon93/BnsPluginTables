/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct appearance_item_Record : BnsTables::Shared::DrEl
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
signed char appearance_type;
char Pad0[3];
wchar_t* hypermove_effect;
wchar_t* hypermove_sound_sprint;
wchar_t* hypermove_sound_jump;
wchar_t* hypermove_sound_glide;
wchar_t* hypermove_sound_boost;
wchar_t* hypermove_sound_dive;
wchar_t* idle_show;
wchar_t* idle_show_simple;
__int32 idle_event_time;
wchar_t* normal_begin_show;
wchar_t* normal_end_show;
wchar_t* nameplate_widget;
wchar_t* balloon_widget;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 11; }
		static __int32 SubType() { return -1; }
		enum class appearance_type {
			Normal = 0,
			Idle = 1,
			Hypermove = 2,
			UI = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) appearance_item_RecordPtr // : DrRecordPtr
	{
		appearance_item_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}