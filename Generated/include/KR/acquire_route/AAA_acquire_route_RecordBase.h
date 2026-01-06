/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct acquire_route_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int64 autoId;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
signed char category;
char Pad0[3];
BnsTables::Shared::TableRef route_text[5];
__int32 route_text_Size() const {return 5;};
int route_text_tableId() const {return 435;};
BnsTables::Shared::ExplicitTableRef route_ref[5];
__int32 route_ref_Size() const {return 5;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 1); }
		static __int16 TableId() { return 8; }
		static __int32 SubType() { return -1; }
		enum class category {
			None = 0,
			NormalQuest = 1,
			FactionQuest = 2,
			EpicQuest = 3,
			JobQuest = 4,
			NormalDailyQuest = 5,
			NormalWeeklyQuest = 6,
			FactionDailyQuest = 7,
			FactionWeeklyQuest = 8,
			AttractionQuest = 9,
			Production = 10,
			GuildCraft = 11,
			PieceTransform = 12,
			MysteriousStore = 13,
			DuelBotChallenge = 14,
			SpecialTransform = 15,
			WeaponGemTransform = 16,
			MaterialTransform = 17,
			CostumeTransform = 18,
			PetLegendTransform = 19,
			ChallengeToday = 20,
			FieldStore = 21,
			AttractionStore = 22,
			DungeonStore = 23,
			Store = 24,
			RefinerEnv = 25,
			FieldEnv = 26,
			RankingReward = 27,
			FieldNpc = 28,
			DungeonNpc = 29,
			RaidNpc = 30,
			LegendaryBox = 31,
			Deduction_Attraction = 32,
			Deduction_Dungeon = 33,
			Deduction_Field = 34,
			Deduction_Worldmap = 35,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) acquire_route_RecordPtr // : DrRecordPtr
	{
		acquire_route_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}