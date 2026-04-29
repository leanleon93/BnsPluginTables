/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct event_returning_user_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char state;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* title_fontset;
wchar_t* title_background_image;
BnsTables::Shared::TableRef event_returning_user_title;
int event_returning_user_title_tableId() const {return 445;};
BnsTables::Shared::TableRef event_returning_user_popup_title;
int event_returning_user_popup_title_tableId() const {return 445;};
BnsTables::Shared::TableRef event_returning_user_popup_desc;
int event_returning_user_popup_desc_tableId() const {return 445;};
__int16 world_group[10];
__int32 world_group_Size() const {return 10;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 133; }
		static __int32 SubType() { return -1; }
		enum class state {
			none = 0,
			newbie = 1,
			returnee = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) event_returning_user_reward_RecordPtr // : DrRecordPtr
	{
		event_returning_user_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}