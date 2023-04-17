#ifndef LIST_EXCEPTION_H
#define LIST_EXCEPTION_H

#include <string>


class ListException : public std::exception
{
	const std::string _msg;

	public:
	ListException(const std::string& msg);
	virtual ~ListException();

	const char* what() const noexcept override;
};

#endif
