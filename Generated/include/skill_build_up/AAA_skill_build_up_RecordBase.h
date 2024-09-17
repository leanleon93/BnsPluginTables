/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_build_up_Record : DrEl
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
__int8 max_level;
__int8 required_build_up_point[30];
char Pad0[1];
__int16 required_build_up_point_level[30];
Data::TableRef skill_modify_info[30];
int skill_modify_info_tableId(){return 339;};

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 327; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_build_up_RecordPtr // : DrRecordPtr
	{
		skill_build_up_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_build_up_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}