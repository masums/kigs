#pragma once
#include "CoreModifiable.h"
#include "SimpleClass2.h"
#include "AttributePacking.h"

class MoreComplexClass : public SimpleClass2
{
public:
	DECLARE_CLASS_INFO(MoreComplexClass, SimpleClass2, Application);
	DECLARE_CONSTRUCTOR(MoreComplexClass);


protected:

	DECLARE_VIRTUAL_METHOD(GiveInfos);


	float Multiply(float v1, float v2)
	{
		return v1 * v2;
	}

	// Multiply method can be called with SimpleCall
	WRAP_METHODS(Multiply);
};

