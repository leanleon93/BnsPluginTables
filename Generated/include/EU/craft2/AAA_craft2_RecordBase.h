/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct craft2_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view category_EnumValue() const {return Get_category_EnumValue(key.category);};
BnsTables::Shared::TableRef name;
int name_tableId() const {return 420;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 182;};
__int16 icon_index;
char Pad0[2];
BnsTables::Shared::TableRef none_selected_icon_texture;
int none_selected_icon_texture_tableId() const {return 182;};
__int16 none_selected_icon_index;
char Pad1[2];
BnsTables::Shared::TableRef join_msg;
int join_msg_tableId() const {return 155;};
BnsTables::Shared::TableRef level_up_msg;
int level_up_msg_tableId() const {return 155;};
BnsTables::Shared::TableRef max_level_msg;
int max_level_msg_tableId() const {return 155;};
__int32 need_exp_for_level[100];
__int32 need_exp_for_level_Size() const {return 100;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 78; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft2_RecordPtr // : DrRecordPtr
	{
		craft2_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}