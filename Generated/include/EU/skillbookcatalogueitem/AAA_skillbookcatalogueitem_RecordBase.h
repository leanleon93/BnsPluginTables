/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct skillbookcatalogueitem_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char server_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		BnsTables::Shared::TableRef parent_skill;
int parent_skill_tableId() const {return 350;};
BnsTables::Shared::TableRef base_skill;
int base_skill_tableId() const {return 350;};
BnsTables::Shared::TableRef change_skill[4];
__int32 change_skill_Size() const {return 4;};
int change_skill_tableId() const {return 350;};
signed char row;
signed char column;
signed char job;
signed char equip_type;
signed char tier;
char Pad0[3];
BnsTables::Shared::TableRef base_skill_acquire_route;
int base_skill_acquire_route_tableId() const {return 221;};
BnsTables::Shared::TableRef change_skill_acquire_route[4];
__int32 change_skill_acquire_route_Size() const {return 4;};
int change_skill_acquire_route_tableId() const {return 221;};
signed char job_specialization[3];
__int32 job_specialization_Size() const {return 3;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(5, 0); }
		static __int16 TableId() { return 354; }
		static __int32 SubType() { return -1; }
		enum class server_type {
			nck = 0,
			nck_neo_gold = 1,
		};

		enum class job {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};

		enum class equip_type {
			none = 0,
			weapon = 1,
			costume = 2,
			earring = 3,
			eyeglass = 4,
			hat = 5,
			ring = 6,
			necklace = 7,
			gem_1 = 8,
			gem_2 = 9,
			gem_3 = 10,
			gem_4 = 11,
			gem_5 = 12,
			gem_6 = 13,
			gem_7 = 14,
			gem_8 = 15,
			attach = 16,
			belt = 17,
			bracelet = 18,
			soul = 19,
			soul_2 = 20,
			gloves = 21,
			pet_1 = 22,
			pet_2 = 23,
			rune_1 = 24,
			rune_2 = 25,
			nova = 26,
			badge_1_premium = 27,
			badge_2_premium = 28,
			badge_3_premium = 29,
			badge_1_normal = 30,
			badge_2_normal = 31,
			badge_3_normal = 32,
			badge_appearance = 33,
			vehicle = 34,
			normal_state_appearance = 35,
			idle_state_appearance = 36,
			chatting_symbol = 37,
			portrait_appearance = 38,
			hypermove_appearance = 39,
			name_plate_appearance = 40,
			speech_bubble_appearance = 41,
			talk_social = 42,
			armlet_1 = 43,
			armlet_2 = 44,
		};

		enum class job_specialization {
			job_specialization_none = 0,
			gyeyeor1 = 1,
			gyeyeor2 = 2,
			gyeyeor3 = 3,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillbookcatalogueitem_RecordPtr // : DrRecordPtr
	{
		skillbookcatalogueitem_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}