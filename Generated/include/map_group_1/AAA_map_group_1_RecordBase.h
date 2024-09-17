/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct map_group_1_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef map_group_1_guide;
Data::TableRef talk_to_self_quests[127];
int talk_to_self_quests_tableId(){return 283;};
Data::TableRef talk_to_self_quests2[127];
int talk_to_self_quests2_tableId(){return 283;};
Data::TableRef talk_to_self_quests3[127];
int talk_to_self_quests3_tableId(){return 283;};

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 237; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) map_group_1_RecordPtr // : DrRecordPtr
	{
		map_group_1_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::map_group_1_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}