/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct customdressmotion_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 order;
__int8 race;
__int8 sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* sequence;
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 87; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customdressmotion_RecordPtr // : DrRecordPtr
	{
		customdressmotion_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::customdressmotion_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}