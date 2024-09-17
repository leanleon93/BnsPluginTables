/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct faction_Record : DrEl
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
Data::TableRef hostile_faction;
int hostile_faction_tableId(){return 130;};
__int8 category;
char Pad0[3];
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef tag_name;
int tag_name_tableId(){return 405;};
Data::IconRef icon;
Data::IconRef activated_icon;
Data::TableRef activated_desc;
int activated_desc_tableId(){return 405;};
wchar_t* level_up_show;
Data::TableRef text;
int text_tableId(){return 405;};
Data::TableRef join_confirm_msg;
int join_confirm_msg_tableId(){return 405;};
Data::TableRef join_confirm_input;
int join_confirm_input_tableId(){return 405;};
Data::TableRef transfer_confirm_msg;
int transfer_confirm_msg_tableId(){return 405;};
Data::TableRef transfer_confirm_input;
int transfer_confirm_input_tableId(){return 405;};
Data::TableRef grade_name;
int grade_name_tableId(){return 405;};
Data::TableRef grade_image;
int grade_image_tableId(){return 405;};
__int8 grade_type;
char Pad1[3];
Data::IconRef grade_icon;
Data::TableRef grade_tooltip;
int grade_tooltip_tableId(){return 405;};
Data::TableRef hide_name;
int hide_name_tableId(){return 405;};
Data::TableRef hide_summoned_name;
int hide_summoned_name_tableId(){return 405;};
Data::TableRef guild_battle_field_teleport;
int guild_battle_field_teleport_tableId(){return 401;};

		static TableVersion Version() { return TableVersion(0, 20); }
		static __int16 TableId() { return 130; }
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