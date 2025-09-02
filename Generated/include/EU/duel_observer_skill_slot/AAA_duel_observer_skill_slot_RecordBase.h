/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct duel_observer_skill_slot_Record : BnsTables::Shared::DrEl
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
		signed char job;
char Pad0[3];
__int32 slot;
BnsTables::Shared::TableRef skill3[40];
__int32 skill3_Size() const {return 40;};
int skill3_tableId() const {return 349;};
wchar_t* ui_action_alias[40];
__int32 ui_action_alias_Size() const {return 40;};
signed char ui_view_type;
bool use_ui_context;
bool use_observer_only;
bool use_ui_defence_skill;
bool condition_check;
char Pad1[1];
__int16 condition_check_flag[4];
__int32 condition_check_flag_Size() const {return 4;};
signed char condition_check_flag_op;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 12); }
		static __int16 TableId() { return 116; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_observer_skill_slot_RecordPtr // : DrRecordPtr
	{
		duel_observer_skill_slot_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}