/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct custom_dress_design_cost_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char item_type;
signed char customize_id;
signed char resource_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view item_type_EnumValue() const {return Get_item_type_EnumValue(key.item_type);};
wchar_t* alias;
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 182;};
__int16 icon_index;
char Pad0[2];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 420;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 420;};
__int32 order;
bool usable;
bool reset_design;
char Pad1[2];
BnsTables::Shared::TableRef required_item[3];
__int32 required_item_Size() const {return 3;};
int required_item_tableId() const {return 195;};
__int16 required_item_count[3];
__int32 required_item_count_Size() const {return 3;};
char Pad2[2];
__int32 required_money_cost;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 86; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) custom_dress_design_cost_RecordPtr // : DrRecordPtr
	{
		custom_dress_design_cost_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}