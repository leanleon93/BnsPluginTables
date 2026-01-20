/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
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
		signed char category;
signed char guide_type;
char Pad0[2];
BnsTables::Shared::TableRef title;
int title_tableId() const {return 438;};
signed char activation_level;
signed char activation_mastery_level;
bool use_notice_hud;
char Pad1[1];
BnsTables::Shared::TableRef message;
int message_tableId() const {return 160;};
wchar_t* movie_url;
wchar_t* help_imageset[10];
__int32 help_imageset_Size() const {return 10;};
BnsTables::Shared::TableRef help_title[10];
__int32 help_title_Size() const {return 10;};
int help_title_tableId() const {return 438;};
BnsTables::Shared::TableRef help_sub_title[10];
__int32 help_sub_title_Size() const {return 10;};
int help_sub_title_tableId() const {return 438;};
BnsTables::Shared::TableRef help_desc[10];
__int32 help_desc_Size() const {return 10;};
int help_desc_tableId() const {return 438;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 170; }
		static __int32 SubType() { return -1; }
		enum class category {
			none = 0,
			category1 = 1,
			category2 = 2,
			category3 = 3,
			category4 = 4,
			category5 = 5,
			category6 = 6,
			category7 = 7,
			category8 = 8,
			category9 = 9,
			category10 = 10,
		};

		enum class guide_type {
			movie = 0,
			imageset = 1,
		};
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guide_movie_RecordPtr // : DrRecordPtr
	{
		guide_movie_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}