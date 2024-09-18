/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct duel_bot_challenge_strategic_tool_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef pc_effect[2];
int pc_effect_tableId(){return 111;};
BnsTables::Shared::TableRef duel_bot_effect[2];
int duel_bot_effect_tableId(){return 111;};
bool immune_caster_block_skill;
char Pad0[1];
__int16 fail_caster_flag[4];
__int8 fail_caster_op;
char Pad1[1];
__int16 fail_caster_effect_attribute[4];
__int8 fail_caster_effect_attribute_op;
char Pad2[3];
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad3[2];
wchar_t* card_image_set;
BnsTables::Shared::TableRef card_tooltip;
int card_tooltip_tableId(){return 405;};
BnsTables::Shared::TableRef description2;
int description2_tableId(){return 405;};
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 405;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 102; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_challenge_strategic_tool_RecordPtr // : DrRecordPtr
	{
		duel_bot_challenge_strategic_tool_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_bot_challenge_strategic_tool_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}