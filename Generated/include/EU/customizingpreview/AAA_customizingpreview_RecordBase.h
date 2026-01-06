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
		
		static BnsTables::Shared::TableVersion Version() { return BnsTables::Shared::TableVersion(0, 5); }
		static __int16 TableId() { return 96; }
		static __int32 SubType() { return -1; }
		enum class preview_type {
			none = 0,
			pose = 1,
			face_look = 2,
			costume = 3,
			light = 4,
			silhouette = 5,
		};

		enum class race {
			race_none = 0,
			geon = 1,
			gon = 2,
			rin = 3,
			jin = 4,
			nabbeunmob = 5,
			deonabbeunmob = 6,
			museounmob = 7,
			deomuseounmob = 8,
			deodeomuseounmob = 9,
			goyangi = 10,
			gangrimche = 11,
			aggwi = 12,
		};

		enum class sex {
			sex_none = 0,
			nam = 1,
			yeo = 2,
			jung = 3,
		};
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