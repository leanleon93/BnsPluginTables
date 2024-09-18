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
                __int8 category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::IconRef title_icon;
BnsTables::Shared::IconRef normal_icon;
BnsTables::Shared::TableRef slogan;
int slogan_tableId(){return 420;};
BnsTables::Shared::TableRef introduction_description;
int introduction_description_tableId(){return 420;};
__int8 associated_craft[2];
char Pad0[2];
BnsTables::Shared::TableRef representative_product_item[8];
int representative_product_item_tableId(){return 195;};
BnsTables::Shared::TableRef representative_product_label[8];
int representative_product_label_tableId(){return 420;};
BnsTables::Shared::TableRef special_product_item[4];
int special_product_item_tableId(){return 195;};
BnsTables::Shared::TableRef special_product_label[4];
int special_product_label_tableId(){return 420;};

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
		//__unaligned __declspec(align(1)) const Data::craft_introduction_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}