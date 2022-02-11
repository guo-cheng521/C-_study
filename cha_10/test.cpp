//#include "bank.h"
//
//int main()
//{
//	Bank b1;
//	Bank b2("guo", "qwe");
//	Bank b3 = Bank("li", "asd", 22.2);
//	b1.show();
//	b2.show();
//	b3.show();
//	b1.deposit(10.2);
//	b2.deposit(23.3);
//	b3.withdraw(10);
//	b1.show();
//	b2.show();
//	b3.show();
//	return 0;
//}


//#include "person.h"
//#include <iostream>
//int main()
//{
//	Person one;
//	Person two("Smythecraft");
//	Person three("Dimwiddy", "Sam");
//	one.Show();
//	std::cout << std::endl;
//	two.FormalShow();
//	three.Show();
//}

//#include "golf.h"
//int main()
//{
//	//using namespace std;
//	Golf g1;
//	g1.showgolf();
//	Golf g2("guo", 20);
//	g2.showgolf();
//	g2.sethandicap(50);
//	g2.showgolf();
//}

//#include "sale.h"
//
//using namespace SALES;
//int main()
//{
//	double arr1[3] = { 12.2,16.2,14.2 };
//	double arr2[6] = { 11.6,6.6,7.6,10.6,8.6,9.6 };
//	Sales s1(arr1, 3);
//	Sales s2(arr2, 6);
//	s1.showsales();
//	s2.showsales();
//	Sales s3;
//	s3.showsales();
//}


//#include <iostream>
//#include "stack.h"
//using namespace std;
//
//int main()
//{
//	Item po;
//	Stack st;
//	char ch;
//	cout << "please enter Ato add a customer\n"
//		<< "P to process a PO,or Q to quit.\n";
//	while (cin >> ch && toupper(ch) != 'Q')
//	{
//		while (cin.get() != '\n')
//			continue;
//		if (!isalpha(ch))
//		{
//			cout << '\a';
//			continue;
//		}
//		switch (ch)
//		{
//		case 'A':
//		case 'a':cout <<"Enter the name: ";
//			cin >> po.fullname;
//			cout << "Enter the payment: ";
//			cin >> po.payment;
//			if (st.isfull())
//				cout << "stack already full\n";
//			else
//				st.push(po);
//			break;
//		case 'p':
//		case 'P':
//			if (st.isempty())
//				cout << "stack already empty\n";
//			else
//			{
//				st.pop(po);
//				cout << "PO #" << po.fullname << "popped\n";
//				cout << "total:" << st.mtotal() << endl;
//			 }
//			break;
//		}
//		cout << "please enter Ato add a customer\n"
//			<< "P to process a PO,or Q to quit.\n";
//	}
//	cout << "Bye\n";
//	return 0;
//}


// usemove.cpp -- check the class and the functions

//#include <iostream>
//#include "move.h"
//using namespace std;
//
//int main()
//{
//    Move m0(12.5, 16.8);
//    Move m1(22.333, 45.567);
//    cout << "Now the first move is:\n";
//    m0.showmove();
//    cout << "Now the second move is:\n";
//    m1.showmove();
//    cout << "Please input your move:\n";
//    double a, b;
//    cout << "x: ";
//    cin >> a;
//    cout << "y: ";
//    cin >> b;
//    Move m2(a, b);
//    cout << "So your move is:\n";
//    m2.showmove();
//    cout << "Now first move adds into your move:\n";
//    m2 = m2.add(m0);
//    m2.showmove();
//    cout << "Now second move adds into your move:\n";
//    m2 = m2.add(m1);
//    m2.showmove();
//    cout << "Now reset your move:\n";
//    cout << "x: ";
//    cin >> a;
//    cout << "y: ";
//    cin >> b;
//    m2.reset(a, b);
//    cout << "So your move is:\n";
//    m2.showmove();
//
//    cout << "Bye!\n";
//    return 0;
//}

//#include "plorg.h"
//#include <iostream>
//int main()
//{
//	using namespace std;
//	Plorg pl1;
//	pl1.show();
//	char name[20];
//	int c;
//	cout << "please enter name:";
//	cin.getline(name, 20);
//	cout << "please enter ci:";
//	cin >> c;
//	Plorg pl2(name, c);
//	pl2.show();
//	pl2.setci(15);
//	pl2.show();
//	return 0;
//}


// uselist.cpp -- check the class and the functions

#include <iostream>
#include "list.h"
#include <cctype>

using namespace std;

int main()
{
    cout << "Please enter C to create your list, P to process the list, Q to quit:\n";
    char ch;
    List l;
    int data;
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << "\a";
            continue;
        }
        switch (ch)
        {
        case 'C':
        case 'c':
            if (l.isfull())
                cout << "The list already full.\n";
            else
            {
                cout << "Enter the data: ";
                cin >> data;
                l.push(data);
            }
            break;
        case 'P':
        case 'p':
            if (l.isempty())
                cout << "The list already empty.\n";
            else
            {
                l.visit(plus100);
                cout << "Every data has plused 100.\n";
            }
            break;
        case 'S':
        case 's':
            l.visit(show);
            break;
        }
        cout << "Please enter C to create your list, P to process the list, Q to quit:\n";
    }
    cout << "Bye!\n";
    return 0;
}