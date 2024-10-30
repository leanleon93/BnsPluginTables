/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itemrewardskill3_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;
BnsTables::Shared::TableRef head_skill_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		char Pad0[4];
BnsTables::Shared::TableRef change_skill_id[10];
__int32 change_skill_id_Size() const {return 10;};
int change_skill_id_tableId() const {return 337;};
BnsTables::Shared::TableRef head_skill_acquire_route;
int head_skill_acquire_route_tableId() const {return 214;};
BnsTables::Shared::TableRef change_skill_acquire_route[10];
__int32 change_skill_acquire_route_Size() const {return 10;};
int change_skill_acquire_route_tableId() const {return 214;};
signed char equip_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 213; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemrewardskill3_RecordPtr // : DrRecordPtr
	{
		itemrewardskill3_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}