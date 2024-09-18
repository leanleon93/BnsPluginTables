/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct duel_grade_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 grade;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 score;
__int16 duel_point_bonus_percent;
char Pad0[2];
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::IconRef medium_icon;
BnsTables::Shared::IconRef small_icon;
BnsTables::Shared::IconRef extrasmall_icon;
BnsTables::Shared::TableRef grade_level_up_message;
int grade_level_up_message_tableId(){return 155;};
BnsTables::Shared::TableRef grade_level_down_message;
int grade_level_down_message_tableId(){return 155;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 109; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_grade_RecordPtr // : DrRecordPtr
	{
		duel_grade_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_grade_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}