/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct duel_npc_challenge_group_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* duel_npc_kismet_name;
BnsTables::Shared::TableRef stage_init_reward_item[10];
int stage_init_reward_item_tableId(){return 195;};
__int16 stage_init_reward_item_count[10];
BnsTables::Shared::TableRef feedback;
int feedback_tableId(){return 138;};
wchar_t* npc_portrait_image;
wchar_t* change_floor_ppv_kismet_name;
wchar_t* combobox_floor_icon_imageset;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 4); }
		static __int16 TableId() { return 111; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_npc_challenge_group_RecordPtr // : DrRecordPtr
	{
		duel_npc_challenge_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_npc_challenge_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}