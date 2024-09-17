/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
struct DrEl
{
public:
	char type;
	__int16 subtype;
	unsigned __int16 size;
};

#pragma pack(push, 1)
struct __declspec(align(4)) DrRecordPtr
{
	DrEl* _record;
	int _cacheChunkIndex;
};
#pragma pack(pop)