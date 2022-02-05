// autoscp.cpp -- illustrating scope of automatic variables
//#include <iostream>
//void oil(int x);
//int main()
//{
//    using namespace std;
//
//    int texas = 31;
//    int year = 2011;
//    cout << "In main(), texas = " << texas << ", &texas = ";
//    cout << &texas << endl;
//    cout << "In main(), year = " << year << ", &year = ";
//    cout << &year << endl;
//    oil(texas);
//    cout << "In main(), texas = " << texas << ", &texas = ";
//    cout << &texas << endl;
//    cout << "In main(), year = " << year << ", &year = ";
//    cout << &year << endl;
//    // cin.get();
//    return 0;
//}
//
//void oil(int x)
//{
//    using namespace std;
//    int texas = 5;
//
//    cout << "In oil(), texas = " << texas << ", &texas = ";
//    cout << &texas << endl;
//    cout << "In oil(), x = " << x << ", &x = ";
//    cout << &x << endl;
//    {                               // start a block
//        int texas = 113;
//        cout << "In block, texas = " << texas;
//        cout << ", &texas = " << &texas << endl;
//        cout << "In block, x = " << x << ", &x = ";
//        cout << &x << endl;
//    }                               // end a block
//    cout << "Post-block texas = " << texas;
//    cout << ", &texas = " << &texas << endl;
//}


// external.cpp -- external variable
// compile with support.cpp
//#include <iostream>
//// external variable
//double warming = 0.3;       // warming defined
//
//// function prototypes
//void update(double dt);
//void local();
//
//int main()                  // uses global variable
//{
//    using namespace std;
//    cout << "Global warming is " << warming << " degrees.\n";
//    update(0.1);            // call function to change warming
//    cout << "Global warming is " << warming << " degrees.\n";
//    local();                // call function with local warming
//    cout << "Global warming is " << warming << " degrees.\n";
//    // cin.get();
//    return 0;
//}



// twofile1.cpp -- variables with external and internal linkage
//#include <iostream>     // to be compiled with two file2.cpp
//int tom = 3;            // external variable definition
//int dick = 30;          // external variable definition
//static int harry = 300; // static, internal linkage
//// function prototype
//void remote_access();
//
//int main()
//{
//    using namespace std;
//    cout << "main() reports the following addresses:\n";
//    cout << &tom << " = &tom, " << &dick << " = &dick, ";
//    cout << &harry << " = &harry\n";
//    remote_access();
//    // cin.get();
//    return 0;
//}


// static.cpp -- using a static local variable
//#include <iostream>
//// constants
//const int ArSize = 10;
//
//// function prototype
//void strcount(const char* str);
//
//int main()
//{
//    using namespace std;
//    char input[ArSize];
//    char next;
//
//    cout << "Enter a line:\n";
//    cin.get(input, ArSize);
//    while (cin)
//    {
//        cin.get(next);
//        while (next != '\n')    // string didn't fit!
//            cin.get(next);      // dispose of remainder
//        strcount(input);
//        cout << "Enter next line (empty line to quit):\n";
//        cin.get(input, ArSize);
//    }
//    cout << "Bye\n";
//    // code to keep window open for MSVC++
//    /*
//    cin.clear();
//        while (cin.get() != '\n')
//            continue;
//        cin.get();
//    */
//    return 0;
//}
//
//void strcount(const char* str)
//{
//    using namespace std;
//    static int total = 0;        // static local variable
//    int count = 0;               // automatic local variable
//
//    cout << "\"" << str << "\" contains ";
//    while (*str++)               // go to end of string
//        count++;
//    total += count;
//    cout << count << " characters\n";
//    cout << total << " characters total\n";
//}


//#include <iostream>
//using namespace std;
//void other();
//namespace n1
//{
//	int x = 1;
//}
//namespace n2
//{
//	int x = 2;
//}
//int main()
//{
//	using namespace n1;
//	cout << x << endl;
//	{
//		int x = 4;
//		cout << x << "," << n1::x << "," << n2::x << endl;
//
//	}
//	using n2::x;
//	cout << x << endl;
//	other();
//	return 0;
//}
//void other()
//{
//	using namespace n2;
//	cout << x << endl;
//	{
//		int x = 4;
//		cout << x << "," << n1::x << "," << n2::x << endl;
//	}
//	using n2::x;
//	cout << x << endl;
//}


//#include <iostream>
//#include "golf.h"
//using namespace std;
//
//int main()
//{
//	golf use[5];
//	const char* name1 = "Li Ming";
//	int hc1 = 1;
//	setgolf(use[0], name1, hc1);
//	int i = 1;
//	for (i; i < 5; i++)
//	{
//		int ret = setgolf(use[i]);
//		if (ret == 0)
//			break;
//	}
//	for (int j = 0; j < i; j++)
//		showgolf(use[j]);
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//const int ArSize = 10;
//
//void strcount(const string str);
//int main()
//{
//	string input;
//	char next;
//	cout << "Enter a line:\n";
//	getline(cin, input);
//	while (input != "")
//	{
//		strcount(input);
//		cout << "Enternext line(empty line to quit):\n";
//		getline(cin, input);
//	}
//	cout << "bye\n";
//	return 0;
//}
//void strcount(const string str)
//{
//	static int total = 0;
//	int count = 0;
//	cout << "\"" << str << "\"contains";
//	for (count; str[count]; count++);
//	total += count;
//	cout << count << " characters\n";
//	cout << total << " characters total\n";
//}



//#include <iostream>
//#include <cstring>
//#include <new>
//using namespace std;
//
//struct chaff
//{
//	char dross[20];
//	int slag;
//};
//
//int main()
//{
//	//char buffer[10];
//	//chaff* p = new (buffer) chaff[2];
//	char* ps = new char[100];		//»º´æÇøÒª×ã¹»´ó
//	chaff* pps = new (ps) chaff[2];
//	strcpy(pps->dross, "Li ming");
//	pps->slag = 20;
//	strcpy((pps + 1)->dross, "wang ming");
//	(pps + 1)->slag = 30;
//	for (int i = 0; i < 2; i++)
//	{
//		cout << (pps + i)->dross << "    " << (pps + i)->slag << endl;
//	}
//	delete[] ps;
//	return 0;
//}


// sales.cpp -- chack the functions

#include "namesp.h"
#include <iostream>

using namespace std;
using namespace SALES;
int main()
{
    Sales s1;
    Sales s2;
    cout << "The following is the first sales' information:\n";
    setSales(s1);
    showSales(s1);
    cout << endl << endl << endl;
    cout << "The following is the second sales' information:\n";
    double ar[3] = { 12.5, 55.2, 60.7 };
    setSales(s2, ar, 3);
    showSales(s2);
    cout << endl << endl << endl;
    cout << "Bye\n";
    return 0;
}