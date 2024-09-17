/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct mastery_level_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 mastery_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 mastery_exp;
__int16 skill_build_up_point;
bool cannot_mastery_exp_up_in_min_exp;
char Pad0[1];
Data::TableRef unlock_item;
int unlock_item_tableId(){return 189;};
__int16 unlock_item_count;
__int8 acquire_tp;
char Pad1[1];
__int16 current_stat_point;
__int16 accumulated_acquire_tp;
wchar_t* level_guide_path;
__int16 additional_stat_point_max;
__int16 stat_point_attacker_max;
__int16 stat_point_defender_max;

		static TableVersion Version() { return TableVersion(1, 13); }
		static __int16 TableId() { return 246; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_level_RecordPtr // : DrRecordPtr
	{
		mastery_level_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mastery_level_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}