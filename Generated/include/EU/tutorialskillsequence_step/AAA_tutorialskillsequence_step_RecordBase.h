/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct tutorialskillsequence_step_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		signed char sequence_step_type;
char Pad0[3];
__int32 skill[20];
__int32 skill_Size() const {return 20;};
bool check_parent_skill;
signed char result[2];
__int32 result_Size() const {return 2;};
signed char result_event_type[2];
__int32 result_event_type_Size() const {return 2;};
char Pad1[1];
__int16 caster_fail_state;
BnsTables::Shared::TableRef caster_fail_effect;
int caster_fail_effect_tableId() const {return 118;};
__int16 caster_pass_state;
__int16 target_pass_state;
signed char target_pass_state_count;
char Pad2[3];
BnsTables::Shared::TableRef target_pass_effect;
int target_pass_effect_tableId() const {return 118;};
signed char target_pass_effect_count;
bool check_only_cast_skill;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 529; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) tutorialskillsequence_step_RecordPtr // : DrRecordPtr
	{
		tutorialskillsequence_step_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}