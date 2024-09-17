/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct flying_circus_game_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef zone;
int zone_tableId(){return 443;};
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef public_raid;
int public_raid_tableId(){return 279;};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 148; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) flying_circus_game_RecordPtr // : DrRecordPtr
	{
		flying_circus_game_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::flying_circus_game_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}