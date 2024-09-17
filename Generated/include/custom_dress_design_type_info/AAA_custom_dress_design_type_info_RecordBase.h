/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct custom_dress_design_type_info_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 item_type;
__int8 customize_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 design_type;
__int8 customize_category;
char Pad0[2];
Data::TableRef price_ref;
int price_ref_tableId(){return 86;};
__int8 min_value;
__int8 max_value;
char Pad1[2];
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 86; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) custom_dress_design_type_info_RecordPtr // : DrRecordPtr
	{
		custom_dress_design_type_info_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::custom_dress_design_type_info_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}