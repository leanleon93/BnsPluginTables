#pragma once
#include "../../EU/item_graph/AAA_item_graph_RecordBase.h"
#include "../../KR/item_graph/AAA_item_graph_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using item_graph_Record = BnsTables::KR::item_graph_Record;
	#else
		using item_graph_Record = BnsTables::EU::item_graph_Record;
	#endif
}