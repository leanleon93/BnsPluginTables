/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_trait_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;
signed char job_style;
signed char tier;
signed char tier_variation;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool enable;
char Pad0[3];
__int32 fixed_skill3_id[64];
__int32 fixed_skill3_id_Size() const {return 64;};
__int32 variable_skill3_id[32];
__int32 variable_skill3_id_Size() const {return 32;};
signed char variable_skill3_variation_id[32];
__int32 variable_skill3_variation_id_Size() const {return 32;};
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 441;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 190;};
__int16 icon_index;
char Pad1[2];
BnsTables::Shared::TableRef trait_symbol;
int trait_symbol_tableId() const {return 190;};
__int16 trait_symbol_index;
char Pad2[2];
BnsTables::Shared::TableRef tooltip_train_name;
int tooltip_train_name_tableId() const {return 441;};
BnsTables::Shared::TableRef tooltip_train_description;
int tooltip_train_description_tableId() const {return 441;};
BnsTables::Shared::TableRef tooltip_effect_description;
int tooltip_effect_description_tableId() const {return 441;};
BnsTables::Shared::TableRef tooltip_skill_systematization_group[6];
__int32 tooltip_skill_systematization_group_Size() const {return 6;};
int tooltip_skill_systematization_group_tableId() const {return 383;};
__int32 tooltip_acquire_skill_list_skill3_id[6];
__int32 tooltip_acquire_skill_list_skill3_id_Size() const {return 6;};
BnsTables::Shared::TableRef tooltip_acquire_skill_list_skill3_description[6];
__int32 tooltip_acquire_skill_list_skill3_description_Size() const {return 6;};
int tooltip_acquire_skill_list_skill3_description_tableId() const {return 441;};
__int32 tooltip_variable_skill_list_skill3_id[6];
__int32 tooltip_variable_skill_list_skill3_id_Size() const {return 6;};
signed char tooltip_variable_skill_list_skill3_variation_id[6];
__int32 tooltip_variable_skill_list_skill3_variation_id_Size() const {return 6;};
char Pad3[2];
BnsTables::Shared::TableRef tooltip_variable_skill_list_skill3_description[6];
__int32 tooltip_variable_skill_list_skill3_description_Size() const {return 6;};
int tooltip_variable_skill_list_skill3_description_tableId() const {return 441;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 11); }
		static __int16 TableId() { return 396; }
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
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_trait_RecordPtr // : DrRecordPtr
	{
		skill_trait_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}