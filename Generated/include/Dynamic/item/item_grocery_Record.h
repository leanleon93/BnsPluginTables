/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/item/item_grocery_Record.h"
#include "../../KR/item/item_grocery_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_grocery_Record = BnsTables::KR::item_grocery_Record;
	#else
		using item_grocery_Record = BnsTables::EU::item_grocery_Record;
	#endif
}