#include <iostream>
#include <math.h>
#include <string>

#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N;
	cin >> N;

	int sum = 0;
	int pre_n = N;
	for(long i = 100000000; i > 0; i /= 10){
		sum += pre_n / i;
		pre_n %= i;
		//cout << sum << " ";
	}
	//cout << (N % sum) << endl;
	string flag = "No";
	if(N % sum == 0){
		flag = "Yes";
	}
	cout << flag << endl;
}