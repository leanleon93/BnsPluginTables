/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct ranking2_effect_reward_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef buff_effect;
int buff_effect_tableId() const {return 115;};
BnsTables::Shared::TableRef party_effect;
int party_effect_tableId() const {return 115;};
BnsTables::Shared::TableRef zone_effect;
int zone_effect_tableId() const {return 115;};
BnsTables::Shared::TableRef fx_effect;
int fx_effect_tableId() const {return 115;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 310; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_effect_reward_RecordPtr // : DrRecordPtr
	{
		ranking2_effect_reward_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}