/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct summoned_appearance_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char race;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* animset;
BnsTables::Shared::TableRef moveanim;
int moveanim_tableId() const {return 426;};
BnsTables::Shared::TableRef appearance;
int appearance_tableId() const {return 88;};
wchar_t* sword;
wchar_t* glove_r;
wchar_t* glove_l;
wchar_t* hammer;
wchar_t* gun_r;
wchar_t* gun_l;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 8); }
		static __int16 TableId() { return 419; }
		static __int32 SubType() { return -1; }
		enum class race {
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
	struct __declspec(align(4)) summoned_appearance_RecordPtr // : DrRecordPtr
	{
		summoned_appearance_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}