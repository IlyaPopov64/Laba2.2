
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, a;
	cout << "Введите трехзначное число n:" << endl;
	cin >> n;
	a = n % 100;
	cout << "Результат вычислений a:" << endl;
	cout << a << endl;
	return 0;
}