/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skilltooltip_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef skill;
int skill_tableId(){return 324;};
__int8 tooltip_group;
__int8 ect_order;
__int8 ect_order_english;
__int8 ect_order_french;
__int8 ect_order_german;
__int8 ect_order_russian;
__int8 ect_order_bportuguese;
char Pad0[1];
BnsTables::Shared::TableRef effect_attribute;
int effect_attribute_tableId(){return 350;};
wchar_t* effect_arg[4];
BnsTables::Shared::TableRef condition_attribute;
int condition_attribute_tableId(){return 350;};
wchar_t* condition_arg[2];
BnsTables::Shared::TableRef target_attribute;
int target_attribute_tableId(){return 350;};
BnsTables::Shared::TableRef before_stance_attribute;
int before_stance_attribute_tableId(){return 350;};
BnsTables::Shared::TableRef after_stance_attribute;
int after_stance_attribute_tableId(){return 350;};
BnsTables::Shared::TableRef default_text;
int default_text_tableId(){return 405;};
BnsTables::Shared::TableRef attribute_color_text;
int attribute_color_text_tableId(){return 405;};
__int8 skill_modify_diff_repeat_count;
char Pad1[1];
__int16 skill_attack_attribute_coefficient_percent;
BnsTables::Shared::TableRef item_default_text;
int item_default_text_tableId(){return 405;};
BnsTables::Shared::TableRef item_replace_text;
int item_replace_text_tableId(){return 405;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 15); }
		static __int16 TableId() { return 351; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skilltooltip_RecordPtr // : DrRecordPtr
	{
		skilltooltip_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skilltooltip_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}