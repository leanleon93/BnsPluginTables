/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct questbonusrewardsetting_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef quest;
int quest_tableId(){return 283;};
Data::TableRef reward;
int reward_tableId(){return 281;};
Data::TableRef basic_quota;
int basic_quota_tableId(){return 66;};
Data::TableRef contents_reset[10];
int contents_reset_tableId(){return 72;};

		static TableVersion Version() { return TableVersion(3, 0); }
		static __int16 TableId() { return 282; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) questbonusrewardsetting_RecordPtr // : DrRecordPtr
	{
		questbonusrewardsetting_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::questbonusrewardsetting_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}