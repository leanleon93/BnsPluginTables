/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct badge_synthesis_cost_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 score;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef required_item[8];
int required_item_tableId(){return 189;};
__int16 required_item_count[8];
__int32 money_cost;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 28; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) badge_synthesis_cost_RecordPtr // : DrRecordPtr
	{
		badge_synthesis_cost_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::badge_synthesis_cost_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}