/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {

#pragma pack(push, 1)
	struct craft2_Record : DrEl
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
		Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad0[2];
Data::TableRef none_selected_icon_texture;
int none_selected_icon_texture_tableId(){return 178;};
__int16 none_selected_icon_index;
char Pad1[2];
Data::TableRef join_msg;
int join_msg_tableId(){return 151;};
Data::TableRef level_up_msg;
int level_up_msg_tableId(){return 151;};
Data::TableRef max_level_msg;
int max_level_msg_tableId(){return 151;};
__int32 need_exp_for_level[100];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 77; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft2_RecordPtr // : DrRecordPtr
	{
		craft2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::craft2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}