/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct pc_hidden_character_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* hidden_mesh_path;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 291; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_hidden_character_RecordPtr // : DrRecordPtr
	{
		pc_hidden_character_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}