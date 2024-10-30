/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skill_build_up_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 parent_skill3_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char max_level;
signed char required_build_up_point[30];
__int32 required_build_up_point_Size() const {return 30;};
char Pad0[1];
__int16 required_build_up_point_level[30];
__int32 required_build_up_point_level_Size() const {return 30;};
BnsTables::Shared::TableRef skill_modify_info[30];
__int32 skill_modify_info_Size() const {return 30;};
int skill_modify_info_tableId() const {return 352;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 340; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_build_up_RecordPtr // : DrRecordPtr
	{
		skill_build_up_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}