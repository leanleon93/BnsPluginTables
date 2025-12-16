/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct npcresponse_Record : BnsTables::Shared::DrEl
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
signed char faction_check_type;
char Pad0[3];
BnsTables::Shared::TableRef faction[2];
__int32 faction_Size() const {return 2;};
int faction_tableId() const {return 139;};
BnsTables::Shared::TableRef required_complete_quest;
int required_complete_quest_tableId() const {return 307;};
signed char faction_level_check_type;
char Pad1[3];
BnsTables::Shared::TableRef talk_message;
int talk_message_tableId() const {return 282;};
BnsTables::Shared::TableRef indicator_social;
int indicator_social_tableId() const {return 191;};
BnsTables::Shared::TableRef approach_social;
int approach_social_tableId() const {return 397;};
BnsTables::Shared::TableRef idle;
int idle_tableId() const {return 189;};
bool idle_visible;
char Pad2[3];
BnsTables::Shared::TableRef idle_start;
int idle_start_tableId() const {return 397;};
BnsTables::Shared::TableRef idle_end;
int idle_end_tableId() const {return 397;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 280; }
		static __int32 SubType() { return -1; }
		enum class faction_check_type {
			is = 0,
			is_not = 1,
			is_none = 2,
		};

		enum class faction_level_check_type {
			none = 0,
			check_for_success = 1,
			check_for_fail = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npcresponse_RecordPtr // : DrRecordPtr
	{
		npcresponse_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}