#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	string N;
	cin >> N;

	int size = N.size() - 2;

	cout << N[0] << size << N[N.size() - 1] << endl;
}
