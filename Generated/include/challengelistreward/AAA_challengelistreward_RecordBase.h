/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct challengelistreward_Record : DrEl
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
Data::TableRef reward_item[6];
int reward_item_tableId(){return 189;};
__int16 reward_item_count[6];
__int32 reward_money;
__int32 reward_account_exp;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 52; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) challengelistreward_RecordPtr // : DrRecordPtr
	{
		challengelistreward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::challengelistreward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}