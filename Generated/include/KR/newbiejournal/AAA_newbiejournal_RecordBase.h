/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct newbiejournal_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef achievement_register;
int achievement_register_tableId() const {return 7;};
BnsTables::Shared::TableRef start_epic_quest;
int start_epic_quest_tableId() const {return 312;};
BnsTables::Shared::TableRef end_epic_quest;
int end_epic_quest_tableId() const {return 312;};
BnsTables::Shared::ExplicitTableRef attraction;
BnsTables::Shared::TableRef zone;
int zone_tableId() const {return 489;};
__int16 x;
__int16 y;
__int16 z;
__int16 yaw;
BnsTables::Shared::TableRef preceding_quest;
int preceding_quest_tableId() const {return 312;};
wchar_t* symbol_imageset;
BnsTables::Shared::TableRef description;
int description_tableId() const {return 444;};
BnsTables::Shared::TableRef guide_title;
int guide_title_tableId() const {return 444;};
BnsTables::Shared::TableRef guide_description;
int guide_description_tableId() const {return 444;};
bool join_faction;
char Pad0[3];
BnsTables::Shared::TableRef faction_reward[2];
__int32 faction_reward_Size() const {return 2;};
int faction_reward_tableId() const {return 205;};
__int16 faction_reward_count[2];
__int32 faction_reward_count_Size() const {return 2;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(6, 1); }
		static __int16 TableId() { return 280; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) newbiejournal_RecordPtr // : DrRecordPtr
	{
		newbiejournal_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}