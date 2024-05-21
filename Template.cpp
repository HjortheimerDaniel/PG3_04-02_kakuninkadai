#include "Template.h"
template <typename Type, typename Type2>

Type TemplateClass<Type, Type2>::Min()
{
	if (number1 < number2) 
	{
		return static_cast<Type>(number1);
	}

	return static_cast<Type>(number2);

}

