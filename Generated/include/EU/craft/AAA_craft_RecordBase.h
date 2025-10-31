/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct craft_Record : BnsTables::Shared::DrEl
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
		BnsTables::Shared::TableRef name;
int name_tableId() const {return 434;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId() const {return 188;};
__int16 icon_index;
char Pad0[2];
BnsTables::Shared::TableRef none_selected_icon_texture;
int none_selected_icon_texture_tableId() const {return 188;};
__int16 none_selected_icon_index;
char Pad1[2];
BnsTables::Shared::TableRef join_msg;
int join_msg_tableId() const {return 159;};
BnsTables::Shared::TableRef level_up_msg;
int level_up_msg_tableId() const {return 159;};
BnsTables::Shared::TableRef max_level_msg;
int max_level_msg_tableId() const {return 159;};
__int32 need_exp_for_level[100];
__int32 need_exp_for_level_Size() const {return 100;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 82; }
		static __int32 SubType() { return -1; }
		enum class category {
			none = 0,
			production_type_1 = 1,
			production_type_2 = 2,
			production_type_3 = 3,
			production_type_4 = 4,
			production_type_5 = 5,
			production_type_6 = 6,
			production_type_7 = 7,
			gathering_type_1 = 8,
			gathering_type_2 = 9,
			gathering_type_3 = 10,
			gathering_type_4 = 11,
			gathering_type_5 = 12,
			gathering_type_6 = 13,
			gathering_type_7 = 14,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_RecordPtr // : DrRecordPtr
	{
		craft_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}