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
		__int8 param_type_category;
char Pad0[3];
BnsTables::Shared::TableRef name;
int name_tableId(){return 420;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId(){return 182;};
__int16 icon_index;
char Pad1[2];
BnsTables::Shared::TableRef desc;
int desc_tableId(){return 420;};
__int32 order;
__int8 required_guild_level;
bool usable;
char Pad2[2];
BnsTables::Shared::TableRef recipe_id;
int recipe_id_tableId(){return 177;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 8); }
		static __int16 TableId() { return 174; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformcomponent_RecordPtr // : DrRecordPtr
	{
		guilduniformcomponent_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guilduniformcomponent_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}