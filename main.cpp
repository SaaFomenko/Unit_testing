#include <iostream>
#include "two_link_list.h"
#include "print_list.h"


int main()
{
	List* list1 = new List();
	const int numbers[] = { 23, 5, 90, 100, 111, -1, -2, 3 };
	int size = sizeof(numbers) / sizeof(numbers[0]);

	list1->PushFront(numbers[0]);

	int max_list = numbers[0];
	int min_list = numbers[0];
	
	try
	{
	  print_list(list1);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	
		return 1;
	}

	return 0;
}
