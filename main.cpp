#include <iostream>
#include "two_link_list.h"


void print_list(List* list)
{
	std::cout << "Создан список по адресу: " << list << std::endl;
	std::cout << "Размер списка: " << list->Size() << std::endl;
}

int main()
{
	List* list1 = new List();

	if (list1 != nullptr)
	{
		print_list(list1);

	}
	else
	{
		std::cout << "Список не создан, проверьте код класса List" << std::endl;
	
		return 1;
	}

	return 0;
}
