/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../EU/energy_point_reward/AAA_energy_point_reward_RecordBase.h"
#include "../../KR/energy_point_reward/AAA_energy_point_reward_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using energy_point_reward_Record = BnsTables::KR::energy_point_reward_Record;
	#else
		using energy_point_reward_Record = BnsTables::EU::energy_point_reward_Record;
	#endif
}