/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct fish_Record : BnsTables::Shared::DrEl
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
signed char fish_grade;
char Pad0[3];
__int32 size_min;
__int32 size_max;
__int16 acquire_life_contents_point;
signed char reduce_life_contents_cq_amount;
char Pad1[1];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 438;};
wchar_t* mesh;
BnsTables::Shared::IconRef icon;
wchar_t* col;
wchar_t* desc;
__int16 sort_num;
bool hide;
char Pad2[1];
BnsTables::Shared::TableRef fishing_field_group[20];
__int32 fishing_field_group_Size() const {return 20;};
int fishing_field_group_tableId() const {return 155;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 17); }
		static __int16 TableId() { return 152; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fish_RecordPtr // : DrRecordPtr
	{
		fish_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}