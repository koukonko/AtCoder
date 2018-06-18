#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N, K;
	cin >> N >> K;

	int sum = 0;

	for(int i = 0; i < N; ++i){
		int x;
		cin >> x;

		sum += MIN(x * 2, (K - x) * 2);
	}

	cout << sum << endl;
}
