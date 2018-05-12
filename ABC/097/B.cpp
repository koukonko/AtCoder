#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	long x;
	cin >> x;

	long max = 1;
	for(int b = 2; b <= x; ++b){
		for(int p = 2; pow(b, p) <= x; ++p){
			int tmp = pow(b, p);
			max = MAX(pow(b, p), max);
		}
	}

	cout << max << endl;
}

