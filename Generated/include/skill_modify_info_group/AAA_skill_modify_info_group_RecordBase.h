/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_modify_info_group_Record : DrEl
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
__int8 job_style;
char Pad0[3];
Data::TableRef skill_modify_info[4];
int skill_modify_info_tableId(){return 339;};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 340; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_modify_info_group_RecordPtr // : DrRecordPtr
	{
		skill_modify_info_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_modify_info_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}