/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itemskill_Record : BnsTables::Shared::DrEl
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
__int32 skill_id;
__int8 skill_variation_id[8];
bool include_inheritance_skill;
char Pad0[3];
BnsTables::Shared::TableRef item_sim_skill;
int item_sim_skill_tableId(){return 337;};
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};
BnsTables::Shared::TableRef description2;
int description2_tableId(){return 420;};
BnsTables::Shared::TableRef item_skill_tooltip;
int item_skill_tooltip_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 13); }
		static __int16 TableId() { return 215; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemskill_RecordPtr // : DrRecordPtr
	{
		itemskill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemskill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}