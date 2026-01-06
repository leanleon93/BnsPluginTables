/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct contextscript_result_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		signed char control_mode;
signed char key_status;
char Pad0[2];
__int32 context[3];
__int32 context_Size() const {return 3;};
__int32 bns_context[3];
__int32 bns_context_Size() const {return 3;};
__int32 special[2];
__int32 special_Size() const {return 2;};
__int32 stance;
__int32 skillbar[12];
__int32 skillbar_Size() const {return 12;};
__int32 cmd_key_up;
__int32 cmd_key_down;
__int32 cmd_key_left;
__int32 cmd_key_right;
__int32 cmd_key_double_left;
__int32 cmd_key_double_right;
__int32 extra_skillbar[5];
__int32 extra_skillbar_Size() const {return 5;};
signed char stance_ui_effect;
signed char context_ui_effect;
signed char skillbar_ui_effect;
signed char special_ui_effect;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 0; }
		static __int32 SubType() { return -1; }
		enum class control_mode {
			classic = 0,
			bns = 1,
		};

		enum class key_status {
			press = 0,
			unpress = 1,
		};

		enum class stance_ui_effect {
			none = 0,
			key_change = 1,
			combo = 2,
			event = 3,
			immune_break = 4,
			combo_highlight = 5,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contextscript_result_RecordPtr // : DrRecordPtr
	{
		contextscript_result_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}