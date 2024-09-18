/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skillattributerule_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 attribute;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 block_caster_flag[4];
__int16 target_flag[8];
__int8 dir[8];
__int8 auto_skill_result[8];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 339; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillattributerule_RecordPtr // : DrRecordPtr
	{
		skillattributerule_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillattributerule_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}