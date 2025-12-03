/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct override_contents_rule_config_Record : BnsTables::Shared::DrEl
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
		signed char publisher;
char Pad0[3];
wchar_t* config_name;
wchar_t* value;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(3, 0); }
		static __int16 TableId() { return 285; }
		static __int32 SubType() { return -1; }
		enum class publisher {
			none = 0,
			nck = 1,
			nca = 2,
			ncj = 3,
			nct = 4,
			inv = 5,
			tx = 6,
			nck_neo_gold = 7,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) override_contents_rule_config_RecordPtr // : DrRecordPtr
	{
		override_contents_rule_config_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}