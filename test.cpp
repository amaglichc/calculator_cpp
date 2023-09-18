#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int num1, num2;
	char op;
	cout << "Введите первое число: ";
	cin >> num1;
	cout << "Введите второе число: ";
	cin >> num2;
	cout << "Введите оператор: ";
	cin >> op;
	switch (op) {
	case '+': cout << num1 << "+" << num2 << "=" << num1 + num2; break;
	case '-': cout << num1 << "-" << num2 << "=" << num1 - num2; break;
	case '*': cout << num1 << "*" << num2 << "=" << num1 * num2; break;
	case '/': cout << num1 << "/" << num2 << "=" << num1 / num2; break;
	default:cout << "ups ERROR";
	}
}
