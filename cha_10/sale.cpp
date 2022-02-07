#include "sale.h"
#include <iostream>
using namespace SALES;
using namespace std;
Sales::Sales(const double ar[], int n)
{
	if (n >= 4)
	{
		for (int i = 0; i < 4; i++)
			sales[i] = ar[i];
	}
	else
	{
		for (int i = 0; i < n; i++)
			sales[i] = ar[i];
		for (int i = n; i < 4; i++)
			sales[i] = 0;
	}
	average = (sales[0] + sales[1] + sales[2] + sales[3]) / 4;
	max = sales[0];
	min = sales[0];
	for (int i = 1; i < 4; i++)
	{
		if (sales[i] > max)
			max = sales[i];
		if (sales[i] < min)
			min = sales[i];
	}
}
//Sales::Sales()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		std::cout << "the #" << i + 1 << "quarter is:";
//		std::cin >> (*this).sales[i];
//	}
//	(*this).average = ((*this).sales[0] + (*this).sales[1] + (*this).sales[2] + (*this).sales[3]) / 4;
//	this->max = (*this).sales[0];
//	this->min = (*this).sales[0];
//	for (int i = 1; i < 4; i++)
//	{
//		if (this->sales[i] > this->max)
//			this->max = this->sales[i];
//		if (this->sales[i] < this->min)
//			this->min = this->sales[i];
//	}
//}
Sales::Sales()
{
	for (int i = 0; i < 4; i++)
	{
		cout << "the #" << i + 1 << "quarter is:";
		cin >> sales[i];
	}
	average = (sales[0] + sales[1] + sales[2] + sales[3]) / 4;
	max = sales[0];
	min = sales[0];
	for (int i = 1; i < 4; i++)
	{
		if (sales[i] > max)
			max = sales[i];
		if (sales[i] < min)
			min = sales[i];
	}
}
void Sales::showsales() const
{
	cout << "Display all information in sales:\n";
	cout << "The 4 quarters are $" << sales[0] << ", $" << sales[1] << ", $" << sales[2] << ", $" << sales[3] << endl;
	cout << "The average income is $" << average << endl;
	cout << "The maximum income is $" << max << endl;
	cout << "The minimum income is $" << min << endl;
}