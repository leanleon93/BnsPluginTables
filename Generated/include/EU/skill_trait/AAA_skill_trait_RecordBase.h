/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

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
int name2_tableId() const {return 427;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 184;};
__int16 icon_index;
char Pad1[2];
BnsTables::Shared::TableRef trait_symbol;
int trait_symbol_tableId() const {return 184;};
__int16 trait_symbol_index;
char Pad2[2];
BnsTables::Shared::TableRef tooltip_train_name;
int tooltip_train_name_tableId() const {return 427;};
BnsTables::Shared::TableRef tooltip_train_description;
int tooltip_train_description_tableId() const {return 427;};
BnsTables::Shared::TableRef tooltip_effect_description;
int tooltip_effect_description_tableId() const {return 427;};
BnsTables::Shared::TableRef tooltip_skill_systematization_group[6];
__int32 tooltip_skill_systematization_group_Size() const {return 6;};
int tooltip_skill_systematization_group_tableId() const {return 369;};
__int32 tooltip_acquire_skill_list_skill3_id[6];
__int32 tooltip_acquire_skill_list_skill3_id_Size() const {return 6;};
BnsTables::Shared::TableRef tooltip_acquire_skill_list_skill3_description[6];
__int32 tooltip_acquire_skill_list_skill3_description_Size() const {return 6;};
int tooltip_acquire_skill_list_skill3_description_tableId() const {return 427;};
__int32 tooltip_variable_skill_list_skill3_id[6];
__int32 tooltip_variable_skill_list_skill3_id_Size() const {return 6;};
signed char tooltip_variable_skill_list_skill3_variation_id[6];
__int32 tooltip_variable_skill_list_skill3_variation_id_Size() const {return 6;};
char Pad3[2];
BnsTables::Shared::TableRef tooltip_variable_skill_list_skill3_description[6];
__int32 tooltip_variable_skill_list_skill3_description_Size() const {return 6;};
int tooltip_variable_skill_list_skill3_description_tableId() const {return 427;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 11); }
		static __int16 TableId() { return 382; }
		static __int32 SubType() { return -1; }
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