/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class party_search_shortcut_RecordSubType : __int32
    {
		party_search_shortcut_record_sub_teleport = 0,
		party_search_shortcut_record_sub_custom = 1,
		party_search_shortcut_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct party_search_shortcut_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef title;
int title_tableId() const {return 454;};
BnsTables::Shared::TableRef mouseover_tooltip;
int mouseover_tooltip_tableId() const {return 454;};
wchar_t* button_widget_bp;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 296; }
		static __int32 SubType() { return -1; }
		enum class custom_type {
			battle_field = 0,
			time_limit_field_square = 1,
			yg_wave_dungeon = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) party_search_shortcut_RecordPtr // : DrRecordPtr
	{
		party_search_shortcut_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}