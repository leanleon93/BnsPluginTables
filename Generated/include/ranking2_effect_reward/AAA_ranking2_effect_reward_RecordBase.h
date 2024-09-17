/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct ranking2_effect_reward_Record : DrEl
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
Data::TableRef buff_effect;
int buff_effect_tableId(){return 111;};
Data::TableRef party_effect;
int party_effect_tableId(){return 111;};
Data::TableRef zone_effect;
int zone_effect_tableId(){return 111;};
Data::TableRef fx_effect;
int fx_effect_tableId(){return 111;};

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 297; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_effect_reward_RecordPtr // : DrRecordPtr
	{
		ranking2_effect_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_effect_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}