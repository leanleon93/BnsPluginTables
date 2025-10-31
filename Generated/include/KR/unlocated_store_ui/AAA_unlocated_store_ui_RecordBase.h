/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct unlocated_store_ui_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char unlocated_store_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* title_icon;
BnsTables::Shared::TableRef title_text;
int title_text_tableId() const {return 435;};
wchar_t* button_icon;
BnsTables::Shared::TableRef button_text;
int button_text_tableId() const {return 435;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 446; }
		static __int32 SubType() { return -1; }
		enum class unlocated_store_type {
			unlocated_none = 0,
			unlocated_store = 1,
			account_store = 2,
			soul_boost_store_1 = 3,
			soul_boost_store_2 = 4,
			soul_boost_store_3 = 5,
			soul_boost_store_4 = 6,
			soul_boost_store_5 = 7,
			soul_boost_store_6 = 8,
			event_store = 9,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) unlocated_store_ui_RecordPtr // : DrRecordPtr
	{
		unlocated_store_ui_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}