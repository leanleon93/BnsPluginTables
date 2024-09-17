/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct guide_movie_Record : DrEl
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
Data::TableRef title;
int title_tableId(){return 405;};
__int8 activation_level;
__int8 activation_mastery_level;
bool use_notice_hud;
char Pad1[1];
Data::TableRef message;
int message_tableId(){return 151;};
wchar_t* movie_url;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 159; }
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