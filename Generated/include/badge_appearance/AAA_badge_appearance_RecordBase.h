/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct badge_appearance_Record : DrEl
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
__int8 apperance_type;
char Pad0[3];
Data::TableRef item_alias;
int item_alias_tableId(){return 189;};
__int32 set_score[14];
wchar_t* apperance_begin_show[14];
wchar_t* apperance_end_show[14];

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 26; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) badge_appearance_RecordPtr // : DrRecordPtr
	{
		badge_appearance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::badge_appearance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}