/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct battle_royal_field_effect_pouch_Record : DrEl
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
Data::TableRef effect[4];
int effect_tableId(){return 111;};
__int16 radius;

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 33; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battle_royal_field_effect_pouch_RecordPtr // : DrRecordPtr
	{
		battle_royal_field_effect_pouch_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::battle_royal_field_effect_pouch_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}