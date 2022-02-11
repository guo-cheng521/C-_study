#include "list.h"
#include <iostream>
using namespace std;
List::List()
{
	top = 0;
}
bool List::isempty() const
{
	return top == 0;
}
bool List::isfull() const
{
	return top == MAX;
}
bool List::push(const Item& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
void List::visit(void (*pf)(Item& item))
{
	for (int i = 0; i < top; i++)
	{
		pf(items[i]);
	}
}

void show(Item& item)
{
	cout << item << endl;
}
void plus100(Item& item)
{
	item += 100;
}