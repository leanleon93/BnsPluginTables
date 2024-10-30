/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct constellation_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef name;
int name_tableId() const {return 420;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 420;};
signed char star_count;
char Pad0[3];
wchar_t* widget_name;
signed char slot_index;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 3); }
		static __int16 TableId() { return 64; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) constellation_RecordPtr // : DrRecordPtr
	{
		constellation_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}