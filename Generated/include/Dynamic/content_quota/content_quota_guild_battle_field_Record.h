#pragma once
#include "../../EU/content_quota/content_quota_guild_battle_field_Record.h"
#include "../../KR/content_quota/content_quota_guild_battle_field_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using content_quota_guild_battle_field_Record = BnsTables::KR::content_quota_guild_battle_field_Record;
	#else
		using content_quota_guild_battle_field_Record = BnsTables::EU::content_quota_guild_battle_field_Record;
	#endif
}