/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct soul_npc_skill_Record : BnsTables::Shared::DrEl
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
BnsTables::Shared::TableRef skill3[10];
int skill3_tableId(){return 337;};
wchar_t* soul_particle;
wchar_t* target_ui_imageset;
BnsTables::Shared::TableRef soul_tooltip;
int soul_tooltip_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 390; }
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