/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct fishgrade_Record : DrEl
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
Data::TableRef name;
int name_tableId(){return 405;};
wchar_t* grade_symbol;
__int8 grade;
char Pad0[1];
__int16 boundary_min;
bool rare;
bool cannot_use;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 143; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishgrade_RecordPtr // : DrRecordPtr
	{
		fishgrade_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fishgrade_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}