/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct chat_channel_option_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 category;
__int8 font_color_index;
__int8 group;
bool modifiable;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 2); }
		static __int16 TableId() { return 55; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) chat_channel_option_RecordPtr // : DrRecordPtr
	{
		chat_channel_option_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::chat_channel_option_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}