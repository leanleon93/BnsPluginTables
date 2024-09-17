/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct job_change_Record : DrEl
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
Data::TableRef zone;
int zone_tableId(){return 443;};
Data::TableRef cost_item;
int cost_item_tableId(){return 189;};
__int8 required_level;
__int8 required_mastery_level;
__int16 required_quest_id[2];
__int16 required_achievement_id;
__int16 required_achievement_step;
char Pad0[2];
Data::TableRef appearance[7];
int appearance_tableId(){return 84;};

		static TableVersion Version() { return TableVersion(3, 2); }
		static __int16 TableId() { return 218; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_RecordPtr // : DrRecordPtr
	{
		job_change_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_change_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}