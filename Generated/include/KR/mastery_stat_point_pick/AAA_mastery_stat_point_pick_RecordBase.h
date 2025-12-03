/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct mastery_stat_point_pick_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char stat_point_pick_attribute;
signed char stat_point_tier;
signed char stat_point_job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 required_stat_point;
char Pad0[2];
BnsTables::Shared::TableRef effect;
int effect_tableId() const {return 119;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 438;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 271; }
		static __int32 SubType() { return -1; }
		enum class stat_point_pick_attribute {
			slot1 = 0,
			slot2 = 1,
			slot3 = 2,
			slot4 = 3,
			slot5 = 4,
		};

		enum class stat_point_job {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_stat_point_pick_RecordPtr // : DrRecordPtr
	{
		mastery_stat_point_pick_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}