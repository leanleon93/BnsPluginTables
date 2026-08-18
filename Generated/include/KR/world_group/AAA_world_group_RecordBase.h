/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct world_group_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
char Pad0[1];
__int16 world[10];
__int32 world_Size() const {return 10;};
char Pad1[2];
BnsTables::Shared::TableRef lobby_desc;
int lobby_desc_tableId() const {return 454;};
signed char platform_type;
signed char contents_type;
signed char contents_type_ui_order;
char Pad2[1];
wchar_t* data_publisher_type;
signed char deny_creation_job[5];
__int32 deny_creation_job_Size() const {return 5;};
char Pad3[3];
__int64 service_period_end_time;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 0); }
		static __int16 TableId() { return 494; }
		static __int32 SubType() { return -1; }
		enum class publisher {
			NONE = 0,
			NCK = 1,
			NCA = 2,
			NCJ = 3,
			NCT = 4,
			INV = 5,
			TX = 6,
			NCK_NEO_GOLD = 7,
		};

		enum class platform_type {
			normal = 0,
			steam = 1,
		};

		enum class contents_type {
			normal = 0,
			gold_specialized = 1,
			boost = 2,
		};

		enum class deny_creation_job {
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
	struct __declspec(align(4)) world_group_RecordPtr // : DrRecordPtr
	{
		world_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}