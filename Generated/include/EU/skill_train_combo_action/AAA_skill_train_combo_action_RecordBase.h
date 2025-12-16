/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
		wchar_t* alias;
BnsTables::Shared::TableRef stance_name;
int stance_name_tableId() const {return 435;};
BnsTables::Shared::TableRef buff_name;
int buff_name_tableId() const {return 435;};
BnsTables::Shared::TableRef function_name;
int function_name_tableId() const {return 435;};
BnsTables::Shared::TableRef function_desc;
int function_desc_tableId() const {return 435;};
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
int condition_icon_normal_text_tableId() const {return 435;};
BnsTables::Shared::TableRef condition_icon_over_text[10];
__int32 condition_icon_over_text_Size() const {return 10;};
int condition_icon_over_text_tableId() const {return 435;};
BnsTables::Shared::TableRef condition_tooltip_text[10];
__int32 condition_tooltip_text_Size() const {return 10;};
int condition_tooltip_text_tableId() const {return 435;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 384; }
		static __int32 SubType() { return -1; }
		enum class job {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};

		enum class job_style {
			base_1 = 0,
			base_2 = 1,
			base_3 = 2,
			base_4 = 3,
			base_5 = 4,
			advanced_1 = 5,
			advanced_2 = 6,
			advanced_3 = 7,
			advanced_4 = 8,
			advanced_5 = 9,
		};

		enum class combo_skill {
			red = 0,
			blue = 1,
			green = 2,
			yellow = 3,
		};
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