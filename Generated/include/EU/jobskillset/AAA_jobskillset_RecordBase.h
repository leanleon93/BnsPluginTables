/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct jobskillset_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 skill[100];
__int32 skill_Size() const {return 100;};
signed char acquire_type[100];
__int32 acquire_type_Size() const {return 100;};
__int32 style_level_2_skill[2];
__int32 style_level_2_skill_Size() const {return 2;};
__int32 style_level_3_skill[2];
__int32 style_level_3_skill_Size() const {return 2;};
__int32 style_level_4_skill[2];
__int32 style_level_4_skill_Size() const {return 2;};
__int32 style_level_5_skill[2];
__int32 style_level_5_skill_Size() const {return 2;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 241; }
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

		enum class acquire_type {
			none = 0,
			by_quest = 1,
			by_level_up = 2,
			by_training = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jobskillset_RecordPtr // : DrRecordPtr
	{
		jobskillset_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}