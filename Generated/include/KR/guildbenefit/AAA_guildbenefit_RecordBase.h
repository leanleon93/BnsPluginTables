/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct guildbenefit_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 benefit_id;
__int32 duration;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 benefit_type;
char Pad0[3];
wchar_t* alias;
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};
BnsTables::Shared::TableRef desc;
int desc_tableId(){return 420;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId(){return 182;};
__int16 icon_index;
__int16 order;
__int16 guild_level;
char Pad1[2];
__int32 money;
BnsTables::Shared::TableRef item[5];
int item_tableId(){return 195;};
__int32 item_count[5];
__int32 guild_point;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 166; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guildbenefit_RecordPtr // : DrRecordPtr
	{
		guildbenefit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guildbenefit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}