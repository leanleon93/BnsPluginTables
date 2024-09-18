/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itempouchmesh2_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 pouch_appearance;
__int8 npc_grade2;
bool private_pouch;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* skeletal_mesh;
wchar_t* anim_set;
wchar_t* physics_asset;
wchar_t* custom_anim;
wchar_t* despawn_showdata;
BnsTables::Shared::IconRef icon;
wchar_t* owner_particle;
wchar_t* mark_particle;
wchar_t* dropped_pouch_anim_set;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 209; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itempouchmesh2_RecordPtr // : DrRecordPtr
	{
		itempouchmesh2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itempouchmesh2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}