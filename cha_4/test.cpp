#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int* p = new int[10];
//	vector<int> ar(10);
//	cout << (int)p << endl;
//	cout << &ar[0] << endl;
//	delete p;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "What is your first name? ";
//	char pc[15];
//	cin.getline(pc, 15);
//	cout << "What i your last name? ";
//	char pc2[15];
//	cin.getline(pc2, 15);
//	cout << "What letter gradedo you deserve? ";
//	char grade;
//	cin >> grade;
//	cout << "what is your age? ";
//	int age;
//	cin >> age;
//
//	cout << "name: "<< pc2 <<", " << pc << '\n';
//	cout << "grade: " << char(grade + 1) << endl;
//	cout << "age: " << age << endl;
//	return 0;
//}

//2.
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string name;
//	string dessert;
//	cout << "enter your name:\n";
//	getline(cin, name);
//	cout << "enter your favorite dessert:\n";
//	getline(cin, dessert);
//	cout << "i have sone delicious " << dessert;
//	cout << " for you, " << name << ".\n";
//	return 0;
//	return 0;
//}

//3
//#include <iostream>
//#include <cstring>

//int main()
//{
//    using namespace std;
//
//    char firstname[15];
//    char lastname[15];
//    char wholename[30];
//
//    cout << "Enter your first name: ";
//    //cin.getline(firstname, 80);   //  
//    cin >> firstname;           //会把换行符留下
//    cin.get();
//    cout << "Enter your last name: ";
//    cin.getline(lastname, 15);
//    //cin >> lastname;
//    strcat_s(lastname, ", ");
//    strcat_s(lastname, firstname);
//
//    cout << "Here's the information in a single string: " << lastname << endl;
//    return 0;
//}

//4
//#include <iostream>
//#include <string>
//using namespace std;

//int main()
//{
//	string f_name;
//	string l_name;
//	string wholename;
//	cout << "Enter your first name: ";
//	getline(cin, f_name);
//	cout << "Enter your last name: ";
//	getline(cin, l_name);
//	wholename = l_name + ", " + f_name;
//	cout << "Here's the information in a single string: " << wholename << endl;
//	return 0;
//}


////5
//#include <iostream>
//using namespace std;
//
//struct CandyBar
//{
//	char name[20];
//	float weight;
//	int k;
//};
//int main()
//{
//	CandyBar snack = { "Mocha Munch",2.3,350 };
//	cout << snack.name << snack.weight << snack.k << endl;
//	return 0;
//}

////6
//#include <iostream>
//
//struct CandyBar
//{
//    char brand[20];
//    float weight;
//    int calorie;
//};
//
//int main()
//{
//    using namespace std;
//
//    CandyBar snack[3] =
//    {
//    {"Mocha Munch",2.3,350},
//    {"Fruit Salad",1.6,140},
//    {"Fried Chicken",2.4,880}
//    };
//
//    cout << "The snack is following: " << endl;
//    cout << "Brand: " << snack[0].brand << endl;
//    cout << "Weight: " << snack[0].weight << endl;
//    cout << "Calorie: " << snack[0].calorie << endl;
//    cout << "Brand: " << snack[1].brand << endl;
//    cout << "Weight: " << snack[1].weight << endl;
//    cout << "Calorie: " << snack[1].calorie << endl;
//    cout << "Brand: " << snack[2].brand << endl;
//    cout << "Weight: " << snack[2].weight << endl;
//    cout << "Calorie: " << snack[2].calorie << endl;
//    return 0;
//}


//7
//#include <iostream>
//using namespace std;
//
//struct william
//{
//	char name[20];
//	float r;
//	float weight;
//};
//int main()
//{
//	william pizza;
//	cout << "请输入名字：";
//	cin.getline(pizza.name, 20);
//	cout << "请输入直径：";
//	cin >> pizza.r;
//	cout << "输入重量";
//	cin >> pizza.weight;
//	cout << "名字：" << pizza.name << " 直径： " << pizza.r << " 重量： " << pizza.weight << endl;
//	return 0;
//}

//8
//#include <iostream>
//using namespace std;
//
//struct william
//{
//	char name[20];
//	float r;
//	float weight;
//};
//
//int main()
//{
//	william* p = new william;
//	cout << "请输入直径：";
//	cin >> p->r;
//	cin.get();
//	cout << "请输入名字：";
//	cin.getline(p->name, 20);
//	cout << "输入重量";
//	cin >> p->weight;
//	cout << "名字：" << p->name << " 直径： " << p->r << " 重量： " << p->weight << endl;
//	delete p;
//	return 0;
//}


//9
//#include <iostream>
//#include <cstring>
//
//struct CandyBar
//{
//    char brand[20];
//    float weight;
//    int calorie;
//};
//
//int main()
//{
//    using namespace std;
//    CandyBar* snack = new CandyBar[3];
//    snack[0] = { "Mocha Munch",2.3,350 };
//    //(snack + 1)->brand = "Fruit Salad";         //brand是字符数组名，不能修改，只能初始化时赋值1.用指针char* brand,2.用strcpy,3.用string
//    strcpy((snack + 1)->brand, "Fruit Salad");
//    (snack + 1)->weight = 1.6;
//    (snack + 1)->calorie = 140;
// /*   snack[1] = { "Fruit Salad",1.6,140 };*/
//    snack[2] = { "Fried Chicken",2.4,880 };
//    /*CandyBar snack[3] =
//    {
//    {"Mocha Munch",2.3,350},
//    {"Fruit Salad",1.6,140},
//    {"Fried Chicken",2.4,880}
//    };*/
//
//    cout << "The snack is following: " << endl;
//    cout << "Brand: " << snack[0].brand << endl;
//    cout << "Weight: " << snack[0].weight << endl;
//    cout << "Calorie: " << snack[0].calorie << endl;
//    cout << "Brand: " << snack[1].brand << endl;
//    cout << "Weight: " << snack[1].weight << endl;
//    cout << "Calorie: " << snack[1].calorie << endl;
//    cout << "Brand: " << snack[2].brand << endl;
//    cout << "Weight: " << snack[2].weight << endl;
//    cout << "Calorie: " << snack[2].calorie << endl;
//    return 0;
//}


//10
#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<float, 3> time;

    cout << "Enter the 1st grade: ";
    cin >> time[0];
    cout << "Enter the 2nd grade: ";
    cin >> time[1];
    cout << "Enter the 3rd grade: ";
    cin >> time[2];
    cout << "The grades are: " << time[0] << ", " << time[1] << ", " << time[2] << ".\n";
    cout << "The average grade is " << (time[0] + time[1] + time[2]) / 3 << ".\n";

	return 0;
}