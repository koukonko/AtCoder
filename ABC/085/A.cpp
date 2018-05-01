#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	string N;
	cin >> N;

	N.replace(0, 4, "2018");

	cout << N << endl;
}
