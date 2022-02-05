#include <iostream>
#include "namesp.h"
using namespace std;
namespace SALES
{
    void setSales(Sales& s, const double ar[], int n)
    {
        if (n < 4)
        {
            for (int i = 0; i < n; i++)
            {
                s.sales[i] = ar[i];
            }
            for (int j = n; j < 4; j++)
            {
                s.sales[j] = 0;
            }
        }
        else
        {
            for (int i = 0; i < 4; i++)
            {
                s.sales[i] = ar[i];
            }
        }
        s.average = (s.sales[0] + s.sales[1] + s.sales[2] + s.sales[3]) / 4;
        double max = 0.0;
        double min = 65535.0;
        for (int i = 0; i < 4; i++)
        {
            if (s.sales[i] > max)
            {
                max = s.sales[i];
            }
            if (s.sales[i] < min)
            {
                min = s.sales[i];
            }
        }
        s.max = max;
        s.min = min;
    }

    void setSales(Sales& s)
    {
        cout << "Please enter 4 quarters for sales:\n";
        for (int i = 0; i < 4; i++)
        {
            cout << "The #" << i + 1 << " quarter is: ";
            cin >> s.sales[i];
        }
        s.average = (s.sales[0] + s.sales[1] + s.sales[2] + s.sales[3]) / 4;
        double max = 0.0;
        double min = 65535.0;
        for (int i = 0; i < 4; i++)
        {
            if (s.sales[i] > max)
            {
                max = s.sales[i];
            }
            if (s.sales[i] < min)
            {
                min = s.sales[i];
            }
        }
        s.max = max;
        s.min = min;
    }

    void showSales(const Sales& s)
    {
        cout << "Display all information in sales:\n";
        cout << "The 4 quarters are $" << s.sales[0] << ", $" << s.sales[1] << ", $" << s.sales[2] << ", $" << s.sales[3] << endl;
        cout << "The average income is $" << s.average << endl;
        cout << "The maximum income is $" << s.max << endl;
        cout << "The minimum income is $" << s.min << endl;
    }
}