/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct weapon_gem_effect_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 level;
__int8 weapon_gem_type;
__int8 weapon_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* effect_show;
BnsTables::Shared::RGB effect_color;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 443; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weapon_gem_effect_RecordPtr // : DrRecordPtr
	{
		weapon_gem_effect_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::weapon_gem_effect_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}