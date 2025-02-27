/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct game_menu_control_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char menu_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char required_level;
signed char required_master_level;
char Pad0[2];
BnsTables::Shared::TableRef required_acquired_and_complete_quest;
int required_acquired_and_complete_quest_tableId() const {return 299;};
BnsTables::Shared::TableRef required_complete_quest;
int required_complete_quest_tableId() const {return 299;};
signed char restrict_gameoption_display_type;
signed char restrict_content_type;
char Pad1[2];
BnsTables::Shared::TableRef notifycenter_message;
int notifycenter_message_tableId() const {return 427;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 1); }
		static __int16 TableId() { return 155; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) game_menu_control_RecordPtr // : DrRecordPtr
	{
		game_menu_control_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}