#pragma once
#include "../../EU/customizingpreview/customizingpreview_pose_Record.h"
#include "../../KR/customizingpreview/customizingpreview_pose_Record.h"

namespace BnsTables::Dynamic {
	#ifdef BNSKR
		using customizingpreview_pose_Record = BnsTables::KR::customizingpreview_pose_Record;
	#else
		using customizingpreview_pose_Record = BnsTables::EU::customizingpreview_pose_Record;
	#endif
}