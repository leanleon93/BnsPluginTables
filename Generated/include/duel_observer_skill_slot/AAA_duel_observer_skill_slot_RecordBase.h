/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct duel_observer_skill_slot_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 job;
char Pad0[3];
__int32 slot;
Data::TableRef skill3[40];
int skill3_tableId(){return 324;};
wchar_t* ui_action_alias[40];
__int8 ui_view_type;
bool use_ui_context;
bool use_observer_only;
bool use_ui_defence_skill;
bool condition_check;
char Pad1[1];
__int16 condition_check_flag[4];
__int8 condition_check_flag_op;

		static TableVersion Version() { return TableVersion(0, 12); }
		static __int16 TableId() { return 109; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_observer_skill_slot_RecordPtr // : DrRecordPtr
	{
		duel_observer_skill_slot_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_observer_skill_slot_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}