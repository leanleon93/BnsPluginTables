/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct attraction_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char reward_contents_type;
char Pad_key_0[1];
__int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef reward_item[3];
__int32 reward_item_Size() const {return 3;};
int reward_item_tableId() const {return 198;};
signed char reward_item_count[3];
__int32 reward_item_count_Size() const {return 3;};
char Pad0[1];
__int32 reward_exp;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 17; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) attraction_reward_RecordPtr // : DrRecordPtr
	{
		attraction_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}