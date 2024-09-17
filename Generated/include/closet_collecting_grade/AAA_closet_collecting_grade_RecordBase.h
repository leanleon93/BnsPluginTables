/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct closet_collecting_grade_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 grade;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 score;
Data::TableRef name;
int name_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 58; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) closet_collecting_grade_RecordPtr // : DrRecordPtr
	{
		closet_collecting_grade_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::closet_collecting_grade_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}