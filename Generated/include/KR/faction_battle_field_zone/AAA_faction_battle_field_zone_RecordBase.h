/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct faction_battle_field_zone_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 470;};
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
bool ui_filter_attraction_quest_only;
char Pad0[3];
BnsTables::Shared::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId() const {return 427;};
BnsTables::Shared::TableRef attraction_quest[10];
__int32 attraction_quest_Size() const {return 10;};
int attraction_quest_tableId() const {return 299;};
signed char required_level;
signed char required_faction_level;
char Pad1[2];
BnsTables::Shared::TableRef faction_battle_field_zone_name2;
int faction_battle_field_zone_name2_tableId() const {return 427;};
BnsTables::Shared::TableRef faction_battle_field_zone_desc;
int faction_battle_field_zone_desc_tableId() const {return 427;};
wchar_t* thumbnail_image;
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId() const {return 18;};
BnsTables::Shared::TableRef entrance_quota;
int entrance_quota_tableId() const {return 67;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 135; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) faction_battle_field_zone_RecordPtr // : DrRecordPtr
	{
		faction_battle_field_zone_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}