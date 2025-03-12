/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct itemrewardskill3_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;
char Pad_key_0[3];
BnsTables::Shared::TableRef head_skill_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef change_skill_id[15];
__int32 change_skill_id_Size() const {return 15;};
int change_skill_id_tableId() const {return 342;};
BnsTables::Shared::TableRef head_skill_acquire_route;
int head_skill_acquire_route_tableId() const {return 217;};
BnsTables::Shared::TableRef change_skill_acquire_route[15];
__int32 change_skill_acquire_route_Size() const {return 15;};
int change_skill_acquire_route_tableId() const {return 217;};
signed char equip_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 216; }
		static __int32 SubType() { return -1; }
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