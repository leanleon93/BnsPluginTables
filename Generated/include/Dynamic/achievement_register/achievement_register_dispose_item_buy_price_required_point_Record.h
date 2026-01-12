#pragma once
#include "../../EU/achievement_register/achievement_register_dispose_item_buy_price_required_point_Record.h"
#include "../../KR/achievement_register/achievement_register_dispose_item_buy_price_required_point_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using achievement_register_dispose_item_buy_price_required_point_Record = BnsTables::KR::achievement_register_dispose_item_buy_price_required_point_Record;
	#else
		using achievement_register_dispose_item_buy_price_required_point_Record = BnsTables::EU::achievement_register_dispose_item_buy_price_required_point_Record;
	#endif
}