/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct wave_dungeon_strategy_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId() const {return 114;};
signed char required_mastery_level;
char Pad0[3];
BnsTables::Shared::TableRef required_quest;
int required_quest_tableId() const {return 299;};
__int16 required_achievement_id;
__int16 required_achievement_step;
BnsTables::Shared::TableRef condition_event;
int condition_event_tableId() const {return 63;};
BnsTables::Shared::TableRef name;
int name_tableId() const {return 427;};
BnsTables::Shared::IconRef image;
BnsTables::Shared::TableRef ability_text;
int ability_text_tableId() const {return 427;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 427;};
BnsTables::Shared::TableRef ingame_icon_texture;
int ingame_icon_texture_tableId() const {return 184;};
__int16 ingame_icon_index;
char Pad1[2];
BnsTables::Shared::TableRef ingame_icon_tooltip;
int ingame_icon_tooltip_tableId() const {return 427;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 1); }
		static __int16 TableId() { return 448; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) wave_dungeon_strategy_RecordPtr // : DrRecordPtr
	{
		wave_dungeon_strategy_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}