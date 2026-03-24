/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct closet_point_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char point_type;
signed char grade;
char Pad0[2];
BnsTables::Shared::TableRef title;
int title_tableId() const {return 445;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 445;};
signed char reward_type;
char Pad1[3];
__int32 reward_point;
BnsTables::Shared::IconRef reward_icon;
wchar_t* reward_show;
BnsTables::Shared::TableRef reward_talk_social;
int reward_talk_social_tableId() const {return 439;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 61; }
		static __int32 SubType() { return -1; }
		enum class point_type {
			none = 0,
			normal = 1,
			premium = 2,
		};

		enum class reward_type {
			none = 0,
			social_action = 1,
			normal_appearance = 2,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) closet_point_reward_RecordPtr // : DrRecordPtr
	{
		closet_point_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}