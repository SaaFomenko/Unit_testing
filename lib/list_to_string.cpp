#include "list_to_string.h"


static const std::string list_spliter = " ";

const std::string list_to_string(List* list, bool front)
{
	int size = list->Size();
	int val = 0;
	std::string list_str = "";

	for(int i = 0; i < size; ++i)
	{
		if (front)
		{
			val = list->PopFront();
			list->PushBack(val);
		}
		else
		{
			val = list->PopBack();
			list->PushFront(val);
		}

		list_str += std::to_string(val) + list_spliter;
	}

	return list_str;
}
