#include <iostream>

using namespace std;

int main() {
	int N, A;
	cin >> N >> A;

	N = N % 500;

	cout << ((N <= A) ? "Yes" : "No") << endl;

}
