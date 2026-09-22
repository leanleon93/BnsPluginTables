/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class guild_zone_RecordSubType : __int32
    {
		guild_zone_record_sub_azit = 0,
		guild_zone_record_sub_hunting = 1,
		guild_zone_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct guild_zone_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
BnsTables::Shared::TableRef main_zone;
int main_zone_tableId() const {return 503;};
signed char required_level;
signed char required_mastery_level;
signed char required_guild_level;
char Pad0[1];
__int16 max_member_count;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 192; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_zone_RecordPtr // : DrRecordPtr
	{
		guild_zone_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}