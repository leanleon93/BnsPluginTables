/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct campfire_Record : BnsTables::Shared::DrEl
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
__int16 additional_heal_percent;
char Pad0[2];
__int32 remain_duration;
wchar_t* mesh_id;
wchar_t* animset_name;
wchar_t* anim_show;
wchar_t* despawn_show;
BnsTables::Shared::TableRef party_match;
int party_match_tableId(){return 273;};
BnsTables::Shared::TableRef map_tooltip;
int map_tooltip_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 8); }
		static __int16 TableId() { return 47; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) campfire_RecordPtr // : DrRecordPtr
	{
		campfire_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::campfire_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}