/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct teleport_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool retired;
char Pad0[3];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 434;};
BnsTables::Shared::TableRef teleport_position;
int teleport_position_tableId() const {return 491;};
__int16 distance_from_start_teleport;
char Pad1[2];
__int32 price_percent;
BnsTables::Shared::TableRef description2;
int description2_tableId() const {return 434;};
BnsTables::Shared::TableRef activated_faction;
int activated_faction_tableId() const {return 139;};
bool joined_faction;
signed char required_pc_level;
signed char required_pc_mastery_level;
signed char required_faction_level;
BnsTables::Shared::TableRef ui_preceding_quest;
int ui_preceding_quest_tableId() const {return 306;};
BnsTables::Shared::TableRef required_quest;
int required_quest_tableId() const {return 306;};
bool capital;
signed char teleport_cost_type;
char Pad2[2];
BnsTables::Shared::TableRef party_chat_channel;
int party_chat_channel_tableId() const {return 284;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 2); }
		static __int16 TableId() { return 430; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) teleport_RecordPtr // : DrRecordPtr
	{
		teleport_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}