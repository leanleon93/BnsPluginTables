/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct npc_sealed_dungeon_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char sealed_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef reward_default;
int reward_default_tableId() const {return 339;};
BnsTables::Shared::TableRef reward_event;
int reward_event_tableId() const {return 339;};
BnsTables::Shared::TableRef reward_personal_dropped_pouch;
int reward_personal_dropped_pouch_tableId() const {return 339;};
BnsTables::Shared::TableRef reward_personal_dropped_pouch_event;
int reward_personal_dropped_pouch_event_tableId() const {return 339;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 280; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npc_sealed_dungeon_reward_RecordPtr // : DrRecordPtr
	{
		npc_sealed_dungeon_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}