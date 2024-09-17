/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct survey_Record : DrEl
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
		Data::TableRef survey_question;
int survey_question_tableId(){return 398;};
__int8 job;
__int8 race;
char Pad0[2];
__int32 level;
Data::TableRef completed_quest;
int completed_quest_tableId(){return 283;};
__int16 start_year;
__int8 start_month;
__int8 start_day;
__int8 start_hour;
char Pad1[1];
__int16 end_year;
__int8 end_month;
__int8 end_day;
__int8 end_hour;
char Pad2[1];
Data::TableRef need_item;
int need_item_tableId(){return 189;};
Data::TableRef fixed_reward_item[4];
int fixed_reward_item_tableId(){return 189;};
__int8 fixed_reward_item_count[4];
Data::TableRef optional_reward_item[4];
int optional_reward_item_tableId(){return 189;};
__int8 optional_reward_item_count[4];

		static TableVersion Version() { return TableVersion(0, 6); }
		static __int16 TableId() { return 397; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) survey_RecordPtr // : DrRecordPtr
	{
		survey_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::survey_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}