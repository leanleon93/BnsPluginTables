/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct weapon_tempered_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char weapon_type;
signed char level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view weapon_type_EnumValue() const {return Get_weapon_type_EnumValue(key.weapon_type);};
wchar_t* show;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 445; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weapon_tempered_RecordPtr // : DrRecordPtr
	{
		weapon_tempered_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}