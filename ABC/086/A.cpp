#include <iostream>

using namespace std;

int main_A() {
	int a, b;
	cin >> a >> b;

	cout << ((a * b % 2 == 1) ? "Odd" : "Even") << endl;

	return 0;
}
