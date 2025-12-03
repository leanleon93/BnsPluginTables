/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct pc_voice_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char id;
signed char sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		signed char pc_voice_set_id;
signed char usable_race[4];
__int32 usable_race_Size() const {return 4;};
signed char default_race[4];
__int32 default_race_Size() const {return 4;};
char Pad0[3];
BnsTables::Shared::TableRef name;
int name_tableId() const {return 438;};
BnsTables::Shared::TableRef desc;
int desc_tableId() const {return 438;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 298; }
		static __int32 SubType() { return -1; }
		enum class sex {
			sex_none = 0,
			nam = 1,
			yeo = 2,
			jung = 3,
		};

		enum class usable_race {
			race_none = 0,
			geon = 1,
			gon = 2,
			rin = 3,
			jin = 4,
			nabbeunmob = 5,
			deonabbeunmob = 6,
			museounmob = 7,
			deomuseounmob = 8,
			deodeomuseounmob = 9,
			goyangi = 10,
			gangrimche = 11,
			aggwi = 12,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_voice_RecordPtr // : DrRecordPtr
	{
		pc_voice_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}