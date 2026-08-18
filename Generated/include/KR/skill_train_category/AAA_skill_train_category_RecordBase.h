/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_train_category_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;
char Pad_key_0[3];
__int32 view_skill_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 tree_id;
bool default_skill_train_by_item;
__int16 pc_level;
__int16 pc_mastery_level;
char Pad0[1];
BnsTables::Shared::TableRef complete_quest;
int complete_quest_tableId() const {return 318;};
BnsTables::Shared::TableRef jumping_pc_complete_quest;
int jumping_pc_complete_quest_tableId() const {return 318;};
__int32 consumed_tp;
signed char sort_id;
bool ui_invisible;
bool context_lock_disable;
bool main_skill_by_key_command;
BnsTables::Shared::TableRef relation_skill_group[3];
__int32 relation_skill_group_Size() const {return 3;};
int relation_skill_group_tableId() const {return 401;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 1); }
		static __int16 TableId() { return 400; }
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_category_RecordPtr // : DrRecordPtr
	{
		skill_train_category_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}