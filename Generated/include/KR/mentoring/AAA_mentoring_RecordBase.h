/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

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
int name_tableId() const {return 438;};
BnsTables::Shared::TableRef text;
int text_tableId() const {return 438;};
signed char max_mentee_count;
char Pad1[3];
BnsTables::Shared::TableRef first_quest_id;
int first_quest_id_tableId() const {return 309;};
BnsTables::Shared::TableRef last_quest_id;
int last_quest_id_tableId() const {return 309;};
signed char limit_finish_count;
signed char mentor_level;
signed char mentor_mastery_level;
char Pad2[1];
BnsTables::Shared::TableRef mentor_completed_quest;
int mentor_completed_quest_tableId() const {return 309;};
BnsTables::Shared::TableRef mentor_completed_achievement;
int mentor_completed_achievement_tableId() const {return 6;};
signed char mentee_level;
signed char mentee_mastery_level;
char Pad3[2];
BnsTables::Shared::TableRef mentee_completed_quest;
int mentee_completed_quest_tableId() const {return 309;};
BnsTables::Shared::TableRef mentee_completed_achievement;
int mentee_completed_achievement_tableId() const {return 6;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 273; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mentoring_RecordPtr // : DrRecordPtr
	{
		mentoring_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}