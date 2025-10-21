/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct survey_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef survey_question;
int survey_question_tableId() const {return 428;};
signed char job;
signed char race;
char Pad0[2];
__int32 level;
BnsTables::Shared::TableRef completed_quest;
int completed_quest_tableId() const {return 307;};
__int16 start_year;
signed char start_month;
signed char start_day;
signed char start_hour;
char Pad1[1];
__int16 end_year;
signed char end_month;
signed char end_day;
signed char end_hour;
char Pad2[1];
BnsTables::Shared::TableRef need_item;
int need_item_tableId() const {return 202;};
BnsTables::Shared::TableRef fixed_reward_item[4];
__int32 fixed_reward_item_Size() const {return 4;};
int fixed_reward_item_tableId() const {return 202;};
signed char fixed_reward_item_count[4];
__int32 fixed_reward_item_count_Size() const {return 4;};
BnsTables::Shared::TableRef optional_reward_item[4];
__int32 optional_reward_item_Size() const {return 4;};
int optional_reward_item_tableId() const {return 202;};
signed char optional_reward_item_count[4];
__int32 optional_reward_item_count_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 427; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) survey_RecordPtr // : DrRecordPtr
	{
		survey_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}