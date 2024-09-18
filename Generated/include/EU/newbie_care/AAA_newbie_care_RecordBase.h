/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct newbie_care_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef dungeon;
int dungeon_tableId(){return 110;};
BnsTables::Shared::TableRef achievement_register;
int achievement_register_tableId(){return 7;};
BnsTables::Shared::TableRef reward_default;
int reward_default_tableId(){return 313;};
BnsTables::Shared::TableRef reward_difficulty_type[3];
int reward_difficulty_type_tableId(){return 313;};
BnsTables::Shared::TableRef attraction_quest;
int attraction_quest_tableId(){return 283;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 253; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) newbie_care_RecordPtr // : DrRecordPtr
	{
		newbie_care_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::newbie_care_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}