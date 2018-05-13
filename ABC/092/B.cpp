#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;


int main(){
	int N;
	cin >> N;

	int D, X;
	cin >> D >> X;

	int count = 0;
	for(int i = 0; i < N; ++i){
		int A;
		cin >> A;
		for(int j = 1; j <= D; j += A){
			count++;
		}
		//cout << " * " <<  count << endl;
	}

	cout << (count + X) << endl;
}

