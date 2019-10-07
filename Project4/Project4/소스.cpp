#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	char c;

	cin >> a >> b >> c;

	if (c == '+')
	{
		cout << a + b;
	}
	else if (c == '-')
	{
		cout << a - b;

	}
	else if (c == '*')
	{
		cout << a * b;

	}

	if (b == 0) {
		cout << "You can't input 0 to denominator. Now denominator is 0";
		b = 1;
	}

	if (c == '/') {
		cout << a / b;
	}
}