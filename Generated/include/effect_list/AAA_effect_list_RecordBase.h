/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct effect_list_Record : DrEl
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
Data::TableRef effect[20];
int effect_tableId(){return 111;};
__int16 effect_weight[20];
__int32 effect_total_weight;
__int8 effect_total_count;
bool draw_enable;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 113; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) effect_list_RecordPtr // : DrRecordPtr
	{
		effect_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::effect_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}