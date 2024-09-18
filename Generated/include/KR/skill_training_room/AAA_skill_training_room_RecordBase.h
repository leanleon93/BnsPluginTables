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
int zone_tableId(){return 461;};
__int8 required_level;
__int8 required_mastery_level;
char Pad0[2];
BnsTables::Shared::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 294;};
__int8 required_preceding_quest_check;
char Pad1[3];
BnsTables::Shared::TableRef jumping_character_quest_for_back_to_world[3];
int jumping_character_quest_for_back_to_world_tableId(){return 294;};
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
BnsTables::Shared::TableRef skill_training_room_name2;
int skill_training_room_name2_tableId(){return 420;};
wchar_t* start_default_kismet_name[2];
wchar_t* end_default_kismet_name[2];
wchar_t* stage_change_show;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 9); }
		static __int16 TableId() { return 370; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_training_room_RecordPtr // : DrRecordPtr
	{
		skill_training_room_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_training_room_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}