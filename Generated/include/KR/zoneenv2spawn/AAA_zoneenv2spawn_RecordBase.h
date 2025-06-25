/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct zoneenv2spawn_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 zone;
__int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef env2;
int env2_tableId() const {return 479;};
BnsTables::Shared::TableRef env2place;
int env2place_tableId() const {return 480;};
BnsTables::Shared::TableRef random_group;
int random_group_tableId() const {return 482;};
BnsTables::Shared::TableRef required_env;
int required_env_tableId() const {return 481;};
signed char mapunit_map_depth;
signed char mapunit_arena_dungeon_map_depth;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 481; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneenv2spawn_RecordPtr // : DrRecordPtr
	{
		zoneenv2spawn_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}