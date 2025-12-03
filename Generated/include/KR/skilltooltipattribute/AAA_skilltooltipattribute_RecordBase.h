/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skilltooltipattribute_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char arg_type[4];
__int32 arg_type_Size() const {return 4;};
BnsTables::Shared::TableRef text;
int text_tableId() const {return 438;};
BnsTables::Shared::IconRef icon;
signed char skill_modify_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 10); }
		static __int16 TableId() { return 382; }
		static __int32 SubType() { return -1; }
		enum class arg_type {
			none = 0,
			damage_percent_min_max = 1,
			damage_percent = 2,
			time = 3,
			stack_count = 4,
			effect = 5,
			heal_percent = 6,
			drain_percent = 7,
			skill = 8,
			consume_percent = 9,
			probability_percent = 10,
			stance_type = 11,
			percent = 12,
			counter = 13,
			distance = 14,
			key_command = 15,
			number = 16,
			text_alias = 17,
			r_hypermove = 18,
			r_heal_percent = 19,
			r_heal_diff = 20,
			r_shield_percent = 21,
			r_shield_diff = 22,
			r_support_percent = 23,
			r_support_diff = 24,
		};

		enum class skill_modify_type {
			none = 0,
			recycle_duration = 1,
			sp_consume = 2,
			damage = 3,
			hp_drain = 4,
			heal_percent = 5,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skilltooltipattribute_RecordPtr // : DrRecordPtr
	{
		skilltooltipattribute_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}