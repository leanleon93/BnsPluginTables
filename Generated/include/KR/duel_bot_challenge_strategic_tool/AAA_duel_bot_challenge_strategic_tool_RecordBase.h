/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct duel_bot_challenge_strategic_tool_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef pc_effect[2];
__int32 pc_effect_Size() const {return 2;};
int pc_effect_tableId() const {return 118;};
BnsTables::Shared::TableRef duel_bot_effect[2];
__int32 duel_bot_effect_Size() const {return 2;};
int duel_bot_effect_tableId() const {return 118;};
bool immune_caster_block_skill;
char Pad0[1];
__int16 fail_caster_flag[4];
__int32 fail_caster_flag_Size() const {return 4;};
signed char fail_caster_op;
char Pad1[1];
__int16 fail_caster_effect_attribute[4];
__int32 fail_caster_effect_attribute_Size() const {return 4;};
signed char fail_caster_effect_attribute_op;
char Pad2[3];
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 188;};
__int16 icon_index;
char Pad3[2];
wchar_t* card_image_set;
BnsTables::Shared::TableRef card_tooltip;
int card_tooltip_tableId() const {return 435;};
BnsTables::Shared::TableRef description2;
int description2_tableId() const {return 435;};
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 106; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_challenge_strategic_tool_RecordPtr // : DrRecordPtr
	{
		duel_bot_challenge_strategic_tool_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}