/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct summonedbeautyshop_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef beauty_item[120];
int beauty_item_tableId(){return 394;};
__int16 sell_rate;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 387; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summonedbeautyshop_RecordPtr // : DrRecordPtr
	{
		summonedbeautyshop_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summonedbeautyshop_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}