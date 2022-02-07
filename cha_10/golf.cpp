#include "golf.h"
using std::cout;
using std::endl;
using std::cin;
Golf::Golf(const char* name, int hc)
{
	strcpy_s(fullname, name);
	handicap = hc;
}
Golf::Golf()
{
	char name[40];
	int hc;
	cout << "please enter the full name:";
	cin.getline(name, 39);
	name[39] = '\0';
	cout << "please enter thr handicap:";
	cin >> hc;
	cin.get();
	*this = Golf(name, hc);
}
void Golf::sethandicap(int hc)
{
	handicap = hc;
}
void Golf::showgolf() const
{
	cout << fullname << " : " << handicap << endl;
}