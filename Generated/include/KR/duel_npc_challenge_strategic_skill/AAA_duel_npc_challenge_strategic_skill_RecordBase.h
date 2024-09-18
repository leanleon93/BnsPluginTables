/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class duel_npc_challenge_strategic_skill_RecordSubType : __int32
    {
		duel_npc_challenge_strategic_skill_record_sub_active = 0,
		duel_npc_challenge_strategic_skill_record_sub_passive = 1,
		duel_npc_challenge_strategic_skill_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct duel_npc_challenge_strategic_skill_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 max_strategic_skill_level;
char Pad0[3];
BnsTables::Shared::TableRef icon_texture;
int icon_texture_tableId(){return 182;};
__int16 icon_index;
__int8 grade;
char Pad1[1];
wchar_t* skill_image_set;
BnsTables::Shared::TableRef skill_tooltip;
int skill_tooltip_tableId(){return 420;};
BnsTables::Shared::TableRef description2;
int description2_tableId(){return 420;};
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 0); }
		static __int16 TableId() { return 112; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_npc_challenge_strategic_skill_RecordPtr // : DrRecordPtr
	{
		duel_npc_challenge_strategic_skill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_npc_challenge_strategic_skill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}