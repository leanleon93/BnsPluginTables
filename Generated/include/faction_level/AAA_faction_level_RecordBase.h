/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct faction_level_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 reputation;
Data::TableRef grade_name[2];
int grade_name_tableId(){return 405;};
__int32 max_faction_score;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 131; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) faction_level_RecordPtr // : DrRecordPtr
	{
		faction_level_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::faction_level_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}