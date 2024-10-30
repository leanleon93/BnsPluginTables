/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct battlemessage_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char object_type;
signed char skill_result_type;
signed char effect_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view object_type_EnumValue() const {return Get_object_type_EnumValue(key.object_type);};
std::string_view skill_result_type_EnumValue() const {return Get_skill_result_type_EnumValue(key.skill_result_type);};
std::string_view effect_type_EnumValue() const {return Get_effect_type_EnumValue(key.effect_type);};
BnsTables::Shared::TableRef game_message;
int game_message_tableId() const {return 155;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 31; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battlemessage_RecordPtr // : DrRecordPtr
	{
		battlemessage_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}