/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct ui_highlight_step_Record : BnsTables::Shared::DrEl
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
wchar_t* widget_tag;
signed char action;
char Pad0[3];
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 454;};
wchar_t* widget_bp_path;
wchar_t* animation_name;
float offset_position_x;
float offset_position_y;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 465; }
		static __int32 SubType() { return -1; }
		enum class action {
			none = 0,
			click = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ui_highlight_step_RecordPtr // : DrRecordPtr
	{
		ui_highlight_step_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}