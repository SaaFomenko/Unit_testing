#include <iostream>
#include "print_list.h"
#include "list_exception.h"


static const std::string addr_lable = "Список: ";
static const std::string size_lable = "Размер: ";
static const std::string elem_lable = "Элементы: ";
static const std::string err_msg = "Ошибка, указатель на объект класса List не содержит адреса.";

void print_list(List* list)
{
	if (list != nullptr)
	{
		std::cout << addr_lable << list << std::endl;

		int size = list->Size();
		std::cout << size_lable << size << std::endl;

		if (!list->Empty())
		{
			std::cout << elem_lable;
			while (!list->Empty())
			{
				std::cout << list->PopFront() << " ";
			}
			std::cout << std::endl;
		}
	}
	else
	{
		throw ListException(err_msg);
	}
}
