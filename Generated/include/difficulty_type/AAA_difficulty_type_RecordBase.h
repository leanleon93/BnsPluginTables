/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct difficulty_type_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 max_party_member_count;
bool default_val;
bool is_pvp;
char Pad0[1];
Data::TableRef name;
int name_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 97; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) difficulty_type_RecordPtr // : DrRecordPtr
	{
		difficulty_type_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::difficulty_type_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}