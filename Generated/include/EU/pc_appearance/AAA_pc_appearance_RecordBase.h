/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct pc_appearance_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 race;
__int8 job;
__int8 sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* anim_set_name;
BnsTables::Shared::TableRef appearance;
int appearance_tableId(){return 84;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 7); }
		static __int16 TableId() { return 265; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_appearance_RecordPtr // : DrRecordPtr
	{
		pc_appearance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pc_appearance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}