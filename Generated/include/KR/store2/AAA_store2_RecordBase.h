/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct store2_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::IconRef none_selected_icon;
BnsTables::Shared::TableRef faction;
int faction_tableId(){return 135;};
BnsTables::Shared::TableRef item[127];
int item_tableId(){return 195;};
BnsTables::Shared::TableRef buy_price[127];
int buy_price_tableId(){return 191;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 398; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) store2_RecordPtr // : DrRecordPtr
	{
		store2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::store2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}