#pragma once
#ifndef GOLF_H_
#define GOLF_H_
#include <cstring>
#include <iostream>
class Golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	Golf(const char* name, int hc);
	Golf();
	void sethandicap(int hc);
	void showgolf() const;

};
#endif // !GOLF_H_
