/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct guilduniformslider_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 param_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char min_value;
signed char max_value;
signed char step;
signed char required_guild_level;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 186; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformslider_RecordPtr // : DrRecordPtr
	{
		guilduniformslider_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}