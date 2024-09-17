/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct guildlevel_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 level;
__int8 guild_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 money;
Data::TableRef required_item[5];
int required_item_tableId(){return 189;};
__int32 required_item_count[5];
__int32 required_guild_point;
__int32 reputation;
__int32 min_member_count;
__int32 max_member_count;
__int32 min_enable_member_count;
Data::TableRef guild_discount;
int guild_discount_tableId(){return 167;};
wchar_t* level_skill_imageset[10];
Data::TableRef level_skill_name[10];
int level_skill_name_tableId(){return 405;};
Data::TableRef level_skill_description[10];
int level_skill_description_tableId(){return 405;};
wchar_t* display_basic_skill_imageset[10];
Data::TableRef display_basic_skill_name[10];
int display_basic_skill_name_tableId(){return 405;};
Data::TableRef display_basic_skill_description[10];
int display_basic_skill_description_tableId(){return 405;};
wchar_t* display_add_skill_imageset[10];
Data::TableRef display_add_skill_name[10];
int display_add_skill_name_tableId(){return 405;};
Data::TableRef display_add_skill_description[10];
int display_add_skill_description_tableId(){return 405;};
__int8 guildcraft_small_usable_count;
__int8 guildcraft_small_rentable_count;
__int8 guildcraft_big_usable_count;
__int8 guildcraft_big_rentable_count;
Data::TableRef levelup_text;
int levelup_text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(1, 11); }
		static __int16 TableId() { return 168; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guildlevel_RecordPtr // : DrRecordPtr
	{
		guildlevel_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guildlevel_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}