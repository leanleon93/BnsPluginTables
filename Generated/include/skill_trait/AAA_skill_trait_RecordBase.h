/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_trait_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;
__int8 job_style;
__int8 tier;
__int8 tier_variation;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool enable;
char Pad0[3];
__int32 fixed_skill3_id[64];
__int32 variable_skill3_id[32];
__int8 variable_skill3_variation_id[32];
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad1[2];
Data::TableRef trait_symbol;
int trait_symbol_tableId(){return 178;};
__int16 trait_symbol_index;
char Pad2[2];
Data::TableRef tooltip_train_name;
int tooltip_train_name_tableId(){return 405;};
Data::TableRef tooltip_train_description;
int tooltip_train_description_tableId(){return 405;};
Data::TableRef tooltip_effect_description;
int tooltip_effect_description_tableId(){return 405;};
Data::TableRef tooltip_skill_systematization_group[6];
int tooltip_skill_systematization_group_tableId(){return 348;};
__int32 tooltip_acquire_skill_list_skill3_id[6];
Data::TableRef tooltip_acquire_skill_list_skill3_description[6];
int tooltip_acquire_skill_list_skill3_description_tableId(){return 405;};
__int32 tooltip_variable_skill_list_skill3_id[6];
__int8 tooltip_variable_skill_list_skill3_variation_id[6];
char Pad3[2];
Data::TableRef tooltip_variable_skill_list_skill3_description[6];
int tooltip_variable_skill_list_skill3_description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 11); }
		static __int16 TableId() { return 361; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_trait_RecordPtr // : DrRecordPtr
	{
		skill_trait_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_trait_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}