/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct craft_introduction_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::IconRef title_icon;
Data::IconRef normal_icon;
Data::TableRef slogan;
int slogan_tableId(){return 405;};
Data::TableRef introduction_description;
int introduction_description_tableId(){return 405;};
__int8 associated_craft[2];
char Pad0[2];
Data::TableRef representative_product_item[8];
int representative_product_item_tableId(){return 189;};
Data::TableRef representative_product_label[8];
int representative_product_label_tableId(){return 405;};
Data::TableRef special_product_item[4];
int special_product_item_tableId(){return 189;};
Data::TableRef special_product_label[4];
int special_product_label_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 81; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_introduction_RecordPtr // : DrRecordPtr
	{
		craft_introduction_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::craft_introduction_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}