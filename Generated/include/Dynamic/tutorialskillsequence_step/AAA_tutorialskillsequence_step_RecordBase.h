#pragma once
#include "../../EU/tutorialskillsequence_step/AAA_tutorialskillsequence_step_RecordBase.h"
#include "../../KR/tutorialskillsequence_step/AAA_tutorialskillsequence_step_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using tutorialskillsequence_step_Record = BnsTables::KR::tutorialskillsequence_step_Record;
	#else
		using tutorialskillsequence_step_Record = BnsTables::EU::tutorialskillsequence_step_Record;
	#endif
}