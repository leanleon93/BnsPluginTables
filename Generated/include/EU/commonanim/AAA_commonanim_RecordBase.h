/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct commonanim_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char anim_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* anim_name;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 64; }
		static __int32 SubType() { return -1; }
		enum class anim_type {
			dead = 0,
			die = 1,
			loot = 2,
			mount_linker = 3,
			mount_linkee = 4,
			inhalation_linker = 5,
			inhalation_linkee = 6,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) commonanim_RecordPtr // : DrRecordPtr
	{
		commonanim_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}