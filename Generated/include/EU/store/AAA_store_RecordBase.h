/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct store_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef faction;
int faction_tableId(){return 130;};
__int16 sell_rate;
__int16 buy_rate;
__int16 resell_rate;
char Pad0[2];
BnsTables::Shared::TableRef item[100];
int item_tableId(){return 189;};
__int16 faction_reputation[100];
__int16 faction_level[100];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 8); }
		static __int16 TableId() { return 385; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) store_RecordPtr // : DrRecordPtr
	{
		store_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::store_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}