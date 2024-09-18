/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct appearance_item_Record : BnsTables::Shared::DrEl
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
__int8 appearance_type;
char Pad0[3];
wchar_t* hypermove_effect;
wchar_t* idle_show;
__int32 idle_event_time;
wchar_t* normal_begin_show;
wchar_t* normal_end_show;
wchar_t* nameplate_widget;
wchar_t* balloon_widget;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 11; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) appearance_item_RecordPtr // : DrRecordPtr
	{
		appearance_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::appearance_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}