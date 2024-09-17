/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_build_up_group_list_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef skill_build_up_group[10];
int skill_build_up_group_tableId(){return 328;};
__int16 skill_build_up_group_weight[10];
__int32 skill_build_up_group_total_weight;
__int8 skill_build_up_group_total_count;
bool draw_enable;

		static TableVersion Version() { return TableVersion(4, 0); }
		static __int16 TableId() { return 329; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_build_up_group_list_RecordPtr // : DrRecordPtr
	{
		skill_build_up_group_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_build_up_group_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}