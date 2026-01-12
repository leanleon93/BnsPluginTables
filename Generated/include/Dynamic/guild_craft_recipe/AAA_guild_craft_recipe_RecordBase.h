#pragma once
#include "../../EU/guild_craft_recipe/AAA_guild_craft_recipe_RecordBase.h"
#include "../../KR/guild_craft_recipe/AAA_guild_craft_recipe_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using guild_craft_recipe_Record = BnsTables::KR::guild_craft_recipe_Record;
	#else
		using guild_craft_recipe_Record = BnsTables::EU::guild_craft_recipe_Record;
	#endif
}