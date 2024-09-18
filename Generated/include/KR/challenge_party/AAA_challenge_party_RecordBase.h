/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct challenge_party_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef zone;
int zone_tableId(){return 461;};
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};
wchar_t* arena_minimap;
BnsTables::Shared::TableRef required_item[2];
int required_item_tableId(){return 195;};
__int16 required_item_count[2];
bool use_training_mode;
char Pad0[3];
BnsTables::Shared::TableRef group;
int group_tableId(){return 16;};
__int32 play_time;
__int32 pattern_time[8];
__int32 score_per_evaluate;
__int32 kill_score;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 14); }
		static __int16 TableId() { return 53; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) challenge_party_RecordPtr // : DrRecordPtr
	{
		challenge_party_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::challenge_party_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}