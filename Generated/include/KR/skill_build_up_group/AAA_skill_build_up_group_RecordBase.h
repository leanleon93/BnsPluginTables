/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_build_up_group_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef skill_build_up_skill[127];
int skill_build_up_skill_tableId(){return 340;};
__int8 skill_build_up_skill_total_count;
char Pad0[1];
__int16 skill_build_up_skill_level_min[127];
__int16 skill_build_up_skill_level_max[127];
char Pad1[2];
BnsTables::Shared::TableRef skill_build_up_skill_level_distribution[127];
int skill_build_up_skill_level_distribution_tableId(){return 304;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 1); }
		static __int16 TableId() { return 341; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_build_up_group_RecordPtr // : DrRecordPtr
	{
		skill_build_up_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_build_up_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}