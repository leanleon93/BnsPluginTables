/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct npckillcreditcooldowngroup_Record : BnsTables::Shared::DrEl
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
bool enable;
char Pad0[3];
BnsTables::Shared::TableRef npc[10];
__int32 npc_Size() const {return 10;};
int npc_tableId() const {return 291;};
__int16 cooldown_minute;
char Pad1[2];
BnsTables::Shared::TableRef group_name;
int group_name_tableId() const {return 467;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 293; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npckillcreditcooldowngroup_RecordPtr // : DrRecordPtr
	{
		npckillcreditcooldowngroup_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}