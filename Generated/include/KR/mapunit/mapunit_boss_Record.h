/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace BnsTables::KR {
#pragma pack(push, 1)
	struct mapunit_boss_Record : mapunit_Record
	{
	public:
		BnsTables::Shared::TableRef npc;
int npc_tableId() const {return 269;};
wchar_t* combat_imageset;
wchar_t* combat_over_imageset;
wchar_t* combat_pressed_imageset;
wchar_t* combat_outofsight_imageset;
wchar_t* combat_outofsight_over_imageset;
wchar_t* combat_outofsight_pressed_imageset;
bool many_counts;

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}