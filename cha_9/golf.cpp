#include <iostream>
#include <cstring>
#include "golf.h"
using namespace std;
void setgolf(golf& g, const char* name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf& g)
{
	char name[Len];
	int hc;
	cout << "����������:";
	cin.getline(name, Len);
	if (strcmp(name,"") == 0)
		return 0;
	cout << "������ȼ�:";
	cin >>hc ;
	setgolf(g, name, hc);
	cin.get();
	return 1;
}
void handicap(golf& g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf& g)
{
	cout << "�û�������" << g.fullname << endl;
	cout << "�û��ȼ���" << g.handicap << endl;
}