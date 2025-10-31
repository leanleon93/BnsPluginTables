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
char Pad_key_0[2];
__int32 duration;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char benefit_type;
char Pad0[3];
wchar_t* alias;
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 435;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 188;};
__int16 icon_index;
__int16 order;
__int16 guild_level;
char Pad1[2];
__int32 money;
BnsTables::Shared::TableRef item[5];
__int32 item_Size() const {return 5;};
int item_tableId() const {return 202;};
__int32 item_count[5];
__int32 item_count_Size() const {return 5;};
__int32 guild_point;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 172; }
		static __int32 SubType() { return -1; }
		enum class benefit_type {
			none = 0,
			ability_set = 1,
			reward_set = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guildbenefit_RecordPtr // : DrRecordPtr
	{
		guildbenefit_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}