/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct questrewardskill3_Record : DrEl
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
Data::TableRef skill3[4];
int skill3_tableId(){return 324;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 285; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) questrewardskill3_RecordPtr // : DrRecordPtr
	{
		questrewardskill3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::questrewardskill3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}