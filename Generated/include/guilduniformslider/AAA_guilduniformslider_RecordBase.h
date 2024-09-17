/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct guilduniformslider_Record : DrEl
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
		__int8 min_value;
__int8 max_value;
__int8 step;
__int8 required_guild_level;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 175; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformslider_RecordPtr // : DrRecordPtr
	{
		guilduniformslider_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guilduniformslider_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}