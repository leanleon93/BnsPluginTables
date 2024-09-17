/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_training_room_subject_Record : DrEl
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
		Data::TableRef subject_name;
int subject_name_tableId(){return 405;};
Data::TableRef group_data_id;
int group_data_id_tableId(){return 357;};
Data::TableRef system_msg;
int system_msg_tableId(){return 151;};
wchar_t* start_kismet_name[2];
wchar_t* end_kismet_name[2];
__int16 sort_number;

		static TableVersion Version() { return TableVersion(0, 11); }
		static __int16 TableId() { return 358; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_training_room_subject_RecordPtr // : DrRecordPtr
	{
		skill_training_room_subject_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_training_room_subject_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}