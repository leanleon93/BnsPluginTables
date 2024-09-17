/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct fishing_field_group_Record : DrEl
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
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
Data::TableRef fishing_field[10];
int fishing_field_tableId(){return 144;};
__int16 fishing_field_count;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 145; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishing_field_group_RecordPtr // : DrRecordPtr
	{
		fishing_field_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fishing_field_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}