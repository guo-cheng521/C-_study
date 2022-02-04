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


#include <iostream>
using namespace std;
void other();
namespace n1
{
	int x = 1;
}
namespace n2
{
	int x = 2;
}
int main()
{
	using namespace n1;
	cout << x << endl;
	{
		int x = 4;
		cout << x << "," << n1::x << "," << n2::x << endl;

	}
	using n2::x;
	cout << x << endl;
	other();
	return 0;
}
void other()
{
	using namespace n2;
	cout << x << endl;
	{
		int x = 4;
		cout << x << "," << n1::x << "," << n2::x << endl;
	}
	using n2::x;
	cout << x << endl;
}