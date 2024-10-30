/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct season_ability_goal_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char ability;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view ability_EnumValue() const {return Get_ability_EnumValue(key.ability);};
signed char scale[10];
__int32 scale_Size() const {return 10;};
char Pad0[2];
__int32 value[10];
__int32 value_Size() const {return 10;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 331; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) season_ability_goal_RecordPtr // : DrRecordPtr
	{
		season_ability_goal_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}