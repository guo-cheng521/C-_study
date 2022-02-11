#pragma once
#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
	char name[20];
	int ci;
public:
	Plorg(const char* na = "Plorga", int c = 50);
	void setci(int c);
	void show() const;

};
#endif // !PLORG_H_
