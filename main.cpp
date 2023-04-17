#include <iostream>
#include "lib/two_link_list.h"
#include "lib/print_list.h"


int main()
{
	List* list1 = new List();
	const int numbers[] = { 23, 5, 90, 100, 111, -1, -2, 3 };
	int size = sizeof(numbers) / sizeof(numbers[0]);

	list1->PushFront(numbers[0]);
	int max_val = numbers[0];
	int min_val = numbers[0];

	for (int i = 1; i < size; ++i)
	{
		if (min_val >= numbers[i])
		{
			list1->PushFront(numbers[i]);
			min_val = numbers[i];
		}
		if (max_val <= numbers[i])
		{
			list1->PushBack(numbers[i]);
			max_val = numbers[i];
		}

		if (numbers[i] > min_val && numbers[i] < max_val)
		{
			int j = 0;
			bool check = true;
			int val = 0;
			
			while(check)
			{
				val = list1->PopFront();

				if(numbers[i] <= val)
				{
					list1->PushFront(val);
					list1->PushFront(numbers[i]);

					while(j)
					{
						val = list1->PopBack();
						list1->PushFront(val);
						--j;
					}

					check = false;
					break;
				}

				list1->PushBack(val);
				++j;
			}
		}
	}
	
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
