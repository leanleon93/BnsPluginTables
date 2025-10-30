/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct quest_mission_step_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		signed char id;
signed char completion_type;
signed char mission_list[16];
__int32 mission_list_Size() const {return 16;};
signed char mission_map_type;
char Pad0[1];
BnsTables::Shared::TableRef map;
int map_tableId() const {return 257;};
float location_x;
float location_y;
float location_z;
bool use_auto_navigation;
bool enable_navigation;
signed char map_zoom_rate;
char Pad1[1];
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 435;};
BnsTables::Shared::TableRef guide_message;
int guide_message_tableId() const {return 435;};
BnsTables::Shared::TableRef guide_message_zone[2];
__int32 guide_message_zone_Size() const {return 2;};
int guide_message_zone_tableId() const {return 480;};
signed char guide_message_category;
char Pad2[3];
BnsTables::Shared::TableRef effect;
int effect_tableId() const {return 118;};
signed char time_limit_type;
char Pad3[3];
__int32 time_limit;
bool hide;
char Pad4[3];
BnsTables::Shared::TableRef progress_talksocial;
int progress_talksocial_tableId() const {return 429;};
float progress_talksocial_delay;
bool retired;
signed char skip_dest_mission_step;
char Pad5[2];
BnsTables::Shared::TableRef giveup_zone[3];
__int32 giveup_zone_Size() const {return 3;};
int giveup_zone_tableId() const {return 480;};
BnsTables::Shared::TableRef giveup_warp_to_pcspawn;
int giveup_warp_to_pcspawn_tableId() const {return 489;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 506; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_mission_step_RecordPtr // : DrRecordPtr
	{
		quest_mission_step_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}