/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct feedback_boss_npc_Record : DrEl
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
Data::TableRef npc;
int npc_tableId(){return 255;};
Data::TableRef skill_score[8];
int skill_score_tableId(){return 135;};

		static TableVersion Version() { return TableVersion(1, 2); }
		static __int16 TableId() { return 132; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) feedback_boss_npc_RecordPtr // : DrRecordPtr
	{
		feedback_boss_npc_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::feedback_boss_npc_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}