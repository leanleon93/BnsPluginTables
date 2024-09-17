/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct npctalkmessage_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef required_faction;
int required_faction_tableId(){return 130;};
Data::TableRef required_complete_quest;
int required_complete_quest_tableId(){return 283;};
Data::TableRef step_text[30];
int step_text_tableId(){return 405;};
Data::TableRef step_subtext[30];
int step_subtext_tableId(){return 405;};
Data::TableRef step_next[30];
int step_next_tableId(){return 405;};
wchar_t* step_kismet[30];
Data::TableRef step_cinematic[30];
int step_cinematic_tableId(){return 56;};
wchar_t* step_show[30];
wchar_t* step_camera_show[30];
__int8 function_step;
char Pad0[3];
Data::TableRef end_talk_social;
int end_talk_social_tableId(){return 367;};
wchar_t* end_talk_sound;

		static TableVersion Version() { return TableVersion(0, 60); }
		static __int16 TableId() { return 260; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npctalkmessage_RecordPtr // : DrRecordPtr
	{
		npctalkmessage_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::npctalkmessage_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}