/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct world_account_card_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef item;
int item_tableId(){return 189;};
bool disabled;
char Pad0[1];
__int16 sort_no;
wchar_t* card_image;
wchar_t* card_original_image[4];
BnsTables::Shared::TableRef card_original_image_desc[4];
int card_original_image_desc_tableId(){return 405;};
bool set_card_original_image;
bool special_effect;
__int16 season;
BnsTables::Shared::TableRef expedition[8];
int expedition_tableId(){return 435;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 433; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_account_card_RecordPtr // : DrRecordPtr
	{
		world_account_card_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::world_account_card_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}