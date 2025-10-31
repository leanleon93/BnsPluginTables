/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct fishgrade_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef name;
int name_tableId() const {return 435;};
wchar_t* grade_symbol;
signed char grade;
char Pad0[1];
__int16 boundary_min;
bool rare;
bool cannot_use;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 152; }
		static __int32 SubType() { return -1; }
		enum class grade {
			fish_grade_1 = 0,
			fish_grade_2 = 1,
			fish_grade_3 = 2,
			fish_grade_4 = 3,
			fish_grade_5 = 4,
			fish_grade_6 = 5,
			fish_grade_7 = 6,
			fish_grade_8 = 7,
			fish_grade_9 = 8,
			fish_grade_10 = 9,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishgrade_RecordPtr // : DrRecordPtr
	{
		fishgrade_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}