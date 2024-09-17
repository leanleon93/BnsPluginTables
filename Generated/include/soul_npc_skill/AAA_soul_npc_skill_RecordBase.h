/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct soul_npc_skill_Record : DrEl
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
Data::TableRef skill3[10];
int skill3_tableId(){return 324;};
wchar_t* soul_particle;
wchar_t* target_ui_imageset;
Data::TableRef soul_tooltip;
int soul_tooltip_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 375; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_npc_skill_RecordPtr // : DrRecordPtr
	{
		soul_npc_skill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soul_npc_skill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}