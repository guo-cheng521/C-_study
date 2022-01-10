#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//int main()
//{
//	using namespace std;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << i << endl;
//	}
//	cout << i << endl;
//	return 0;
//}


// 5.1.cpp: 定义控制台应用程序的入口点。
//#include <iostream>
//
//int main()
//{
//    using namespace std;
//
//    int min, max;
//    cout << "Please enter two numbers:" << endl;
//    cout << "Min: ";
//    cin >> min;
//    cout << "Max: ";
//    cin >> max;
//    int sum = 0;
//    for (int i = min; i <= max; i++)
//        sum = sum + i;
//    cout << "The total sum of " << min << " to " << max << " is " << sum << endl;
//    return 0;
//}


//5.2
//#include <iostream>
//#include <array>
//const int arsize = 101;
//int main()
//{
//	std::array <long double, arsize> fact;
//	fact[0] = fact[1] = 1;
//	for (int i = 2; i < arsize; i++)
//	{
//		fact[i] = i * fact[i - 1];
//	}
//	for (int i = 0; i < arsize; i++)
//		std::cout << i << "!=" << fact[i] << std::endl;
//	return 0;
//}


//5.3
//#include <iostream>
//int main()
//{
//	using namespace std;
//	int sum = 0;
//	int a;
//	cin >> a;
//	while (a != 0)
//	{
//		sum = sum + a;
//		cout << "sum=" << sum << endl;
//		cin >> a;
//	}
//	return 0;
//}


//5.4
//#include <iostream>
//int main()
//{
//	using namespace std;
//	float daphne = 100;
//	float cleo = 100;
//	float daphne_1=100, cleo_1=100;
//	int i = 0;
//	do
//	{
//		daphne_1 = daphne * 0.1 + daphne_1;
//		cleo_1 = cleo_1 * 0.05 + cleo_1;
//		i++;
//	} while (cleo_1<=daphne_1);
//	cout << "第" << i << "年,cleo资产：" << cleo_1 << ",daphne资产：" << daphne_1 << endl;
//	return 0;
//}


//5.5
//#include <iostream>
//int main()
//{
//	using namespace std;
//
//	int num[12] = { 0 };
//	const char* months[12] =
//	{
//	"January",
//	"February",
//	"March",
//	"April",
//	"May",
//	"June",
//	"July",
//	"August",
//	"September",
//	"October",
//	"November",
//	"December"
//	};
//	for (int i = 0; i < 12; i++)
//	{
//		cout << months[i] << ":";
//		cin >> num[i];
//	}
//	int sum = 0;
//	for (int i = 0; i < 12; i++)
//	{
//		sum = sum + num[i];
//	}
//	cout << "sum:" << sum << endl;
//	return 0;
//}


//5.6
//#include <iostream>
//int main()
//{
//	using namespace std;
//
//	int num[3][12] = { 0 };
//	int sum[3] = { 0 };
//	const char* months[12] =
//	{
//	"January",
//	"February",
//	"March",
//	"April",
//	"May",
//	"June",
//	"July",
//	"August",
//	"September",
//	"October",
//	"November",
//	"December"
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 12; j++)
//		{
//			cout << "第" << i+1 << "年" << months[j] << ':';
//			cin >> num[i][j];
//			sum[i] = num[i][j] + sum[i];
//		}
//	}
//
//	cout << "sum:" << sum[0]<< endl;
//	cout << sum[1] << endl;
//	cout << sum[2] << endl;
//	cout << sum[1] + sum[2] + sum[0] << endl;
//	return 0;
//}


//5.7
//#include <iostream>
//struct Car
//{
//	char make[20];
//	int year;
//};
//int main()
//{
//	using namespace std;
//	cout << "How many cars do you wish to catalog? ";
//	int num;
//	cin >> num;
//	cin.get();
//	Car* p = new Car[num];
//	for (int i = 0; i < num; i++)
//	{
//		cout << "Car #" << i + 1 << ':' << endl;
//		cout << "Please enter the make: ";
//		cin.getline((p+i)->make, 20);
//		cout<< "Please enter the year made: ";
//		cin >> (p + i)->year;
//		cin.get();
//
//	}
//	cout << "Here is your collection" << endl;
//	for (int i = 0; i < num; i++)
//	{
//		cout << (p+i)->year << ' ' << (p+i)->make << endl;
//	}
//	delete p;
//	return 0;
//}


//8
//#include <iostream>
//#include <cstring>
//int main()
//{
//	using namespace std;
//	cout << "Enter words:" << endl;
//	char words[20];
//	int count = 0;
//	cin >> words;
//	while (strcmp(words, "done"))
//	{
//		count++;
//		cin >> words;
//	}
//	cout << "You entered a total of " << count << " words.";
//	
//	return 0;
//}


//9
//#include <iostream>
//#include <cstring>
//#include <string>
//int main()
//{
//	using namespace std;
//	cout << "Enter words:" << endl;
//	string words;
//	int count = 0;
//	cin >> words;
//	while (words != "done")
//	{
//		count++;
//		cin >> words;
//	}
//	cout << "You entered a total of " << count << " words.";
//
//	return 0;
//}


//10
#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter number of rows:" << endl;
	int row;
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		for (int x = 0; x < row - i - 1; x++)
			cout << '.';
		for (int y = row - i - 1; y < row; y++)
			cout << '*';
		cout << endl;
	}


	return 0;
}