#define _CRT_SECURE_NO_WARNINGS 1

//2.1
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "郭成" << "莲子镇" << endl; 
//	return 0;
//}

//2.2
//#include <iostream>
//using namespace std;
//int main()
//{
//	int l;
//	cout << "请输入值：";
//	cin >> l;
//	int ma = l * 220;
//	cout << "为" << ma << endl;
//	return 0;
//}

//2.3
//#include <iostream>
//using namespace std;
//void write1();
//void write2();
//int main()
//{
//	write1();
//	write1();
//	write2();
//	write2();
//	return 0;
//}
//void write1()
//{
//	cout << "Three blind mice\n";
//
//}
//void write2()
//{
//	cout << "See how they run\n";
//}

//2.4
//2.5
#include <iostream>
using namespace std;

double fun(double x)
{
	return x * 1.8 + 32.0;
}
int main()
{
	cout << "Please enter a Celsius value:";
	double c;
	cin >> c;
	double h = fun(c);
	cout << c << " degrees Celsius is " << h << " degrees Fahrenheit" << endl;
	return 0;
}