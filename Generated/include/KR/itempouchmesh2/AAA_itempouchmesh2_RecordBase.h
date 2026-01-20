/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct itempouchmesh2_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char pouch_appearance;
signed char npc_grade2;
bool private_pouch;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* skeletal_mesh;
wchar_t* anim_set;
wchar_t* physics_asset;
wchar_t* custom_anim;
wchar_t* despawn_showdata;
BnsTables::Shared::IconRef icon;
wchar_t* owner_particle;
wchar_t* mark_particle;
wchar_t* dropped_pouch_anim_set;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 218; }
		static __int32 SubType() { return -1; }
		enum class pouch_appearance {
			none = 0,
			money = 1,
			effect = 2,
			distribution_pouch = 3,
			normal_pouch_grade1 = 4,
			normal_pouch_grade2 = 5,
			normal_pouch_grade3 = 6,
			normal_pouch_grade4 = 7,
			normal_pouch_grade5 = 8,
			normal_pouch_grade6 = 9,
			normal_pouch_grade7 = 10,
			quality_pouch_grade1 = 11,
			quality_pouch_grade2 = 12,
			quality_pouch_grade3 = 13,
			quality_pouch_grade4 = 14,
			quality_pouch_grade5 = 15,
			quality_pouch_grade6 = 16,
			quality_pouch_grade7 = 17,
			high_quality_pouch_grade1 = 18,
			high_quality_pouch_grade2 = 19,
			high_quality_pouch_grade3 = 20,
			high_quality_pouch_grade4 = 21,
			high_quality_pouch_grade5 = 22,
			high_quality_pouch_grade6 = 23,
			high_quality_pouch_grade7 = 24,
			normal_box_grade1 = 25,
			normal_box_grade2 = 26,
			normal_box_grade3 = 27,
			normal_box_grade4 = 28,
			normal_box_grade5 = 29,
			normal_box_grade6 = 30,
			normal_box_grade7 = 31,
			quality_box_grade1 = 32,
			quality_box_grade2 = 33,
			quality_box_grade3 = 34,
			quality_box_grade4 = 35,
			quality_box_grade5 = 36,
			quality_box_grade6 = 37,
			quality_box_grade7 = 38,
			high_quality_box_grade1 = 39,
			high_quality_box_grade2 = 40,
			high_quality_box_grade3 = 41,
			high_quality_box_grade4 = 42,
			high_quality_box_grade5 = 43,
			high_quality_box_grade6 = 44,
			high_quality_box_grade7 = 45,
			normal_gembox_grade1 = 46,
			normal_gembox_grade2 = 47,
			normal_gembox_grade3 = 48,
			normal_gembox_grade4 = 49,
			normal_gembox_grade5 = 50,
			normal_gembox_grade6 = 51,
			normal_gembox_grade7 = 52,
			quality_gembox_grade1 = 53,
			quality_gembox_grade2 = 54,
			quality_gembox_grade3 = 55,
			quality_gembox_grade4 = 56,
			quality_gembox_grade5 = 57,
			quality_gembox_grade6 = 58,
			quality_gembox_grade7 = 59,
			high_quality_gembox_grade1 = 60,
			high_quality_gembox_grade2 = 61,
			high_quality_gembox_grade3 = 62,
			high_quality_gembox_grade4 = 63,
			high_quality_gembox_grade5 = 64,
			high_quality_gembox_grade6 = 65,
			high_quality_gembox_grade7 = 66,
		};

		enum class npc_grade2 {
			none = 0,
			boss = 1,
			champion = 2,
			normal = 3,
			follower = 4,
			tool = 5,
			weakest = 6,
			weak = 7,
			regular = 8,
			strong = 9,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itempouchmesh2_RecordPtr // : DrRecordPtr
	{
		itempouchmesh2_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}