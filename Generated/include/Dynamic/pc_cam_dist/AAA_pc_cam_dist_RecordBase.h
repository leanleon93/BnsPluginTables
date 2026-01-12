#pragma once
#include "../../EU/pc_cam_dist/AAA_pc_cam_dist_RecordBase.h"
#include "../../KR/pc_cam_dist/AAA_pc_cam_dist_RecordBase.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using pc_cam_dist_Record = BnsTables::KR::pc_cam_dist_Record;
	#else
		using pc_cam_dist_Record = BnsTables::EU::pc_cam_dist_Record;
	#endif
}