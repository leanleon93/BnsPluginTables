/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
int zone_tableId(){return 443;};
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
bool ui_filter_attraction_quest_only;
char Pad0[3];
BnsTables::Shared::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId(){return 405;};
BnsTables::Shared::TableRef attraction_quest[10];
int attraction_quest_tableId(){return 283;};
__int8 required_level;
__int8 required_faction_level;
char Pad1[2];
BnsTables::Shared::TableRef faction_battle_field_zone_name2;
int faction_battle_field_zone_name2_tableId(){return 405;};
BnsTables::Shared::TableRef faction_battle_field_zone_desc;
int faction_battle_field_zone_desc_tableId(){return 405;};
wchar_t* thumbnail_image;
BnsTables::Shared::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
BnsTables::Shared::TableRef entrance_quota;
int entrance_quota_tableId(){return 66;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 129; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) faction_battle_field_zone_RecordPtr // : DrRecordPtr
	{
		faction_battle_field_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::faction_battle_field_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}