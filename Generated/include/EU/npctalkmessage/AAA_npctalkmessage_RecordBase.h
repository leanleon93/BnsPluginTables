/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class npctalkmessage_RecordSubType : __int32
    {
		npctalkmessage_record_sub_branch = 0,
		npctalkmessage_record_sub_questmessage = 1,
		npctalkmessage_record_sub_teleport = 2,
		npctalkmessage_record_sub_craft = 3,
		npctalkmessage_record_sub_faction_coin_exchange = 4,
		npctalkmessage_record_sub_store = 5,
		npctalkmessage_record_sub_warehouse = 6,
		npctalkmessage_record_sub_auction = 7,
		npctalkmessage_record_sub_delivery = 8,
		npctalkmessage_record_sub_make_summoned = 9,
		npctalkmessage_record_sub_summoned_beauty_shop = 10,
		npctalkmessage_record_sub_summoned_name_change = 11,
		npctalkmessage_record_sub_create_guild = 12,
		npctalkmessage_record_sub_join_faction = 13,
		npctalkmessage_record_sub_transfer_faction = 14,
		npctalkmessage_record_sub_contribute_guild_reputation = 15,
		npctalkmessage_record_sub_dungeon_progress = 16,
		npctalkmessage_record_sub_select_join_faction = 17,
		npctalkmessage_record_sub_guild_customize = 18,
		npctalkmessage_record_sub_job_change_join = 19,
		npctalkmessage_record_sub_job_change_show = 20,
		npctalkmessage_record_sub_randomoption_reset = 21,
		npctalkmessage_record_sub_count = 22,
    };
#pragma pack(push, 1)
	struct npctalkmessage_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 427;};
BnsTables::Shared::TableRef required_faction;
int required_faction_tableId() const {return 136;};
BnsTables::Shared::TableRef required_complete_quest;
int required_complete_quest_tableId() const {return 299;};
BnsTables::Shared::TableRef step_text[30];
__int32 step_text_Size() const {return 30;};
int step_text_tableId() const {return 427;};
BnsTables::Shared::TableRef step_subtext[30];
__int32 step_subtext_Size() const {return 30;};
int step_subtext_tableId() const {return 427;};
BnsTables::Shared::TableRef step_next[30];
__int32 step_next_Size() const {return 30;};
int step_next_tableId() const {return 427;};
wchar_t* step_kismet[30];
__int32 step_kismet_Size() const {return 30;};
BnsTables::Shared::TableRef step_cinematic[30];
__int32 step_cinematic_Size() const {return 30;};
int step_cinematic_tableId() const {return 57;};
wchar_t* step_show[30];
__int32 step_show_Size() const {return 30;};
wchar_t* step_camera_show[30];
__int32 step_camera_show_Size() const {return 30;};
signed char function_step;
char Pad0[3];
BnsTables::Shared::TableRef end_talk_social;
int end_talk_social_tableId() const {return 389;};
wchar_t* end_talk_sound;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 61); }
		static __int16 TableId() { return 275; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npctalkmessage_RecordPtr // : DrRecordPtr
	{
		npctalkmessage_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}