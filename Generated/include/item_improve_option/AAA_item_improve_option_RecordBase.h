/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct item_improve_option_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 ability;
char Pad0[3];
__int32 ability_value;
Data::TableRef effect;
int effect_tableId(){return 111;};
Data::TableRef effect_description;
int effect_description_tableId(){return 405;};
Data::TableRef skill_modify_info_group[10];
int skill_modify_info_group_tableId(){return 340;};
Data::TableRef additional_description;
int additional_description_tableId(){return 405;};
Data::IconRef draw_option_icon;

		static TableVersion Version() { return TableVersion(4, 2); }
		static __int16 TableId() { return 199; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_option_RecordPtr // : DrRecordPtr
	{
		item_improve_option_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_improve_option_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}