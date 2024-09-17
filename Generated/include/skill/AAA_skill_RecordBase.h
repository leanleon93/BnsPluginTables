/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
    enum class skill_RecordSubType : __int32
    {
		skill_record_sub_active_skill = 0,
		skill_record_sub_passive_skill = 1,
		skill_record_sub_action = 2,
		skill_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct skill_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
__int8 variation_1_level;
__int8 variation_2_level;
__int8 variation_3_level;
__int8 variation_4_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* name;
Data::TableRef name2;
int name2_tableId(){return 405;};
__int16 short_cut_key;
__int16 short_cut_key_classic;

		static TableVersion Version() { return TableVersion(4, 0); }
		static __int16 TableId() { return 335; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_RecordPtr // : DrRecordPtr
	{
		skill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}