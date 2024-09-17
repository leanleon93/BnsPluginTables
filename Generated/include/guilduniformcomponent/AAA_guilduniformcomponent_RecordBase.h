/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct guilduniformcomponent_Record : DrEl
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
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad1[2];
Data::TableRef desc;
int desc_tableId(){return 405;};
__int32 order;
__int8 required_guild_level;
bool usable;
char Pad2[2];
Data::TableRef recipe_id;
int recipe_id_tableId(){return 173;};

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 170; }
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