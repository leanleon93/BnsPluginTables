/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itemcategory_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 game_category_3;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view game_category_3_EnumValue() const {return Get_game_category_3_EnumValue(key.game_category_3);};
__int16 sort_order;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 192; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemcategory_RecordPtr // : DrRecordPtr
	{
		itemcategory_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}