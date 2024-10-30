/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_train_combo_action_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;
signed char job_style;
signed char stance_index;
signed char buff_index;
signed char function_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view job_EnumValue() const {return Get_job_EnumValue(key.job);};
std::string_view job_style_EnumValue() const {return Get_job_style_EnumValue(key.job_style);};
wchar_t* alias;
BnsTables::Shared::TableRef stance_name;
int stance_name_tableId() const {return 420;};
BnsTables::Shared::TableRef buff_name;
int buff_name_tableId() const {return 420;};
BnsTables::Shared::TableRef function_name;
int function_name_tableId() const {return 420;};
BnsTables::Shared::TableRef function_desc;
int function_desc_tableId() const {return 420;};
signed char combo_skill[10];
__int32 combo_skill_Size() const {return 10;};
char Pad0[2];
__int32 skill_id[10];
__int32 skill_id_Size() const {return 10;};
signed char variation_id[10];
__int32 variation_id_Size() const {return 10;};
char Pad1[2];
BnsTables::Shared::TableRef condition_icon_normal_text[10];
__int32 condition_icon_normal_text_Size() const {return 10;};
int condition_icon_normal_text_tableId() const {return 420;};
BnsTables::Shared::TableRef condition_icon_over_text[10];
__int32 condition_icon_over_text_Size() const {return 10;};
int condition_icon_over_text_tableId() const {return 420;};
BnsTables::Shared::TableRef condition_tooltip_text[10];
__int32 condition_tooltip_text_Size() const {return 10;};
int condition_tooltip_text_tableId() const {return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 369; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_combo_action_RecordPtr // : DrRecordPtr
	{
		skill_train_combo_action_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}