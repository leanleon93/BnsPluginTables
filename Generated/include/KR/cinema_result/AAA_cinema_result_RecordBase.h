/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct cinema_result_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;
signed char sex;
bool success;
signed char game_mode;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view race_EnumValue() const {return Get_race_EnumValue(key.race);};
std::string_view sex_EnumValue() const {return Get_sex_EnumValue(key.sex);};
std::string_view game_mode_EnumValue() const {return Get_game_mode_EnumValue(key.game_mode);};
BnsTables::Shared::TableRef result_cinematic;
int result_cinematic_tableId() const {return 57;};
wchar_t* panel_name;
wchar_t* level_seq_event_name;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 2); }
		static __int16 TableId() { return 56; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) cinema_result_RecordPtr // : DrRecordPtr
	{
		cinema_result_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}