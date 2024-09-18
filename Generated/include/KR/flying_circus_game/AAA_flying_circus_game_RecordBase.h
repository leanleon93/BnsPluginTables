/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct flying_circus_game_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef zone;
int zone_tableId(){return 461;};
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
BnsTables::Shared::TableRef public_raid;
int public_raid_tableId(){return 290;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 153; }
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