/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct faction_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef hostile_faction;
int hostile_faction_tableId(){return 135;};
__int8 category;
char Pad0[3];
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};
BnsTables::Shared::TableRef tag_name;
int tag_name_tableId(){return 420;};
BnsTables::Shared::IconRef icon;
BnsTables::Shared::IconRef activated_icon;
BnsTables::Shared::TableRef activated_desc;
int activated_desc_tableId(){return 420;};
wchar_t* level_up_show;
BnsTables::Shared::TableRef text;
int text_tableId(){return 420;};
BnsTables::Shared::TableRef join_confirm_msg;
int join_confirm_msg_tableId(){return 420;};
BnsTables::Shared::TableRef join_confirm_input;
int join_confirm_input_tableId(){return 420;};
BnsTables::Shared::TableRef transfer_confirm_msg;
int transfer_confirm_msg_tableId(){return 420;};
BnsTables::Shared::TableRef transfer_confirm_input;
int transfer_confirm_input_tableId(){return 420;};
BnsTables::Shared::TableRef grade_name;
int grade_name_tableId(){return 420;};
BnsTables::Shared::TableRef grade_image;
int grade_image_tableId(){return 420;};
__int8 grade_type;
char Pad1[3];
BnsTables::Shared::IconRef grade_icon;
BnsTables::Shared::TableRef grade_tooltip;
int grade_tooltip_tableId(){return 420;};
BnsTables::Shared::TableRef hide_name;
int hide_name_tableId(){return 420;};
BnsTables::Shared::TableRef hide_summoned_name;
int hide_summoned_name_tableId(){return 420;};
BnsTables::Shared::TableRef guild_battle_field_teleport;
int guild_battle_field_teleport_tableId(){return 416;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 20); }
		static __int16 TableId() { return 135; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) faction_RecordPtr // : DrRecordPtr
	{
		faction_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::faction_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}