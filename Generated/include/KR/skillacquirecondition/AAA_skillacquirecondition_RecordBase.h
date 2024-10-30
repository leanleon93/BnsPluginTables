/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct skillacquirecondition_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 id;
signed char variation_index;
signed char variation_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 pc_level;
signed char pc_job;
char Pad0[2];
BnsTables::Shared::TableRef training_name;
int training_name_tableId() const {return 420;};
BnsTables::Shared::IconRef training_icon;
BnsTables::Shared::TableRef main_info;
int main_info_tableId() const {return 420;};
BnsTables::Shared::TableRef sub_info;
int sub_info_tableId() const {return 420;};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 13); }
		static __int16 TableId() { return 338; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillacquirecondition_RecordPtr // : DrRecordPtr
	{
		skillacquirecondition_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}