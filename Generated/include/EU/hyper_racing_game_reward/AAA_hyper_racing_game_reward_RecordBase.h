/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct hyper_racing_game_reward_Record : BnsTables::Shared::DrEl
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
__int32 reward_exp;
__int32 reward_money;
BnsTables::Shared::TableRef reward_item[4];
int reward_item_tableId(){return 189;};
__int16 reward_item_count[4];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 177; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) hyper_racing_game_reward_RecordPtr // : DrRecordPtr
	{
		hyper_racing_game_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::hyper_racing_game_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}