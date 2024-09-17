/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct summoned_appearance_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* animset;
Data::TableRef moveanim;
int moveanim_tableId(){return 393;};
Data::TableRef appearance;
int appearance_tableId(){return 84;};
wchar_t* sword;
wchar_t* glove_r;
wchar_t* glove_l;
wchar_t* hammer;
wchar_t* gun_r;
wchar_t* gun_l;

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 386; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summoned_appearance_RecordPtr // : DrRecordPtr
	{
		summoned_appearance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summoned_appearance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}