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
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 faction_check_type;
char Pad0[3];
BnsTables::Shared::TableRef faction[2];
int faction_tableId(){return 130;};
BnsTables::Shared::TableRef required_complete_quest;
int required_complete_quest_tableId(){return 283;};
__int8 faction_level_check_type;
char Pad1[3];
BnsTables::Shared::TableRef talk_message;
int talk_message_tableId(){return 260;};
BnsTables::Shared::TableRef indicator_social;
int indicator_social_tableId(){return 181;};
BnsTables::Shared::TableRef approach_social;
int approach_social_tableId(){return 367;};
BnsTables::Shared::TableRef idle;
int idle_tableId(){return 179;};
bool idle_visible;
char Pad2[3];
BnsTables::Shared::TableRef idle_start;
int idle_start_tableId(){return 367;};
BnsTables::Shared::TableRef idle_end;
int idle_end_tableId(){return 367;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 258; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npcresponse_RecordPtr // : DrRecordPtr
	{
		npcresponse_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::npcresponse_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}