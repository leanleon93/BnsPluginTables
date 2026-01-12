#pragma once
#include "../../EU/craft_recipe_step/AAA_craft_recipe_step_RecordBase.h"
#include "../../KR/craft_recipe_step/AAA_craft_recipe_step_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using craft_recipe_step_Record = BnsTables::KR::craft_recipe_step_Record;
	#else
		using craft_recipe_step_Record = BnsTables::EU::craft_recipe_step_Record;
	#endif
}