/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct fish_Record : DrEl
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
__int8 fish_grade;
char Pad0[3];
__int32 size_min;
__int32 size_max;
__int16 acquire_life_contents_point;
__int8 reduce_life_contents_cq_amount;
char Pad1[1];
Data::TableRef name;
int name_tableId(){return 405;};
wchar_t* mesh;
Data::IconRef icon;
wchar_t* col;
wchar_t* desc;
__int16 sort_num;
bool hide;
char Pad2[1];
Data::TableRef fishing_field_group[20];
int fishing_field_group_tableId(){return 145;};

		static TableVersion Version() { return TableVersion(0, 17); }
		static __int16 TableId() { return 142; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fish_RecordPtr // : DrRecordPtr
	{
		fish_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fish_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}