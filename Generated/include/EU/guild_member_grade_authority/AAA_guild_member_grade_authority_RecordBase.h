/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct guild_member_grade_authority_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char authority;
signed char guild_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool editable[5];
__int32 editable_Size() const {return 5;};
bool initial_value[5];
__int32 initial_value_Size() const {return 5;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 11); }
		static __int16 TableId() { return 180; }
		static __int32 SubType() { return -1; }
		enum class authority {
			none = 0,
			change_guildmember_grade_by_permission = 1,
			banish_guildmember = 2,
			change_guildmember_grade = 3,
			edit_guild_notification_message = 4,
			invite_guildmember = 5,
			guild_level_up = 6,
			control_small_craft = 7,
			control_big_craft = 8,
			warp_to_guildmember = 9,
			call_guildmember = 10,
			officer_chat = 11,
			voice_chat_1 = 12,
			voice_chat_2 = 13,
			uniform_designer = 14,
			edit_flag_bearer = 15,
			guild_pr = 16,
			accept_guildmember = 17,
			purchase_guild_benefit = 18,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_member_grade_authority_RecordPtr // : DrRecordPtr
	{
		guild_member_grade_authority_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}