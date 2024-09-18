/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace BnsTables::EU {
#pragma pack(push, 1)
	struct mapunit_guild_battle_field_portal_Record : mapunit_Record
	{
	public:
		BnsTables::Shared::TableRef env2spawn;
int env2spawn_tableId(){return 446;};
wchar_t* disable_imageset;
wchar_t* disable_over_imageset;
wchar_t* disable_pressed_imageset;
wchar_t* disable_outofsight_imageset;
wchar_t* disable_outofsight_over_imageset;
wchar_t* disable_outofsight_pressed_imageset;

		static __int32 SubType() { return 9; }
	};
#pragma pack(pop)
}