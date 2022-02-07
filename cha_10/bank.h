#pragma once
#ifndef BANK_H_
#define BANK_H_	
#include <iostream>
#include <string>
using namespace std;
class Bank
{
private:
	string name;
	string acctnum;
	double balance;
public:
	Bank();
	Bank(const string& client, const string& num, double bal = 0.0);
	~Bank();
	void show() const;
	void deposit(double cash);
	void withdraw(double cash);

};
#endif