#pragma once

#include "../../KR/context_macro/AAA_context_macro_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using context_macro_Record = BnsTables::KR::context_macro_Record;
	#else
		struct context_macro_Record {};
	#endif
}