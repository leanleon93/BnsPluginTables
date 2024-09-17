/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../BnsCustomProperties.h"

namespace Data {
#pragma pack(push, 1)
	struct skillsystematizationgroup_Record : DrEl
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
wchar_t* name;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef description;
int description_tableId(){return 405;};
__int8 sort_no;
bool use_bookmark;
char Pad0[2];
Data::TableRef bookmark_description;
int bookmark_description_tableId(){return 405;};
wchar_t* category_icon_text[2];
wchar_t* train_icon_text[2];
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad1[2];
Data::TableRef tooltip_description;
int tooltip_description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 348; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillsystematizationgroup_RecordPtr // : DrRecordPtr
	{
		skillsystematizationgroup_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillsystematizationgroup_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}