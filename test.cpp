#include <iostream>
using namespace std; 
int main() {
	setlocale(LC_ALL, "RU");
	int a, b;
	char sym;
	cout << "Введите первое число:";
	cin >> a;
	cout << "Введите второе число:";
	cin >> b;
	int result;
	cout << "Введите оператор:";
	cin >> sym;
	if (sym == '+') {
		result = a + b;
		cout << a << "+" << b << "=" << result;
		exit(0);
	}
	if (sym == '-') {
		result = a - b;
		cout << a << "-" << b << "=" << result;
		exit(0);
	}
	if (sym == '*') {
		result = a * b;
		cout << a << "*" << b << "=" << result;
		exit(0);

	}
	if (sym == '/') {
		result = a / b;
		cout << a << "/" << b << "=" << result;
		exit(0);

	}
	else {
		cout << "oops ERROR";
		exit(0);

	}
	return 0;
} 