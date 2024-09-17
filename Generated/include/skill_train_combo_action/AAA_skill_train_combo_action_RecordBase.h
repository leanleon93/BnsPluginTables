/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_train_combo_action_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;
__int8 job_style;
__int8 stance_index;
__int8 buff_index;
__int8 function_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef stance_name;
int stance_name_tableId(){return 405;};
Data::TableRef buff_name;
int buff_name_tableId(){return 405;};
Data::TableRef function_name;
int function_name_tableId(){return 405;};
Data::TableRef function_desc;
int function_desc_tableId(){return 405;};
__int8 combo_skill[10];
char Pad0[2];
__int32 skill_id[10];
__int8 variation_id[10];
char Pad1[2];
Data::TableRef condition_icon_normal_text[10];
int condition_icon_normal_text_tableId(){return 405;};
Data::TableRef condition_icon_over_text[10];
int condition_icon_over_text_tableId(){return 405;};
Data::TableRef condition_tooltip_text[10];
int condition_tooltip_text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 355; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_combo_action_RecordPtr // : DrRecordPtr
	{
		skill_train_combo_action_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_train_combo_action_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}