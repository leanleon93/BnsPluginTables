#pragma once
#include "../../EU/pc_race_sex_job/AAA_pc_race_sex_job_RecordBase.h"
#include "../../KR/pc_race_sex_job/AAA_pc_race_sex_job_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using pc_race_sex_job_Record = BnsTables::KR::pc_race_sex_job_Record;
	#else
		using pc_race_sex_job_Record = BnsTables::EU::pc_race_sex_job_Record;
	#endif
}