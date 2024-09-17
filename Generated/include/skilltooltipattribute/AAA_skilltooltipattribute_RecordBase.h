/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct skilltooltipattribute_Record : DrEl
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
__int8 arg_type[4];
Data::TableRef text;
int text_tableId(){return 405;};
Data::IconRef icon;
__int8 skill_modify_type;

		static TableVersion Version() { return TableVersion(0, 10); }
		static __int16 TableId() { return 350; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skilltooltipattribute_RecordPtr // : DrRecordPtr
	{
		skilltooltipattribute_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skilltooltipattribute_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}