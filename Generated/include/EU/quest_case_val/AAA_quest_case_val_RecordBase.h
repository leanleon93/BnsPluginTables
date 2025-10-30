/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct quest_case_val_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		char nokeypad[2];
		signed char prob;
char Pad0[3];
BnsTables::Shared::TableRef mapunit[10];
__int32 mapunit_Size() const {return 10;};
int mapunit_tableId() const {return 258;};
__int16 range_min;
__int16 range_max;
signed char progress_mission;
signed char progress_value;
bool acquire_quest;
signed char gadget_required;
BnsTables::Shared::TableRef gadget;
int gadget_tableId() const {return 146;};
BnsTables::Shared::ExplicitTableRef unload_map_navigation_object;
BnsTables::Shared::TableRef valid_zone[2];
__int32 valid_zone_Size() const {return 2;};
int valid_zone_tableId() const {return 479;};
signed char completion_count;
signed char completion_count_op;
__int16 indicator;
bool show_in_tooltip;
char Pad1[3];
BnsTables::Shared::TableRef case_talksocial;
int case_talksocial_tableId() const {return 428;};
float case_talksocial_delay;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 0); }
		static __int16 TableId() { return 506; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_case_val_RecordPtr // : DrRecordPtr
	{
		quest_case_val_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}