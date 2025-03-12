/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct guildlevel_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char level;
signed char guild_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 money;
BnsTables::Shared::TableRef required_item[5];
__int32 required_item_Size() const {return 5;};
int required_item_tableId() const {return 198;};
__int32 required_item_count[5];
__int32 required_item_count_Size() const {return 5;};
__int32 required_guild_point;
__int32 reputation;
__int32 min_member_count;
__int32 max_member_count;
__int32 min_enable_member_count;
BnsTables::Shared::TableRef guild_discount;
int guild_discount_tableId() const {return 173;};
wchar_t* level_skill_imageset[10];
__int32 level_skill_imageset_Size() const {return 10;};
BnsTables::Shared::TableRef level_skill_name[10];
__int32 level_skill_name_Size() const {return 10;};
int level_skill_name_tableId() const {return 427;};
BnsTables::Shared::TableRef level_skill_description[10];
__int32 level_skill_description_Size() const {return 10;};
int level_skill_description_tableId() const {return 427;};
wchar_t* display_basic_skill_imageset[10];
__int32 display_basic_skill_imageset_Size() const {return 10;};
BnsTables::Shared::TableRef display_basic_skill_name[10];
__int32 display_basic_skill_name_Size() const {return 10;};
int display_basic_skill_name_tableId() const {return 427;};
BnsTables::Shared::TableRef display_basic_skill_description[10];
__int32 display_basic_skill_description_Size() const {return 10;};
int display_basic_skill_description_tableId() const {return 427;};
wchar_t* display_add_skill_imageset[10];
__int32 display_add_skill_imageset_Size() const {return 10;};
BnsTables::Shared::TableRef display_add_skill_name[10];
__int32 display_add_skill_name_Size() const {return 10;};
int display_add_skill_name_tableId() const {return 427;};
BnsTables::Shared::TableRef display_add_skill_description[10];
__int32 display_add_skill_description_Size() const {return 10;};
int display_add_skill_description_tableId() const {return 427;};
signed char guildcraft_small_usable_count;
signed char guildcraft_small_rentable_count;
signed char guildcraft_big_usable_count;
signed char guildcraft_big_rentable_count;
BnsTables::Shared::TableRef levelup_text;
int levelup_text_tableId() const {return 427;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 11); }
		static __int16 TableId() { return 174; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guildlevel_RecordPtr // : DrRecordPtr
	{
		guildlevel_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}