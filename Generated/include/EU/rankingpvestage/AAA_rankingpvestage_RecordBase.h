/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {

#pragma pack(push, 1)
	struct rankingpvestage_Record : BnsTables::Shared::DrEl
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
		wchar_t* ranking_npc_grade_text[30];
bool use_ranking_npc_grade;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 304; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) rankingpvestage_RecordPtr // : DrRecordPtr
	{
		rankingpvestage_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::rankingpvestage_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}