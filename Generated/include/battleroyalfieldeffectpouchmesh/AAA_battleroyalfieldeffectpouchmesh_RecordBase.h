/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct battleroyalfieldeffectpouchmesh_Record : DrEl
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
wchar_t* skeletal_mesh;
wchar_t* anim_set;
wchar_t* physics_asset;
Data::IconRef icon;
wchar_t* owner_particle;
wchar_t* mark_particle;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 34; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battleroyalfieldeffectpouchmesh_RecordPtr // : DrRecordPtr
	{
		battleroyalfieldeffectpouchmesh_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::battleroyalfieldeffectpouchmesh_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}