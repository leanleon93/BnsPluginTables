/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct jobspecialization_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;
signed char specialization;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* job_specialization_icon;
wchar_t* job_specialization_icon_overlay;
BnsTables::Shared::TableRef job_specialization_name;
int job_specialization_name_tableId() const {return 441;};
BnsTables::Shared::TableRef job_specialization_desc;
int job_specialization_desc_tableId() const {return 441;};
signed char sort_order;
char Pad0[1];
__int16 lobby_chart_value_melee;
__int16 lobby_chart_value_defense;
__int16 lobby_chart_value_protection;
__int16 lobby_chart_value_distance;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 243; }
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jobspecialization_RecordPtr // : DrRecordPtr
	{
		jobspecialization_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}