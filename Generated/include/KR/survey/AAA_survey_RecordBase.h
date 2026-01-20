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
int survey_question_tableId() const {return 434;};
signed char job;
signed char race;
char Pad0[2];
__int32 level;
BnsTables::Shared::TableRef completed_quest;
int completed_quest_tableId() const {return 310;};
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
int need_item_tableId() const {return 204;};
BnsTables::Shared::TableRef fixed_reward_item[4];
__int32 fixed_reward_item_Size() const {return 4;};
int fixed_reward_item_tableId() const {return 204;};
signed char fixed_reward_item_count[4];
__int32 fixed_reward_item_count_Size() const {return 4;};
BnsTables::Shared::TableRef optional_reward_item[4];
__int32 optional_reward_item_Size() const {return 4;};
int optional_reward_item_tableId() const {return 204;};
signed char optional_reward_item_count[4];
__int32 optional_reward_item_count_Size() const {return 4;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 433; }
		static __int32 SubType() { return -1; }
		enum class job {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};

		enum class race {
			race_none = 0,
			geon = 1,
			gon = 2,
			rin = 3,
			jin = 4,
			nabbeunmob = 5,
			deonabbeunmob = 6,
			museounmob = 7,
			deomuseounmob = 8,
			deodeomuseounmob = 9,
			goyangi = 10,
			gangrimche = 11,
			aggwi = 12,
		};
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