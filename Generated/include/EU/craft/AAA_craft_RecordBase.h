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
                __int8 category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef name;
int name_tableId(){return 405;};
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad0[2];
BnsTables::Shared::TableRef none_selected_icon_texture;
int none_selected_icon_texture_tableId(){return 178;};
__int16 none_selected_icon_index;
char Pad1[2];
BnsTables::Shared::TableRef join_msg;
int join_msg_tableId(){return 151;};
BnsTables::Shared::TableRef level_up_msg;
int level_up_msg_tableId(){return 151;};
BnsTables::Shared::TableRef max_level_msg;
int max_level_msg_tableId(){return 151;};
__int32 need_exp_for_level[100];

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 79; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_RecordPtr // : DrRecordPtr
	{
		craft_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::craft_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}