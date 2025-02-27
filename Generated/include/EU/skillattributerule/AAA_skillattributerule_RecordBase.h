/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skillattributerule_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char attribute;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 block_caster_flag[4];
__int32 block_caster_flag_Size() const {return 4;};
__int16 target_flag[8];
__int32 target_flag_Size() const {return 8;};
signed char dir[8];
__int32 dir_Size() const {return 8;};
signed char auto_skill_result[8];
__int32 auto_skill_result_Size() const {return 8;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 344; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillattributerule_RecordPtr // : DrRecordPtr
	{
		skillattributerule_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}