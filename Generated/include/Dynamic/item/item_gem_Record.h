/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/item/item_gem_Record.h"
#include "../../KR/item/item_gem_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_gem_Record = BnsTables::KR::item_gem_Record;
	#else
		using item_gem_Record = BnsTables::EU::item_gem_Record;
	#endif
}