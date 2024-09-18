/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skill_train_simple_context_flow_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;
__int8 job_style;
__int16 key_command;
__int8 function_id;
__int8 key_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef equip_item_rune_1;
int equip_item_rune_1_tableId(){return 189;};
BnsTables::Shared::TableRef equip_item_rune_2;
int equip_item_rune_2_tableId(){return 189;};
BnsTables::Shared::TableRef equip_item_bracelet;
int equip_item_bracelet_tableId(){return 189;};
BnsTables::Shared::TableRef key_text;
int key_text_tableId(){return 405;};
BnsTables::Shared::TableRef function_name;
int function_name_tableId(){return 405;};
__int32 skill_id[30];
__int8 variation_id[30];
char Pad0[2];
BnsTables::Shared::TableRef condition_icon_normal_text[30];
int condition_icon_normal_text_tableId(){return 405;};
BnsTables::Shared::TableRef condition_icon_over_text[30];
int condition_icon_over_text_tableId(){return 405;};
BnsTables::Shared::TableRef condition_tooltip_text[30];
int condition_tooltip_text_tableId(){return 405;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 360; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_simple_context_flow_RecordPtr // : DrRecordPtr
	{
		skill_train_simple_context_flow_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_train_simple_context_flow_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}