/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct npc_sealed_dungeon_reward_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
__int8 sealed_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef reward_default;
int reward_default_tableId(){return 313;};
Data::TableRef reward_event;
int reward_event_tableId(){return 313;};
Data::TableRef reward_personal_dropped_pouch;
int reward_personal_dropped_pouch_tableId(){return 313;};

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 259; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npc_sealed_dungeon_reward_RecordPtr // : DrRecordPtr
	{
		npc_sealed_dungeon_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::npc_sealed_dungeon_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}