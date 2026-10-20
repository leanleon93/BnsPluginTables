/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct datacontrol_Record : BnsTables::Shared::DrEl
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
signed char datacontrol_action;
char Pad0[3];
BnsTables::Shared::ExplicitTableRef controlvalue1_param[2];
__int32 controlvalue1_param_Size() const {return 2;};
BnsTables::Shared::ExplicitTableRef controlvalue2_param[2];
__int32 controlvalue2_param_Size() const {return 2;};
BnsTables::Shared::ExplicitTableRef controlvalue3_param[2];
__int32 controlvalue3_param_Size() const {return 2;};
BnsTables::Shared::ExplicitTableRef controlvalue4_param[2];
__int32 controlvalue4_param_Size() const {return 2;};
BnsTables::Shared::ExplicitTableRef controlvalue5_param[2];
__int32 controlvalue5_param_Size() const {return 2;};
BnsTables::Shared::ExplicitTableRef controlvalue6_param[2];
__int32 controlvalue6_param_Size() const {return 2;};
BnsTables::Shared::ExplicitTableRef controlvalue7_param[2];
__int32 controlvalue7_param_Size() const {return 2;};
BnsTables::Shared::ExplicitTableRef controlvalue8_param[2];
__int32 controlvalue8_param_Size() const {return 2;};
BnsTables::Shared::ExplicitTableRef controlvalue9_param[2];
__int32 controlvalue9_param_Size() const {return 2;};
BnsTables::Shared::ExplicitTableRef controlvalue10_param[2];
__int32 controlvalue10_param_Size() const {return 2;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 102; }
		static __int32 SubType() { return -1; }
		enum class datacontrol_action {
			none = 0,
			retired_quest = 1,
			close_dungeon = 2,
			disable_npc = 3,
			disable_env = 4,
			disable_mapunit = 5,
			close_store = 6,
			disable_itemtransformrecipe = 7,
			change_store = 8,
			change_itemtransformrecipe = 9,
			change_reward = 10,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) datacontrol_RecordPtr // : DrRecordPtr
	{
		datacontrol_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}