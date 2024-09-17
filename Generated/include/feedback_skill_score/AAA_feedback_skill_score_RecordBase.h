/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct feedback_skill_score_Record : DrEl
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
Data::TableRef skill;
int skill_tableId(){return 324;};
__int8 skill_result[8];

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 135; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) feedback_skill_score_RecordPtr // : DrRecordPtr
	{
		feedback_skill_score_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::feedback_skill_score_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}