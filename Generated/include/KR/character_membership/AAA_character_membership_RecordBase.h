/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::KR {

#pragma pack(push, 1)
	struct character_membership_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
BnsTables::Shared::TableRef membership_benefit[8];
int membership_benefit_tableId(){return 258;};
BnsTables::Shared::TableRef name2;
int name2_tableId(){return 420;};
BnsTables::Shared::TableRef description;
int description_tableId(){return 420;};
BnsTables::Shared::IconRef icon;

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(2, 3); }
		static __int16 TableId() { return 54; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) character_membership_RecordPtr // : DrRecordPtr
	{
		character_membership_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::character_membership_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}