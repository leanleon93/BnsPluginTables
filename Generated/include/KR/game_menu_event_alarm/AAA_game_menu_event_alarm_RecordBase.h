/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct game_menu_event_alarm_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char event_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool use_event_alarm;
char Pad0[3];
wchar_t* event_alarm_image_normal;
wchar_t* event_alarm_image_active;
BnsTables::Shared::TableRef event_alarm_title;
int event_alarm_title_tableId() const {return 441;};
BnsTables::Shared::TableRef event_alarm_desc;
int event_alarm_desc_tableId() const {return 441;};
BnsTables::Shared::TableRef link_unlocated_store;
int link_unlocated_store_tableId() const {return 451;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 160; }
		static __int32 SubType() { return -1; }
		enum class event_type {
			item_transfrom = 0,
			item_growth = 1,
			item_improvement_option_change = 2,
			glyph_compose = 3,
			card_compose = 4,
			unlocated_shop = 5,
			ranking = 6,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) game_menu_event_alarm_RecordPtr // : DrRecordPtr
	{
		game_menu_event_alarm_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}