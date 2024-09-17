/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct wave_dungeon_strategy_Record : DrEl
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
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
__int8 required_mastery_level;
char Pad0[3];
Data::TableRef required_quest;
int required_quest_tableId(){return 283;};
__int16 required_achievement_id;
__int16 required_achievement_step;
Data::TableRef condition_event;
int condition_event_tableId(){return 62;};
Data::TableRef name;
int name_tableId(){return 405;};
Data::IconRef image;
Data::TableRef ability_text;
int ability_text_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
Data::TableRef ingame_icon_texture;
int ingame_icon_texture_tableId(){return 178;};
__int16 ingame_icon_index;
char Pad1[2];
Data::TableRef ingame_icon_tooltip;
int ingame_icon_tooltip_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(2, 1); }
		static __int16 TableId() { return 426; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) wave_dungeon_strategy_RecordPtr // : DrRecordPtr
	{
		wave_dungeon_strategy_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::wave_dungeon_strategy_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}