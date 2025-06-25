/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_training_room_group_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef group_name;
int group_name_tableId() const {return 434;};
BnsTables::Shared::TableRef group_desc;
int group_desc_tableId() const {return 434;};
signed char job;
bool has_reward;
signed char group_required_level;
signed char group_required_mastery_level;
BnsTables::Shared::TableRef group_level_text;
int group_level_text_tableId() const {return 434;};
BnsTables::Shared::TableRef subject_id[8];
__int32 subject_id_Size() const {return 8;};
int subject_id_tableId() const {return 386;};
signed char job_style;
char Pad0[1];
__int16 sort_number;
BnsTables::Shared::TableRef achievement;
int achievement_tableId() const {return 6;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 12); }
		static __int16 TableId() { return 385; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_training_room_group_RecordPtr // : DrRecordPtr
	{
		skill_training_room_group_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}