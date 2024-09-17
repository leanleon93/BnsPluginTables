/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct skillsystematization_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 systematization;
char Pad0[3];
wchar_t* name;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef description;
int description_tableId(){return 405;};
__int8 sort_no;
char Pad1[3];
Data::TableRef group;
int group_tableId(){return 348;};
Data::TableRef filter_group;
int filter_group_tableId(){return 347;};

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 346; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillsystematization_RecordPtr // : DrRecordPtr
	{
		skillsystematization_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillsystematization_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}