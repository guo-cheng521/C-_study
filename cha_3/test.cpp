#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*char ch = '\a';
//	cout << ch;
//	return 0;*/
//	int c1{ 100 };
//	cout << "Enter your agent code:___\b\b\b";
//	int code;
//	cin >> code;
//	cout << '\a' << code << c1 << endl;
//	return 0;
//}

//1
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int ft_per_in = 12;
//	cout << "ÇëÊäÈëÉí¸ß____(Ó¢´ç)\b\b\b\b\b\b\b\b\b\b";
//	int h;
//	cin >> h;
//	int chi, cun;
//	chi = h / ft_per_in;
//	cun = h % ft_per_in;
//	cout << "Ó¢³ßÎª£º" << chi << endl;
//	cout << "Ó¢´çÎª: " << cun << endl;
//	return 0;
//}

//4
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int d_h = 24;
//	const int h_m = 60;
//	const int m_s = 60;
//	cout << "ÇëÊäÈëÃëÊý:________\b\b\b\b\b\b\b\b";
//	long s;
//	cin >> s;
//	int d = s / d_h / h_m / m_s;
//	int h = s % (d_h * h_m * m_s) / h_m / m_s;
//	int m = s % (d_h * h_m * m_s) %( h_m * m_s)/m_s;
//	int s1 = s % (d_h * h_m * m_s) % (h_m * m_s) % m_s;
//	cout << s << " seconds = " << d << " days, " << h << " hours, " << m << " minutes, " << s1 << " seconds" << endl;
//	return 0;
//}

//5
#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter the world's population:__________\b\b\b\b\b\b\b\b\b\b";
    long long wp;
    cin >> wp;
    cout << "Enter the population of the US:__________\b\b\b\b\b\b\b\b\b\b";
    long long usp;
    cin >> usp;
    float rate;
    rate = float(usp) / float(wp) * 100;
    cout << "The population of the US is " << rate << "% of the world population." << endl;
    system("pause");

    return 0;
}