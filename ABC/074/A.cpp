#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	int N, A;
	cin >> N >> A;

	ll double_time = N * N;
	cout << (double_time - A) << endl;
}
