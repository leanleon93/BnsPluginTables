/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct job_style_specialization_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* specialization_tag_imageset;
BnsTables::Shared::TableRef description;
int description_tableId(){return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(1, 0); }
		static __int16 TableId() { return 233; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_style_specialization_RecordPtr // : DrRecordPtr
	{
		job_style_specialization_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_style_specialization_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}