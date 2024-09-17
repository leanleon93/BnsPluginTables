/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
    enum class skill_modify_info_RecordSubType : __int32
    {
		skill_modify_info_record_sub_normal = 0,
		skill_modify_info_record_sub_skill = 1,
		skill_modify_info_record_sub_skillsystematization = 2,
		skill_modify_info_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct skill_modify_info_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 recycle_duration_modify_percent;
char Pad0[2];
__int32 recycle_duration_modify_diff;
__int16 sp_consume_modify_diff[2];
__int16 damage_power_percent_modify_percent;
char Pad1[2];
__int32 damage_power_percent_modify_diff;
__int16 hp_drain_percent_modify_percent;
char Pad2[2];
__int32 hp_drain_percent_modify_diff;
__int16 heal_percent_modify_percent;
char Pad3[2];
__int32 heal_percent_modify_diff;
Data::TableRef description;
int description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 339; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_modify_info_RecordPtr // : DrRecordPtr
	{
		skill_modify_info_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_modify_info_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}