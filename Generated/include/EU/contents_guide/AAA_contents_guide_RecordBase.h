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
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char category;
signed char min_level;
signed char max_level;
char Pad0[1];
BnsTables::Shared::TableRef title;
int title_tableId() const {return 438;};
BnsTables::Shared::TableRef description;
int description_tableId() const {return 438;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 71; }
		static __int32 SubType() { return -1; }
		enum class category {
			none = 0,
			boss_monster = 1,
			craft = 2,
			achievement = 3,
			daily_quest = 4,
			faction_battle = 5,
			arena_match = 6,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contents_guide_RecordPtr // : DrRecordPtr
	{
		contents_guide_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}