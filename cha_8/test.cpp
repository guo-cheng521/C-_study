#define _CRT_SECURE_NO_WARNINGS 1

//filefunc.cpp -- function with ostream & parameter
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//using namespace std;
//
//void file_it(ostream& os, double fo, const double fe[], int n);
//const int LIMIT = 5;
//int main()
//{
//    ofstream fout;
//    const char* fn = "ep-data.txt";
//    fout.open(fn);
//    if (!fout.is_open())
//    {
//        cout << "Can't open " << fn << ". Bye.\n";
//        exit(EXIT_FAILURE);
//    }
//    double objective;
//    cout << "Enter the focal length of your "
//        "telescope objective in mm: ";
//    cin >> objective;
//    double eps[LIMIT];
//    cout << "Enter the focal lengths, in mm, of " << LIMIT
//        << " eyepieces:\n";
//    for (int i = 0; i < LIMIT; i++)
//    {
//        cout << "Eyepiece #" << i + 1 << ": ";
//        cin >> eps[i];
//    }
//    file_it(fout, objective, eps, LIMIT);
//    file_it(cout, objective, eps, LIMIT);
//    cout << "Done\n";
//    // cin.get();
//    // cin.get();
//    return 0;
//}
//
//void file_it(ostream& os, double fo, const double fe[], int n)
//{
//    // save initial formatting state
//    ios_base::fmtflags initial;
//    initial = os.setf(ios_base::fixed, ios_base::floatfield);
//    std::streamsize sz = os.precision(0);
//    os << "Focal length of objective: " << fo << " mm\n";
//    os.precision(1);
//    os.width(12);
//    os << "f.l. eyepiece";
//    os.width(15);
//    os << "magnification" << endl;
//    for (int i = 0; i < n; i++)
//    {
//        os.width(12);
//        os << fe[i];
//        os.width(15);
//        os << int(fo / fe[i] + 0.5) << endl;
//    }
//    // restore initial formatting state
//    os.setf(initial, ios_base::floatfield);
//    os.precision(sz);
//}



// left.cpp -- string function with a default argument
//#include <iostream>
//const int ArSize = 80;
//char* left(const char* str, int n = 1);
//int main()
//{
//    using namespace std;
//    char sample[ArSize];
//    cout << "Enter a string:\n";
//    cin.get(sample, ArSize);
//    char* ps = left(sample, 4);
//    cout << ps << endl;
//    delete[] ps;       // free old string
//    ps = left(sample);
//    cout << ps << endl;
//    delete[] ps;       // free new string
//    // cin.get();
//    // cin.get();
//    return 0;
//}
//
//// This function returns a pointer to a new string
//// consisting of the first n characters in the str string.
//char* left(const char* str, int n)
//{
//    if (n < 0)
//        n = 0;
//    char* p = new char[n + 1];
//    int i;
//    for (i = 0; i < n && str[i]; i++)
//        p[i] = str[i];  // copy characters
//    while (i <= n)
//        p[i++] = '\0';  // set rest of string to '\0'
//    return p;
//}


// leftover.cpp -- overloading the left() function
//#include <iostream>
//unsigned long left(unsigned long num, unsigned ct);
//char* left(const char* str, int n = 1);
//
//int main()
//{
//    using namespace std;
//    const char* trip = "Hawaii!!";   // test value
//    unsigned long n = 12345678; // test value
//    int i;
//    char* temp;
//
//    for (i = 1; i < 10; i++)
//    {
//        cout << left(n, i) << endl;
//        temp = left(trip, i);
//        cout << temp << endl;
//        delete[] temp; // point to temporary storage
//    }
//    // cin.get();
//    return 0;
//
//}
//
//// This function returns the first ct digits of the number num.
//unsigned long left(unsigned long num, unsigned ct)
//{
//    unsigned digits = 1;
//    unsigned long n = num;
//
//    if (ct == 0 || num == 0)
//        return 0;       // return 0 if no digits
//    while (n /= 10)
//        digits++;
//    if (digits > ct)
//    {
//        ct = digits - ct;
//        while (ct--)
//            num /= 10;
//        return num;         // return left ct digits
//    }
//    else                // if ct >= number of digits
//        return num;     // return the whole number
//}
//
//// This function returns a pointer to a new string
//// consisting of the first n characters in the str string.
//char* left(const char* str, int n)
//{
//    if (n < 0)
//        n = 0;
//    char* p = new char[n + 1];
//    int i;
//    for (i = 0; i < n && str[i]; i++)
//        p[i] = str[i];  // copy characters
//    while (i <= n)
//        p[i++] = '\0';  // set rest of string to '\0'
//    return p;
//}


// funtemp.cpp -- using a function template
//#include <iostream>
//// function template prototype
//template <typename T>  // or class T
//void Swap(T& a, T& b);
//
//int main()
//{
//    using namespace std;
//    int i = 10;
//    int j = 20;
//    cout << "i, j = " << i << ", " << j << ".\n";
//    cout << "Using compiler-generated int swapper:\n";
//    Swap(i, j);  // generates void Swap(int &, int &)
//    cout << "Now i, j = " << i << ", " << j << ".\n";
//
//    double x = 24.5;
//    double y = 81.7;
//    cout << "x, y = " << x << ", " << y << ".\n";
//    cout << "Using compiler-generated double swapper:\n";
//    Swap(x, y);  // generates void Swap(double &, double &)
//    cout << "Now x, y = " << x << ", " << y << ".\n";
//    // cin.get();
//    return 0;
//}
//
//// function template definition
//template <typename T>  // or class T
//void Swap(T& a, T& b)
//{
//    T temp;   // temp a variable of type T
//    temp = a;
//    a = b;
//    b = temp;
//}


// twoswap.cpp -- specialization overrides a template
#include <iostream>
template <typename T>
void Swap(T& a, T& b);

struct job
{
    char name[40];
    double salary;
    int floor;
};

// explicit specialization 
template <> void Swap<job>(job& j1, job& j2);
void Show(job& j);

int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i, j);    // generates void Swap(int &, int &)
    cout << "Now i, j = " << i << ", " << j << ".\n";

    job sue = { "Susan Yaffee", 73000.60, 7 };
    job sidney = { "Sidney Taffee", 78060.72, 9 };
    cout << "Before job swapping:\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney); // uses void Swap(job &, job &)
    cout << "After job swapping:\n";
    Show(sue);
    Show(sidney);
    // cin.get();
    return 0;
}

template <typename T>
void Swap(T& a, T& b)    // general version
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// swaps just the salary and floor fields of a job structure

template <> void Swap<job>(job& j1, job& j2)  // specialization
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job& j)
{
    using namespace std;
    cout << j.name << ": $" << j.salary
        << " on floor " << j.floor << endl;
}

