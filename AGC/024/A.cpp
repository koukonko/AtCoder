#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;


int main(){
	long long A, B, C, K;
	cin >> A >> B >> C >> K;

	long long tmp = A - B;
	if(K % 2 == 1){
		tmp *= -1;
	}

	cout << tmp << endl;
}

