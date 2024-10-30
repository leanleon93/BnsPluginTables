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
int faction_tableId() const {return 135;};
BnsTables::Shared::TableRef required_complete_quest;
int required_complete_quest_tableId() const {return 294;};
signed char faction_level_check_type;
char Pad1[3];
BnsTables::Shared::TableRef talk_message;
int talk_message_tableId() const {return 270;};
BnsTables::Shared::TableRef indicator_social;
int indicator_social_tableId() const {return 185;};
BnsTables::Shared::TableRef approach_social;
int approach_social_tableId() const {return 382;};
BnsTables::Shared::TableRef idle;
int idle_tableId() const {return 183;};
bool idle_visible;
char Pad2[3];
BnsTables::Shared::TableRef idle_start;
int idle_start_tableId() const {return 382;};
BnsTables::Shared::TableRef idle_end;
int idle_end_tableId() const {return 382;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 268; }
		static __int32 SubType() { return 0; }
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