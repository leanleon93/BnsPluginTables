/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct relic_system_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char inventory_size_x;
signed char inventory_size_y;
signed char ability[40];
__int32 ability_Size() const {return 40;};
char Pad0[2];
__int32 ability_value_max[40];
__int32 ability_value_max_Size() const {return 40;};
__int32 ability_base_value_max[40];
__int32 ability_base_value_max_Size() const {return 40;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 338; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) relic_system_RecordPtr // : DrRecordPtr
	{
		relic_system_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}