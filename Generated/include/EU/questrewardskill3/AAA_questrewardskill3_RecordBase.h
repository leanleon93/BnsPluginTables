/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct questrewardskill3_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char job_style;
char Pad0[3];
BnsTables::Shared::TableRef skill3[4];
__int32 skill3_Size() const {return 4;};
int skill3_tableId() const {return 349;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 308; }
		static __int32 SubType() { return -1; }
		enum class job_style {
			base_1 = 0,
			base_2 = 1,
			base_3 = 2,
			base_4 = 3,
			base_5 = 4,
			advanced_1 = 5,
			advanced_2 = 6,
			advanced_3 = 7,
			advanced_4 = 8,
			advanced_5 = 9,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) questrewardskill3_RecordPtr // : DrRecordPtr
	{
		questrewardskill3_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}