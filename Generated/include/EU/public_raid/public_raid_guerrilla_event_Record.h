/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_public_raid_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct public_raid_guerrilla_event_Record : public_raid_Record
	{
	public:
		wchar_t* system_menu_icon;
BnsTables::Shared::TableRef hud_notification_menu_name;
int hud_notification_menu_name_tableId() const {return 420;};
BnsTables::Shared::TableRef arena_portal;
int arena_portal_tableId() const {return 13;};

		static __int32 SubType() { return 6; }
	};
#pragma pack(pop)
}