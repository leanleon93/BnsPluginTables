/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct abnormalcamera_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char idle_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char camera_type;
char Pad0[3];
float location_x;
float location_y;
float location_z;
float target_x;
float target_y;
float target_z;
float enter_duration;
bool leave_smooth;
char Pad1[3];
float leave_duration;
float height_far;
float height_middle;
float height_near;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 2; }
		static __int32 SubType() { return -1; }
		enum class idle_type {
			normal = 0,
			dead = 1,
			dead_hide = 2,
			dead_back = 3,
			dead_front = 4,
			dead_swim_area = 5,
			exhaustion = 6,
			mount_linker = 7,
			mount_linkee = 8,
			inhalation_linker = 9,
			inhalation_linkee = 10,
			stun = 11,
			stagger = 12,
			down = 13,
			block = 14,
			air = 15,
			air2 = 16,
			air3 = 17,
			kneel = 18,
			magnetic = 19,
			stiff = 20,
			front_down = 21,
			block2 = 22,
			flee = 23,
			knockback_stand = 24,
			knockback_kneel = 25,
			knockback_frontdown = 26,
			knockback_down = 27,
			picking = 28,
			fast_freezing = 29,
			impregnability = 30,
			hide = 31,
			burrow = 32,
			restoration = 33,
			block3 = 34,
			landing_shock = 35,
			catch_val = 36,
			catched = 37,
			catch_none_human = 38,
			catched_none_human = 39,
			catch_friend = 40,
			catched_friend = 41,
			catch_inhalation = 42,
			catched_inhalation = 43,
			npc_block = 44,
			sit_down = 45,
			silver_wep = 46,
			ironfotess = 47,
			presentation_linke = 48,
			spider_web = 49,
			state_social = 50,
			block4 = 51,
			dead_duel = 52,
		};

		enum class camera_type {
			forcibly_pose = 0,
			zoom_near_far = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) abnormalcamera_RecordPtr // : DrRecordPtr
	{
		abnormalcamera_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}