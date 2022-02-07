#include "bank.h"

Bank::Bank()
{
	name = "no name";
	acctnum = "no acctnum";
	balance = 0.0;

}
Bank::Bank(const string& client, const string& num, double bal)
{
	name = client;
	acctnum = num;
	balance = bal;
}
Bank::~Bank() {};
void Bank::show() const
{
	cout << "The name of bank account is " << name << ", the account number is " << acctnum << ", now it has balance $" << balance << endl;

}

void Bank::deposit(double cash)
{
	balance += cash;
}

void Bank::withdraw(double cash)
{
	balance -= cash;
}