/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {
    enum class guide_movie_RecordSubType : __int32
    {
		guide_movie_record_sub_level = 0,
		guide_movie_record_sub_quest = 1,
		guide_movie_record_sub_enter_zone = 2,
		guide_movie_record_sub_dungeon = 3,
		guide_movie_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct guide_movie_Record : BnsTables::Shared::DrEl
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
		__int8 category;
char Pad0[3];
BnsTables::Shared::TableRef title;
int title_tableId(){return 420;};
__int8 activation_level;
__int8 activation_mastery_level;
bool use_notice_hud;
char Pad1[1];
BnsTables::Shared::TableRef message;
int message_tableId(){return 155;};
wchar_t* movie_url;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 3); }
		static __int16 TableId() { return 163; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guide_movie_RecordPtr // : DrRecordPtr
	{
		guide_movie_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guide_movie_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}