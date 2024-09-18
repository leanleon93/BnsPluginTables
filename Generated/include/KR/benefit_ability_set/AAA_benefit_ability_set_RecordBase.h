/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct benefit_ability_set_Record : BnsTables::Shared::DrEl
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
		__int8 ability[4];
__int32 ability_value[4];
__int32 ability_base_value[4];
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 38; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) benefit_ability_set_RecordPtr // : DrRecordPtr
	{
		benefit_ability_set_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::benefit_ability_set_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}