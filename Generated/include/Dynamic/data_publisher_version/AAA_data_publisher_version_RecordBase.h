#pragma once
#include "../../EU/data_publisher_version/AAA_data_publisher_version_RecordBase.h"
#include "../../KR/data_publisher_version/AAA_data_publisher_version_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using data_publisher_version_Record = BnsTables::KR::data_publisher_version_Record;
	#else
		using data_publisher_version_Record = BnsTables::EU::data_publisher_version_Record;
	#endif
}