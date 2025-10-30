/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct contextscript_condition_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		signed char field;
signed char job_style;
char Pad0[2];
__int32 skill;
__int32 variation_id;
__int16 combination_key_command[2];
__int32 combination_key_command_Size() const {return 2;};
bool skip_condition_target_check;
bool skip_condition_move_check;
bool skip_condition_link_check;
char Pad1[1];
__int16 immune_breaker_attribute;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 499; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contextscript_condition_RecordPtr // : DrRecordPtr
	{
		contextscript_condition_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}