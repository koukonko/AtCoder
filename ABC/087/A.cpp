#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;


int main(){
	int X, A, B;
	cin >> X >> A >> B;

	cout << (X -= A) % B << endl;
}

