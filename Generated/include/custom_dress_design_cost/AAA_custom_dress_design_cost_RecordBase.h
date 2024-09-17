/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct custom_dress_design_cost_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 item_type;
__int8 customize_id;
__int8 resource_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad0[2];
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
__int32 order;
bool usable;
bool reset_design;
char Pad1[2];
Data::TableRef required_item[3];
int required_item_tableId(){return 189;};
__int16 required_item_count[3];
char Pad2[2];
__int32 required_money_cost;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 85; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) custom_dress_design_cost_RecordPtr // : DrRecordPtr
	{
		custom_dress_design_cost_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::custom_dress_design_cost_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}