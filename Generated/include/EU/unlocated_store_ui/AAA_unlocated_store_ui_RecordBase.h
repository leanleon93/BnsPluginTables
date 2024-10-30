/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
		std::string_view unlocated_store_type_EnumValue() const {return Get_unlocated_store_type_EnumValue(key.unlocated_store_type);};
wchar_t* title_icon;
BnsTables::Shared::TableRef title_text;
int title_text_tableId() const {return 420;};
wchar_t* button_icon;
BnsTables::Shared::TableRef button_text;
int button_text_tableId() const {return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 431; }
		static __int32 SubType() { return 0; }
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