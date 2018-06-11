#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>

typedef long long ll;
#define MIN(x, y) (x < y ? x : y)
#define MAX(x, y) (x > y ? x : y)

using namespace std;

int main(){
	ll N;
	cin >> N;

	int i = 1;
	ll ans = 1;
	for(; pow(i, 2) <= N; ++i){
		ans = pow(i, 2);
	}
	cout << ans << endl;
}
