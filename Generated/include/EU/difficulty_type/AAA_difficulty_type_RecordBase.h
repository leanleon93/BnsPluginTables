/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct difficulty_type_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char max_party_member_count;
bool default_val;
bool is_pvp;
char Pad0[1];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 426;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 98; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) difficulty_type_RecordPtr // : DrRecordPtr
	{
		difficulty_type_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}