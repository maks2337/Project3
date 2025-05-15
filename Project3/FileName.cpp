//ПРАКТИЧЕСКАЯ РАБОТА № 2. Организация данных языка программирования С/С++ 2 часть расчет по формуле
#include<cmath>
#include<iostream>

using namespace std;

int main() {
	double a = 0, b = 0, H = 0;
	setlocale(LC_ALL, "rus");
	cout << "Введите a, b, H через пробел = ";
	cin >> a >> b >> H;
	cout << "X = " << a * cos(pow(b, 3)) / H << endl;
	system("pause");
	return 0;
}