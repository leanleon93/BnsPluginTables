/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class contents_guide_RecordSubType : __int32
    {
		contents_guide_record_sub_boss_monster = 0,
		contents_guide_record_sub_count = 1,
    };
#pragma pack(push, 1)
	struct contents_guide_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 category;
__int8 min_level;
__int8 max_level;
char Pad0[1];
BnsTables::Shared::TableRef title;
int title_tableId(){return 405;};
BnsTables::Shared::TableRef description;
int description_tableId(){return 405;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 68; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contents_guide_RecordPtr // : DrRecordPtr
	{
		contents_guide_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contents_guide_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}