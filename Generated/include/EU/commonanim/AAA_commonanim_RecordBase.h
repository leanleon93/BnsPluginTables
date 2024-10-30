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
		std::string_view anim_type_EnumValue() const {return Get_anim_type_EnumValue(key.anim_type);};
wchar_t* anim_name;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 62; }
		static __int32 SubType() { return 0; }
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