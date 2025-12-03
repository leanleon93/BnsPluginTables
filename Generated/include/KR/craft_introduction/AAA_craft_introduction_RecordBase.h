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
		BnsTables::Shared::IconRef title_icon;
BnsTables::Shared::IconRef normal_icon;
BnsTables::Shared::TableRef slogan;
int slogan_tableId() const {return 438;};
BnsTables::Shared::TableRef introduction_description;
int introduction_description_tableId() const {return 438;};
signed char associated_craft[2];
__int32 associated_craft_Size() const {return 2;};
char Pad0[2];
BnsTables::Shared::TableRef representative_product_item[8];
__int32 representative_product_item_Size() const {return 8;};
int representative_product_item_tableId() const {return 203;};
BnsTables::Shared::TableRef representative_product_label[8];
__int32 representative_product_label_Size() const {return 8;};
int representative_product_label_tableId() const {return 438;};
BnsTables::Shared::TableRef special_product_item[4];
__int32 special_product_item_Size() const {return 4;};
int special_product_item_tableId() const {return 203;};
BnsTables::Shared::TableRef special_product_label[4];
__int32 special_product_label_Size() const {return 4;};
int special_product_label_tableId() const {return 438;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 85; }
		static __int32 SubType() { return -1; }
		enum class category {
			none = 0,
			production_type_1 = 1,
			production_type_2 = 2,
			production_type_3 = 3,
			production_type_4 = 4,
			production_type_5 = 5,
			production_type_6 = 6,
			production_type_7 = 7,
			gathering_type_1 = 8,
			gathering_type_2 = 9,
			gathering_type_3 = 10,
			gathering_type_4 = 11,
			gathering_type_5 = 12,
			gathering_type_6 = 13,
			gathering_type_7 = 14,
		};
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