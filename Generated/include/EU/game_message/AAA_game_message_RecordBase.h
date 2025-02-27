/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct game_message_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char publisher;
signed char category;
char Pad0[2];
BnsTables::Shared::TableRef text;
int text_tableId() const {return 426;};
bool chatting;
char Pad1[3];
wchar_t* chatting_fontset;
bool headline2;
char Pad2[3];
wchar_t* headline2_fontset;
BnsTables::Shared::TableRef headline_text;
int headline_text_tableId() const {return 426;};
wchar_t* headline_fontset;
wchar_t* headline_particle;
BnsTables::Shared::TableRef boss_headline_text;
int boss_headline_text_tableId() const {return 426;};
wchar_t* boss_headline_fontset;
signed char sound_track;
bool stop_previous_track_sound;
bool duplication_check;
char Pad3[1];
wchar_t* sound;
signed char sound_type;
char Pad4[3];
wchar_t* sound2;
signed char sound2_type;
signed char guild_battle_type;
char Pad5[2];
BnsTables::Shared::TableRef guild_battle_text;
int guild_battle_text_tableId() const {return 426;};
signed char ghost_mode_type;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 47); }
		static __int16 TableId() { return 156; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) game_message_RecordPtr // : DrRecordPtr
	{
		game_message_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}