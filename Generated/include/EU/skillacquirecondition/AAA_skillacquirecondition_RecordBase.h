/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skillacquirecondition_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char variation_index;
signed char variation_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 pc_level;
signed char pc_job;
char Pad0[2];
BnsTables::Shared::TableRef training_name;
int training_name_tableId() const {return 434;};
BnsTables::Shared::IconRef training_icon;
BnsTables::Shared::TableRef main_info;
int main_info_tableId() const {return 434;};
BnsTables::Shared::TableRef sub_info;
int sub_info_tableId() const {return 434;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 350; }
		static __int32 SubType() { return -1; }
		enum class pc_job {
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
	struct __declspec(align(4)) skillacquirecondition_RecordPtr // : DrRecordPtr
	{
		skillacquirecondition_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}