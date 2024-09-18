/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct item_combat_Record : BnsTables::Shared::DrEl
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
__int8 job_style;
char Pad0[3];
BnsTables::Shared::TableRef item_skill[16];
int item_skill_tableId(){return 215;};
BnsTables::Shared::TableRef item_skill_second[16];
int item_skill_second_tableId(){return 215;};
BnsTables::Shared::TableRef item_skill_third[16];
int item_skill_third_tableId(){return 215;};
__int32 skill_build_up_parent_skill3_id[3];
__int8 skill_build_up_level[3];
char Pad1[1];
BnsTables::Shared::TableRef skill_modify_info_group;
int skill_modify_info_group_tableId(){return 353;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 193; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_combat_RecordPtr // : DrRecordPtr
	{
		item_combat_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_combat_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}