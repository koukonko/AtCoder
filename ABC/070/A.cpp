#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N;
	cin >> N;

	if(N / 100 == N % 10){
		cout << "Yes" << endl;
	} else{
		cout << "No" << endl;
	}
}
