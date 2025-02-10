/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itemgrowth_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 exp;
signed char r_enchant_trial_count;
char Pad0[1];
__int16 r_enchant_point;
__int16 r_enchant_crack_percent;
__int16 r_enchant_destroy_percent;
__int16 r_enchant_broken_percent;
bool r_enchant_reset_enable;
char Pad1[1];
BnsTables::Shared::TableRef r_enchant_cost_group_1[3];
__int32 r_enchant_cost_group_1_Size() const {return 3;};
int r_enchant_cost_group_1_tableId() const {return 77;};
BnsTables::Shared::TableRef r_enchant_cost_group_2[3];
__int32 r_enchant_cost_group_2_Size() const {return 3;};
int r_enchant_cost_group_2_tableId() const {return 77;};
BnsTables::Shared::TableRef r_enchant_cost_group_3[3];
__int32 r_enchant_cost_group_3_Size() const {return 3;};
int r_enchant_cost_group_3_tableId() const {return 77;};
BnsTables::Shared::TableRef r_enchant_restore_cost_group[4];
__int32 r_enchant_restore_cost_group_Size() const {return 4;};
int r_enchant_restore_cost_group_tableId() const {return 77;};
__int16 r_enchant_restore_percent[4];
__int32 r_enchant_restore_percent_Size() const {return 4;};
__int16 r_enchant_restore_equivalent_calibration_percent;
__int16 r_enchant_restore_lesser_calibration_percent;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 205; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemgrowth_RecordPtr // : DrRecordPtr
	{
		itemgrowth_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}