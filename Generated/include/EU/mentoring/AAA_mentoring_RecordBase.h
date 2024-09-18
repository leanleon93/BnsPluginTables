/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct mentoring_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 version;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool enable;
char Pad0[3];
BnsTables::Shared::TableRef name;
int name_tableId(){return 405;};
BnsTables::Shared::TableRef text;
int text_tableId(){return 405;};
__int8 max_mentee_count;
char Pad1[3];
BnsTables::Shared::TableRef first_quest_id;
int first_quest_id_tableId(){return 283;};
BnsTables::Shared::TableRef last_quest_id;
int last_quest_id_tableId(){return 283;};
__int8 limit_finish_count;
__int8 mentor_level;
__int8 mentor_mastery_level;
char Pad2[1];
BnsTables::Shared::TableRef mentor_completed_quest;
int mentor_completed_quest_tableId(){return 283;};
BnsTables::Shared::TableRef mentor_completed_achievement;
int mentor_completed_achievement_tableId(){return 6;};
__int8 mentee_level;
__int8 mentee_mastery_level;
char Pad3[2];
BnsTables::Shared::TableRef mentee_completed_quest;
int mentee_completed_quest_tableId(){return 283;};
BnsTables::Shared::TableRef mentee_completed_achievement;
int mentee_completed_achievement_tableId(){return 6;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 249; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mentoring_RecordPtr // : DrRecordPtr
	{
		mentoring_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mentoring_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}