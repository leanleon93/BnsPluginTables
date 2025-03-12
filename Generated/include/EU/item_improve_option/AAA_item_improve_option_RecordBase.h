/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct item_improve_option_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char ability;
char Pad0[3];
__int32 ability_value;
BnsTables::Shared::TableRef effect;
int effect_tableId() const {return 115;};
BnsTables::Shared::TableRef effect_description;
int effect_description_tableId() const {return 427;};
BnsTables::Shared::TableRef skill_modify_info_group[10];
__int32 skill_modify_info_group_Size() const {return 10;};
int skill_modify_info_group_tableId() const {return 360;};
BnsTables::Shared::TableRef additional_description;
int additional_description_tableId() const {return 427;};
BnsTables::Shared::IconRef draw_option_icon;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(4, 2); }
		static __int16 TableId() { return 208; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_option_RecordPtr // : DrRecordPtr
	{
		item_improve_option_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}