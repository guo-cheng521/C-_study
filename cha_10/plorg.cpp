#include <iostream>
#include "plorg.h"
#include <cstring>
using std::cout;
using std::endl;
using std::strcpy;
Plorg::Plorg(const char* na, int c)
{
	strcpy_s(name, na);
	ci = c;
}
void Plorg::setci(int c)
{
	ci = c;
}
void Plorg::show() const
{
	cout << "name:" << name << " CI:" << ci << endl;
}