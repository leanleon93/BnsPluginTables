/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class skill_training_room_subject_RecordSubType : __int32
    {
		skill_training_room_subject_record_sub_class_training = 0,
		skill_training_room_subject_record_sub_boss_training = 1,
		skill_training_room_subject_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct skill_training_room_subject_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef subject_name;
int subject_name_tableId() const {return 420;};
BnsTables::Shared::TableRef group_data_id;
int group_data_id_tableId() const {return 371;};
BnsTables::Shared::TableRef system_msg;
int system_msg_tableId() const {return 155;};
wchar_t* start_kismet_name[2];
__int32 start_kismet_name_Size() const {return 2;};
wchar_t* end_kismet_name[2];
__int32 end_kismet_name_Size() const {return 2;};
__int16 sort_number;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 11); }
		static __int16 TableId() { return 372; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_training_room_subject_RecordPtr // : DrRecordPtr
	{
		skill_training_room_subject_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}