#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include "../lib/two_link_list.h"


List* list_new()
{
	return new List();
}

List* list_with_val(int val1 = 1, int val2 = 2, int val3 = 3)
{
	List* list1 = list_new();
	list1->PushFront(val1);
	list1->PushBack(val2);
	list1->PushBack(val3);

	return list1;
}

TEST_CASE( "Test functions Empty, Size, Clear of class List.", "[list-functions]" ){
	SECTION("list is empty")
	{
		CHECK(list_new()->Empty() == true);
	}

	List* list = list_with_val();
	SECTION("list size")
	{
		CHECK(list->Size() == 3);
	}

	SECTION("list clear")
	{
		list->Clear();
		CHECK(list->Size() == 0);
	}
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
