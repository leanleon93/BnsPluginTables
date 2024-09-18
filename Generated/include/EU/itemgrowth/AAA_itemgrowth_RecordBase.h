/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct itemgrowth_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 exp;
__int8 r_enchant_trial_count;
char Pad0[1];
__int16 r_enchant_point;
__int16 r_enchant_crack_percent;
__int16 r_enchant_destroy_percent;
__int16 r_enchant_broken_percent;
bool r_enchant_reset_enable;
char Pad1[1];
BnsTables::Shared::TableRef r_enchant_cost_group_1[3];
int r_enchant_cost_group_1_tableId(){return 76;};
BnsTables::Shared::TableRef r_enchant_cost_group_2[3];
int r_enchant_cost_group_2_tableId(){return 76;};
BnsTables::Shared::TableRef r_enchant_cost_group_3[3];
int r_enchant_cost_group_3_tableId(){return 76;};
BnsTables::Shared::TableRef r_enchant_restore_cost_group[4];
int r_enchant_restore_cost_group_tableId(){return 76;};
__int16 r_enchant_restore_percent[4];
__int16 r_enchant_restore_equivalent_calibration_percent;
__int16 r_enchant_restore_lesser_calibration_percent;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 197; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemgrowth_RecordPtr // : DrRecordPtr
	{
		itemgrowth_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemgrowth_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}