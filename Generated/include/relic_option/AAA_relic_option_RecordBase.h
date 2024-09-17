/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct relic_option_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 ability[60];
__int32 ability_value_min[60];
__int32 ability_value_max[60];
__int32 ability_value_base_min[60];
__int32 ability_value_base_max[60];
__int32 enhance_ability_value_min[60];
__int32 enhance_ability_value_max[60];

		static TableVersion Version() { return TableVersion(5, 0); }
		static __int16 TableId() { return 308; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) relic_option_RecordPtr // : DrRecordPtr
	{
		relic_option_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::relic_option_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}