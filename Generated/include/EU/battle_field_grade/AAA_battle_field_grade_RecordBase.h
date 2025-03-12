/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct battle_field_grade_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char season_type;
signed char grade;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 score;
__int16 point_bonus_percent;
char Pad0[2];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 427;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::IconRef medium_icon;
BnsTables::Shared::IconRef small_icon;
BnsTables::Shared::IconRef extrasmall_icon;
BnsTables::Shared::TableRef grade_level_up_message;
int grade_level_up_message_tableId() const {return 156;};
BnsTables::Shared::TableRef grade_level_down_message;
int grade_level_down_message_tableId() const {return 156;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 30; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battle_field_grade_RecordPtr // : DrRecordPtr
	{
		battle_field_grade_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}