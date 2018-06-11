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

	ll L[] = { 2, 1 };

	for(int i = 0; i <= N - 2; ++i){
		ll tmp = L[0];
		L[0] = L[1];
		L[1] = tmp + L[1];
	}
	if(N == 0) cout << L[0] << endl;
	else if(N == 1) cout << L[1] << endl;
	else cout << L[1] << endl;
}

