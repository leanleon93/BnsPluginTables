/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct pc_voice_set_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char id;
signed char job;
signed char stance;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* voice_set_name;
wchar_t* sample_sound_name[6];
__int32 sample_sound_name_Size() const {return 6;};
wchar_t* type1_sample_sound_name;
wchar_t* type2_sample_sound_name;
wchar_t* type3_sample_sound_name;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 289; }
		static __int32 SubType() { return -1; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_voice_set_RecordPtr // : DrRecordPtr
	{
		pc_voice_set_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}