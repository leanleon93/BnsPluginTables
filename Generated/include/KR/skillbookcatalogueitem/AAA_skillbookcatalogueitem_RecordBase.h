/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skillbookcatalogueitem_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char server_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef parent_skill;
int parent_skill_tableId() const {return 349;};
BnsTables::Shared::TableRef base_skill;
int base_skill_tableId() const {return 349;};
BnsTables::Shared::TableRef change_skill[4];
__int32 change_skill_Size() const {return 4;};
int change_skill_tableId() const {return 349;};
signed char row;
signed char column;
signed char job;
signed char equip_type;
signed char tier;
char Pad0[3];
BnsTables::Shared::TableRef base_skill_acquire_route;
int base_skill_acquire_route_tableId() const {return 221;};
BnsTables::Shared::TableRef change_skill_acquire_route[4];
__int32 change_skill_acquire_route_Size() const {return 4;};
int change_skill_acquire_route_tableId() const {return 221;};
signed char job_specialization[3];
__int32 job_specialization_Size() const {return 3;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 353; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillbookcatalogueitem_RecordPtr // : DrRecordPtr
	{
		skillbookcatalogueitem_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}