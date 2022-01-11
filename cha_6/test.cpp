#define _CRT_SECURE_NO_WARNINGS 1
//1
//#include <iostream>
//#include <cctype>
//
//int main()
//{
//	using namespace std;
//	char ch;
//	while (cin.get(ch) && ch != '@')
//	{
//		if (isupper(ch))
//		{
//			ch = tolower(ch);
//			cout << ch;
//		}
//		else if (islower(ch))
//		{
//			ch = toupper(ch);
//			cout << ch;
//		}
//		else if (isdigit(ch))
//			continue;
//		else
//			cout << ch;
//	}
//	return 0;
//}


//2
//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	double donation[10] = { 0 };
//	double sum = 0;
//	int num = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "请输入第" << i + 1 << "个值：";
//		if (!(cin >> donation[i]))
//			break;
//		sum = sum + donation[i];
//		num++;
//	}
//	double ave = sum/num;
//	int count = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (donation[i] > ave)
//			count++;
//	}
//	cout << "平均值：" << ave << " 有" << count << "个数大于平均值" << endl;
//	return 0;
//}


//3
//#include <iostream>
//void menu();
//int main()
//{
//	using namespace std;
//	menu();
//	char ch;
//	//cin >> ch;
//	while (cin >> ch)
//	{
//		switch (ch)
//		{
//		case 'c':cout << "c is c" << endl; break;
//		case 'p':cout << "p is p" << endl; break;
//		case 't':cout << "t is t" << endl; break;
//		case 'g':cout << "g is g" << endl; break;
//		default:cout << "Please enter a c, p, t, g :"; break;
//		}
//	}
//	return 0;
//}
//void menu()
//{
//	using namespace std;
//	cout << "Please enter one of the following choices:" << endl;
//	cout << "c) carnicore\t" << "p) pianist" << endl;
//	cout << "t) tree\t\t" << "g) game" << endl;
//}

//3
// 6.3.cpp: 定义控制台应用程序的入口点。
//

//#include <iostream>
//#include <cctype>
//
//int main()
//{
//	using namespace std;
//
//	cout << "Please enter one of the following choices:" << endl;
//	cout << "c) carnicore\t" << "p) pianist" << endl;
//	cout << "t) tree\t\t" << "g) game" << endl;
//	char alpha;
//	cin.get(alpha);
//
//	while (isalpha(alpha))
//	{
//		switch (alpha)
//		{
//		case 'c': cout << "A maple is a carnivore." << endl;
//			break;
//		case 'p': cout << "A maple is a pianisit." << endl;
//			break;
//		case 't': cout << "A maple is a tree." << endl;
//			break;
//		case 'g': cout << "A maple is a game." << endl;
//			break;
//		default: cout << "Please enter a c, p, t, or g: ";
//			cin.get();
//		}
//		cin.get(alpha);
//	}
//	return 0;
//}



//4
