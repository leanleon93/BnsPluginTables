/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct event_skill_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char stance_type;
signed char skill_result;
signed char event_type;
signed char state;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view stance_type_EnumValue() const {return Get_stance_type_EnumValue(key.stance_type);};
std::string_view skill_result_EnumValue() const {return Get_skill_result_EnumValue(key.skill_result);};
std::string_view event_type_EnumValue() const {return Get_event_type_EnumValue(key.event_type);};
std::string_view state_EnumValue() const {return Get_state_EnumValue(key.state);};
__int32 skill_1[2];
__int32 skill_1_Size() const {return 2;};
__int32 skill_2[12];
__int32 skill_2_Size() const {return 12;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 6); }
		static __int16 TableId() { return 128; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) event_skill_RecordPtr // : DrRecordPtr
	{
		event_skill_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}