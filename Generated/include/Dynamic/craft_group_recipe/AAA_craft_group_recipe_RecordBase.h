#pragma once
#include "../../EU/craft_group_recipe/AAA_craft_group_recipe_RecordBase.h"
#include "../../KR/craft_group_recipe/AAA_craft_group_recipe_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using craft_group_recipe_Record = BnsTables::KR::craft_group_recipe_Record;
	#else
		using craft_group_recipe_Record = BnsTables::EU::craft_group_recipe_Record;
	#endif
}