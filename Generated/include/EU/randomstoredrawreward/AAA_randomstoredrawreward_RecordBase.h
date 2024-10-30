/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct randomstoredrawreward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;
signed char random_store_number;
__int32 required_draw_count;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view random_store_number_EnumValue() const {return Get_random_store_number_EnumValue(key.random_store_number);};
wchar_t* alias;
BnsTables::Shared::TableRef fixed_reward[4];
__int32 fixed_reward_Size() const {return 4;};
int fixed_reward_tableId() const {return 195;};
signed char fixed_reward_count[4];
__int32 fixed_reward_count_Size() const {return 4;};
BnsTables::Shared::TableRef optional_reward[8];
__int32 optional_reward_Size() const {return 8;};
int optional_reward_tableId() const {return 195;};
signed char optional_reward_count[8];
__int32 optional_reward_count_Size() const {return 8;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 306; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) randomstoredrawreward_RecordPtr // : DrRecordPtr
	{
		randomstoredrawreward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}