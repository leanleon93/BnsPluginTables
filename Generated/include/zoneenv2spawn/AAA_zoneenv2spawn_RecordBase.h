/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2spawn_Record : DrEl
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
Data::TableRef env2;
int env2_tableId(){return 444;};
Data::TableRef env2place;
int env2place_tableId(){return 445;};
Data::TableRef random_group;
int random_group_tableId(){return 447;};
Data::TableRef required_env;
int required_env_tableId(){return 446;};
__int8 mapunit_map_depth;
__int8 mapunit_arena_dungeon_map_depth;

		static TableVersion Version() { return TableVersion(0, 9); }
		static __int16 TableId() { return 446; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneenv2spawn_RecordPtr // : DrRecordPtr
	{
		zoneenv2spawn_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneenv2spawn_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}