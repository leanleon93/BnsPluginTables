/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct soul_boost_mission_Record : BnsTables::Shared::DrEl
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
signed char mission_type;
signed char entity_type[10];
__int32 entity_type_Size() const {return 10;};
char Pad0[1];
wchar_t* condition_alias[10];
__int32 condition_alias_Size() const {return 10;};
__int64 condition[10];
__int32 condition_Size() const {return 10;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 385; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_mission_RecordPtr // : DrRecordPtr
	{
		soul_boost_mission_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}