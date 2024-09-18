/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
int group_name_tableId(){return 405;};
BnsTables::Shared::TableRef group_desc;
int group_desc_tableId(){return 405;};
__int8 job;
bool has_reward;
__int8 group_required_level;
__int8 group_required_mastery_level;
BnsTables::Shared::TableRef group_level_text;
int group_level_text_tableId(){return 405;};
BnsTables::Shared::TableRef subject_id[8];
int subject_id_tableId(){return 358;};
__int8 job_style;
char Pad0[1];
__int16 sort_number;
BnsTables::Shared::TableRef achievement;
int achievement_tableId(){return 6;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 12); }
		static __int16 TableId() { return 357; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_training_room_group_RecordPtr // : DrRecordPtr
	{
		skill_training_room_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_training_room_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}