/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct relic_system_Record : DrEl
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
__int8 inventory_size_x;
__int8 inventory_size_y;
__int8 ability[40];
char Pad0[2];
__int32 ability_value_max[40];
__int32 ability_base_value_max[40];

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 312; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) relic_system_RecordPtr // : DrRecordPtr
	{
		relic_system_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::relic_system_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}