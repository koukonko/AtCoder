#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;


int main(){
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	A = MIN(A, B);
	C = MIN(C, D);

	cout << A + C << endl;

}

