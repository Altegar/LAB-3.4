// LAB-3.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Lab_03_4.cpp
// Сушинський Ігор
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 18

#include <iostream>;

using namespace std;

int main()
{
	double x;
	double y;
	double R;
	double a;
	double b;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	// розгалуження в повній формі
	if ((y <= x && (x - a) * (x - a) + (y - b) * (y - b) <= R) ||
		((x + a) * (x + a) + (y + b) * (y + b) <= R && y <= x))

		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}
