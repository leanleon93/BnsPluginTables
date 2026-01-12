#pragma once
#include "../../EU/petition_faq_list/AAA_petition_faq_list_RecordBase.h"
#include "../../KR/petition_faq_list/AAA_petition_faq_list_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using petition_faq_list_Record = BnsTables::KR::petition_faq_list_Record;
	#else
		using petition_faq_list_Record = BnsTables::EU::petition_faq_list_Record;
	#endif
}