#pragma once
#include "../../EU/item_graph/item_graph_seed_Record.h"
#include "../../KR/item_graph/item_graph_seed_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_graph_seed_Record = BnsTables::KR::item_graph_seed_Record;
	#else
		using item_graph_seed_Record = BnsTables::EU::item_graph_seed_Record;
	#endif
}