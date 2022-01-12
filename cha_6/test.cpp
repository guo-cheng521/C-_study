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


//5
//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	float tvarps, shui;
//	while (cin >> tvarps)
//	{
//		if (tvarps < 0)
//			break;
//		if (tvarps <= 5000)
//			cout << "0shui"<<endl;
//		else if (tvarps > 5000 && tvarps <= 15000)
//		{
//			shui = (tvarps - 5000) * 0.1;
//			cout << "shui:" << shui << endl;
//		}
//		else if (tvarps > 15000 && tvarps <= 35000)
//		{
//			shui = 10000 * 0.1 + (tvarps - 15000) * 0.15;
//			cout << "shui:" << shui << endl;
//		}
//		else
//		{
//			shui = 10000 * 0.1 + 20000 * 0.15 + (tvarps - 35000) * 0.2;
//			cout << "shui:" << shui << endl;
//		}
//	}
//	return 0;
//}


//5.1

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//
//	cout << "Please enter your income to calculate the tax:";
//	double income;
//	double tax;
//	int flag;
//	double a1 = 0.1;
//	double a2 = 0.15;
//	double a3 = 0.2;
//
//	while (cin >> income)
//	{
//		if (income >= 0)
//		{
//			if (income <= 5000)
//				flag = 0;
//			else if (5000 < income && income <= 15000)
//				flag = 1;
//			else if (15000 < income && income <= 35000)
//				flag = 2;
//			else if (35000 < income)
//				flag = 3;
//			switch (flag)
//			{
//			case 0: tax = 0;
//				break;
//			case 1: tax = (income - 5000) * a1;
//				break;
//			case 2: tax = ((income - 15000) * a2) + 1000;
//				break;
//			case 3: tax = ((income - 35000) * a3) + 4000;
//				break;
//			}
//			cout << "Your tax is: " << tax << endl;
//			cout << "Please enter next income:";
//		}
//		else if (income < 0)
//		{
//			cout << "Input fail.\nBye!\n";
//			break;
//		}
//	}
//	if (cin.fail())
//		cout << "Input fail.\nBye!\n";
//	return 0;
//}



//6
//#include <iostream>
//#include <string>
//using namespace std;
//struct Patrons
//{
//	string name;
//	double money;
//};
//int main()
//{
//	int size;
//	cout << "请输入捐款人数:";
//	cin >> size;
//	Patrons* p = new Patrons[size];
//	for (int i = 0; i < size; i++)
//	{
//		cout << "请输入第" << i + 1 << "位捐款人姓名：";
//		cin >> (p + i)->name;
//		cout<< "请输入第" << i + 1 << "位捐款金额：";
//		cin >> (p + i)->money;
//	}
//	cout << "Grand Patrons" << endl;
//	int j = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if ((p + i)->money > 10000)
//		{
//			cout << (p + i)->name << " : " << (p + i)->money << endl;
//			j++;
//		}
//	}
//	if (0 == j)
//		cout << "none" << endl;
//	cout << "Patrons" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		if ((p + i)->money <= 10000)
//		{
//			cout << (p + i)->name << " : " << (p + i)->money << endl;
//		}
//	}
//	if(j==size)
//		cout << "none" << endl;
//  delete p;
//	return 0;
//}



//7.
//#include <iostream>
//#include <cctype>
//#include <string>
//using namespace std;
//
//int main()
//{
//	cout << "enter words (q to quit):" << endl;
//	string word;
//	int type1 = 0;
//	int type2 = 0;
//	int type3 = 0;
//	while (cin >> word && word != "q")
//	{
//		if (isalpha(word[0]))
//		{
//			if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
//			{
//				++type1;
//			}
//			else
//				++type2;
//		}
//		else
//			++type3;
//		
//	}
//	cout << type1 << " words beginning with vowels" << endl;
//	cout << type2 << " words beginning with consonants" << endl;
//	cout << type3 << " others" << endl;
//	return 0;
//}



//8.
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//int main()
//{
//	char filename[20];
//	ifstream inFile;
//	cout << "Enter name of data file:";
//	cin.getline(filename, 20);
//	inFile.open(filename);
//	if (!inFile.is_open())
//	{
//		cout << "Could not open the file" << filename << endl;
//		cout << "Program terminating.\n";
//		exit(EXIT_FAILURE);
//	}
//	char word;
//	int count = 0;
//	inFile >> word;
//	while (inFile.good())
//	{
//		count++;
//		inFile >> word;
//	}
//	if (inFile.eof())
//		cout << "End of file reached.\n";
//	else if (inFile.fail())
//		cout << "Input terminated by data mismatch.\n";
//	else
//		cout << "Input terminated for unknown reasin.\n";
//	if (count == 0)
//		cout << "No data processed.\n";
//	else
//	{
//		cout << "共" << count << "个单词" << endl;
//	}
//	inFile.close();
//	return 0;
//}


//9.
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

struct Patrons
{
	string name;
	double money;
};
int main()
{
	char filename[20];
	ifstream inFile;
	cout << "Enter name of data file:";
	cin.getline(filename, 20);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file" << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	int size;
	(inFile >> size).get();
	Patrons* p = new Patrons[size];
	for (int i = 0; i < size; i++)
	{

		getline(inFile, (p + i)->name);
		double rmb;
		(inFile >> (p + i)->money).get();
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reasin.\n";
	cout << "Grand Patrons" << endl;
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if ((p + i)->money > 10000)
		{
			cout << (p + i)->name << " : " << (p + i)->money << endl;
			j++;
		}
	}
	if (0 == j)
		cout << "none" << endl;
	cout << "Patrons" << endl;
	for (int i = 0; i < size; i++)
	{
		if ((p + i)->money <= 10000)
		{
			cout << (p + i)->name << " : " << (p + i)->money << endl;
		}
	}
	if(j==size)
		cout << "none" << endl;
	delete[] p;
	inFile.close();
	return 0;
}