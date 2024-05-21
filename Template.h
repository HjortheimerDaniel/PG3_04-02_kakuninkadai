#pragma once

template <typename Type, typename Type2>  

class TemplateClass
{
public:

	Type number1;
	Type2 number2;

	TemplateClass(Type number1, Type2 number2) : number1(number1), number2(number2) {}


	Type Min();
};

