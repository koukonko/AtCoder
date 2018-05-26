#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;


int main(){
	int A, B;
	cin >> A >> B;

	int max = MAX(-1000000, A + B);
	max = MAX(max, A - B);
	max = MAX(max, A * B);


	cout << max << endl;
}

