/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct guilduniformcomponent_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 param_type;
__int32 param_value;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char param_type_category;
char Pad0[3];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 425;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 183;};
__int16 icon_index;
char Pad1[2];
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 425;};
__int32 order;
signed char required_guild_level;
bool usable;
char Pad2[2];
BnsTables::Shared::TableRef recipe_id;
int recipe_id_tableId() const {return 178;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 8); }
		static __int16 TableId() { return 175; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformcomponent_RecordPtr // : DrRecordPtr
	{
		guilduniformcomponent_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}