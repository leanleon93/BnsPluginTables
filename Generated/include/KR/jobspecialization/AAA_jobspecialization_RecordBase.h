/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct jobspecialization_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char job;
signed char specialization;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* job_specialization_icon;
wchar_t* job_specialization_icon_overlay;
BnsTables::Shared::TableRef job_specialization_name;
int job_specialization_name_tableId() const {return 434;};
BnsTables::Shared::TableRef job_specialization_desc;
int job_specialization_desc_tableId() const {return 434;};
signed char sort_order;
char Pad0[1];
__int16 lobby_chart_value_melee;
__int16 lobby_chart_value_defense;
__int16 lobby_chart_value_protection;
__int16 lobby_chart_value_distance;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 4); }
		static __int16 TableId() { return 239; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jobspecialization_RecordPtr // : DrRecordPtr
	{
		jobspecialization_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}