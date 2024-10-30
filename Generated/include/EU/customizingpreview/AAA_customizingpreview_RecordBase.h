/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../../DrEl.h"
#include "../../BnsCustomProperties.h"

namespace BnsTables::EU {
    enum class customizingpreview_RecordSubType : __int32
    {
		customizingpreview_record_sub_pose = 0,
		customizingpreview_record_sub_face_look = 1,
		customizingpreview_record_sub_costume = 2,
		customizingpreview_record_sub_light = 3,
		customizingpreview_record_sub_silhouette = 4,
		customizingpreview_record_sub_count = 5,
    };
#pragma pack(push, 1)
	struct customizingpreview_Record : BnsTables::Shared::DrEl
	{
	public:
		union Key
		{
            struct {
                signed char preview_type;
signed char preview_value;
signed char race;
signed char sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		std::string_view preview_type_EnumValue() const {return Get_preview_type_EnumValue(key.preview_type);};
std::string_view race_EnumValue() const {return Get_race_EnumValue(key.race);};
std::string_view sex_EnumValue() const {return Get_sex_EnumValue(key.sex);};

		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 94; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingpreview_RecordPtr // : DrRecordPtr
	{
		customizingpreview_Record* _record;
		int _cacheChunkIndex;
		bool _makeCopy;
	};
#pragma pack(pop)
}