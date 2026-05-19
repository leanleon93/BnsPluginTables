/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_combo_guide_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char job;
signed char specialization;
signed char recommend_level;
char Pad0[1];
BnsTables::Shared::TableRef combo_skill[8];
__int32 combo_skill_Size() const {return 8;};
int combo_skill_tableId() const {return 360;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 447;};
BnsTables::Shared::TableRef description2;
int description2_tableId() const {return 447;};
signed char skill_macro_start_index;
signed char skill_macro_end_index;
signed char skill_macro_preset_slot;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 3); }
		static __int16 TableId() { return 371; }
		static __int32 SubType() { return -1; }
		enum class job {
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

		enum class specialization {
			job_specialization_none = 0,
			gyeyeor1 = 1,
			gyeyeor2 = 2,
			gyeyeor3 = 3,
		};

		enum class skill_macro_preset_slot {
			none = 0,
			value_1 = 1,
			value_2 = 2,
			value_3 = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_combo_guide_RecordPtr // : DrRecordPtr
	{
		skill_combo_guide_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}