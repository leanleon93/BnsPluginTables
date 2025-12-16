/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct duel_bot_Record : BnsTables::Shared::DrEl
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
		wchar_t* alias;
signed char race;
signed char sex;
signed char job;
signed char level;
signed char mastery_level;
char Pad0[3];
BnsTables::Shared::TableRef faction;
int faction_tableId() const {return 139;};
__int16 speed;
__int16 radius;
__int16 scale;
char Pad1[2];
BnsTables::Shared::TableRef name2;
int name2_tableId() const {return 435;};
BnsTables::Shared::TableRef appearance;
int appearance_tableId() const {return 87;};
wchar_t* animset;
BnsTables::Shared::TableRef summoned_name2;
int summoned_name2_tableId() const {return 435;};
BnsTables::Shared::TableRef summoned_appearance;
int summoned_appearance_tableId() const {return 87;};
wchar_t* summoned_animset;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 107; }
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

		enum class sex {
			sex_none = 0,
			nam = 1,
			yeo = 2,
			jung = 3,
		};

		enum class job {
			job_none = 0,
			geomsa = 1,
			gweonsa = 2,
			gigongsa = 3,
			gyeogsa = 4,
			yeogsa = 5,
			sohwansa = 6,
			amsarja = 7,
			gwigeomsa = 8,
			jusursa = 9,
			gigweonsa = 10,
			tusa = 11,
			gungsa = 12,
			changsursa = 13,
			noejeonsursa = 14,
			ssanggeomsa = 15,
			agsa = 16,
			pc_max = 17,
			sohwansu_ruki = 18,
			sohwansu_striker = 19,
			sohwansu_defender = 20,
			sohwansu_controller = 21,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_RecordPtr // : DrRecordPtr
	{
		duel_bot_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}