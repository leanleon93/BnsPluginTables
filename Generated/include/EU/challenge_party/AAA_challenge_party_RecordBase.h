/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct challenge_party_Record : BnsTables::Shared::DrEl
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
		wchar_t* alias;
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 480;};
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
wchar_t* arena_minimap;
BnsTables::Shared::TableRef required_item[2];
__int32 required_item_Size() const {return 2;};
int required_item_tableId() const {return 202;};
__int16 required_item_count[2];
__int32 required_item_count_Size() const {return 2;};
bool use_training_mode;
char Pad0[3];
BnsTables::Shared::TableRef group;
int group_tableId() const {return 16;};
__int32 play_time;
__int32 pattern_time[8];
__int32 pattern_time_Size() const {return 8;};
__int32 score_per_evaluate;
__int32 kill_score;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 14); }
		static __int16 TableId() { return 53; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) challenge_party_RecordPtr // : DrRecordPtr
	{
		challenge_party_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}