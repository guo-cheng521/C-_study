#include "person.h"
#include <iostream>
#include <cstring>

Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	strcpy_s(fname, fn);
}
void Person::Show() const
{
	std::cout << "firstname:" << fname << " lastname:" << lname << std::endl;
}
void Person::FormalShow() const
{
	std::cout << "lastname:" << lname << " firstname:" << fname << std::endl;
}