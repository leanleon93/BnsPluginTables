/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct statesocial_Record : DrEl
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
Data::TableRef sit_state_social;
int sit_state_social_tableId(){return 381;};
bool can_sitdown;
char Pad0[3];
wchar_t* start_transit;
wchar_t* idle;
wchar_t* end_transit;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 381; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) statesocial_RecordPtr // : DrRecordPtr
	{
		statesocial_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::statesocial_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}