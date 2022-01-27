// support.cpp -- use external variable
// compile with external.cpp
//#include <iostream>
//extern double warming;  // use warming from another file
//
//// function prototypes
//void update(double dt);
//void local();
//
//using std::cout;
//void update(double dt)      // modifies global variable
//{
//    //extern double warming;  // optional redeclaration
//    warming += dt;          // uses global warming
//    cout << "Updating global warming to " << warming;
//    cout << " degrees.\n";
//}
//
//void local()                // uses local variable
//{
//    double warming = 0.8;   // new variable hides external one
//
//    cout << "Local warming = " << warming << " degrees.\n";
//    // Access global variable with the
//    // scope resolution operator
//    cout << "But global warming = " << ::warming;
//    cout << " degrees.\n";
//}


// twofile2.cpp -- variables with internal and external linkage
//#include <iostream>
//extern int tom;         // tom defined elsewhere
//static int dick = 10;   // overrides external dick
//int harry = 200;        // external variable definition,
//                        // no conflict with twofile1 harry
//
//void remote_access()
//{
//    using namespace std;
//
//    cout << "remote_access() reports the following addresses:\n";
//    cout << &tom << " = &tom, " << &dick << " = &dick, ";
//    cout << &harry << " = &harry\n";
//}
