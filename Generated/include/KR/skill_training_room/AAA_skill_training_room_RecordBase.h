/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_training_room_Record : BnsTables::Shared::DrEl
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
		wchar_t* alias;
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 470;};
signed char required_level;
signed char required_mastery_level;
char Pad0[2];
BnsTables::Shared::TableRef required_preceding_quest[3];
__int32 required_preceding_quest_Size() const {return 3;};
int required_preceding_quest_tableId() const {return 299;};
signed char required_preceding_quest_check;
char Pad1[3];
BnsTables::Shared::TableRef jumping_character_quest_for_back_to_world[3];
__int32 jumping_character_quest_for_back_to_world_Size() const {return 3;};
int jumping_character_quest_for_back_to_world_tableId() const {return 299;};
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
BnsTables::Shared::TableRef skill_training_room_name2;
int skill_training_room_name2_tableId() const {return 427;};
wchar_t* start_default_kismet_name[2];
__int32 start_default_kismet_name_Size() const {return 2;};
wchar_t* end_default_kismet_name[2];
__int32 end_default_kismet_name_Size() const {return 2;};
wchar_t* stage_change_show;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 377; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_training_room_RecordPtr // : DrRecordPtr
	{
		skill_training_room_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}