/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct craft_introduction_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view category_EnumValue() const {return Get_category_EnumValue(key.category);};
BnsTables::Shared::IconRef title_icon;
BnsTables::Shared::IconRef normal_icon;
BnsTables::Shared::TableRef slogan;
int slogan_tableId() const {return 420;};
BnsTables::Shared::TableRef introduction_description;
int introduction_description_tableId() const {return 420;};
signed char associated_craft[2];
__int32 associated_craft_Size() const {return 2;};
char Pad0[2];
BnsTables::Shared::TableRef representative_product_item[8];
__int32 representative_product_item_Size() const {return 8;};
int representative_product_item_tableId() const {return 195;};
BnsTables::Shared::TableRef representative_product_label[8];
__int32 representative_product_label_Size() const {return 8;};
int representative_product_label_tableId() const {return 420;};
BnsTables::Shared::TableRef special_product_item[4];
__int32 special_product_item_Size() const {return 4;};
int special_product_item_tableId() const {return 195;};
BnsTables::Shared::TableRef special_product_label[4];
__int32 special_product_label_Size() const {return 4;};
int special_product_label_tableId() const {return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 82; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_introduction_RecordPtr // : DrRecordPtr
	{
		craft_introduction_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}