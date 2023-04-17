#include "list_exception.h"


ListException::ListException(const std::string& msg) :
	_msg(msg)
{}

const char* ListException::what() const noexcept
{
	return _msg.c_str();
}

ListException::~ListException()
{}
