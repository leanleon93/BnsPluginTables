/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct newbie_care_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId() const {return 117;};
BnsTables::Shared::TableRef achievement_register;
int achievement_register_tableId() const {return 7;};
BnsTables::Shared::TableRef reward_default;
int reward_default_tableId() const {return 340;};
BnsTables::Shared::TableRef reward_difficulty_type[3];
__int32 reward_difficulty_type_Size() const {return 3;};
int reward_difficulty_type_tableId() const {return 340;};
BnsTables::Shared::TableRef attraction_quest;
int attraction_quest_tableId() const {return 307;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 275; }
		static __int32 SubType() { return -1; }

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) newbie_care_RecordPtr // : DrRecordPtr
	{
		newbie_care_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}