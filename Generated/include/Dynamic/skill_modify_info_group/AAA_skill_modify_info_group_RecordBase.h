#pragma once
#include "../../EU/skill_modify_info_group/AAA_skill_modify_info_group_RecordBase.h"
#include "../../KR/skill_modify_info_group/AAA_skill_modify_info_group_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using skill_modify_info_group_Record = BnsTables::KR::skill_modify_info_group_Record;
	#else
		using skill_modify_info_group_Record = BnsTables::EU::skill_modify_info_group_Record;
	#endif
}